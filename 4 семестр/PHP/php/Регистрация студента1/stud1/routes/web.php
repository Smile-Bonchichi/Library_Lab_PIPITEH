<?php

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/


use Illuminate\Http\Request;
use App\Task;
use App\Faculty;
use App\Department;
use App\Teacher;
use App\Course;
use App\Student;
use App\Registration;



Route::get('/', function () {
  return view('welcome');
});

// Маршруты аутентификации...
/**
 * Маршруты аутентификации
 */
Route::get('auth/login', 'Auth\LoginController@showLoginForm')->name('auth');
Route::post('auth/login', 'Auth\LoginController@login');
Route::get('auth/logout', 'Auth\LoginController@logout');

/**
 * Маршруты регистрации
 */
Route::get('auth/register', 'Auth\RegisterController@showRegistrationForm');
Route::post('auth/register', 'Auth\RegisterController@register');


Route::get('/', function () {
    return view('welcome');
});

Route::get('/menu', 'MenuController@index');


Route::get('/faculty', function () {
    $faculties = Faculty::orderBy('created_at', 'asc')->get();

    return view('faculty', [
      'faculties' => $faculties
    ]);
});

Route::post('/faculty', function (Request $request) {
    $faculty = new Faculty;
    $faculty->faculty_abbr = $request->faculty_abbr;
    $faculty->faculty_name = $request->faculty_name;
    $faculty->save();

    return redirect('/faculty');
});

Route::delete('/faculty/{faculty}', function (Faculty $faculty) {
  $faculty->delete();

  return redirect('/faculty');
});

Route::get('/department', function () {
    $faculties = Faculty::orderBy('created_at', 'asc')->get();
    $departments = Department::select('*')
        // ->from('departments')
        ->leftJoin('faculties', 'departments.department_faculty_id', '=', 'faculties.faculty_id')
        ->get();


    return view('department', [
      'departments' => $departments,
      'faculties' => $faculties
    ]);
});

Route::post('/department', function (Request $request) {


    $department = new Department;
    $department->department_abbr = $request->department_abbr;
    $department->department_name = $request->department_name;
    $department->department_faculty_id = $request->faculty_id;
    $department->save();

    return redirect('/department');
});

Route::delete('/department/{department}', function (Department $department) {
  $department->delete();

  return redirect('/department');
});

Route::get('/teacher', function () {
    $departments = Department::orderBy('created_at', 'asc')->get();
    $teachers = Teacher::select('*')
        ->leftJoin('departments', 'teachers.teacher_department_id', '=', 'departments.department_id')
        ->get();


    return view('teacher', [
      'teachers' => $teachers,
      'departments' => $departments
    ]);
});

Route::post('/teacher', function (Request $request) {


    $teacher = new Teacher;
    $teacher->teacher_first_name = $request->teacher_first_name;
    $teacher->teacher_last_name = $request->teacher_last_name;
    $teacher->teacher_department_id = $request->department_id;
    $teacher->save();

    return redirect('/teacher');
});

Route::delete('/teacher/{teacher}', function (Teacher $teacher) {
  $teacher->delete();

  return redirect('/teacher');
});

Route::get('/course', function () {
    $teachers = Teacher::orderBy('created_at', 'asc')->get();
    $courses = Course::select('*')
        // ->from('departments')
        ->leftJoin('teachers', 'courses.course_teacher_id', '=', 'teachers.teacher_id')
        ->get();
    // $departments = Department::orderBy('created_at', 'asc')->get();


    return view('course', [
        'courses' => $courses,
        'teachers' => $teachers
    ]);
});

Route::post('/course', function (Request $request) {


    $course = new Course;
    $course->course_name = $request->course_name;
    $course->course_description = $request->course_description;
    $course->course_credit = $request->course_credit;
    $course->course_semestr= $request->course_semestr;
    $course->course_teacher_id = $request->teacher_id;
    $course->save();

    return redirect('/course');
});

Route::delete('/course/{course}', function (Course $course) {
    $course->delete();

    return redirect('/course');
});

Route::get('/student', function () {
    $students = Student::orderBy('created_at', 'asc')->get();

    return view('student', [
        'students' => $students
    ]);
});

Route::post('/student', function (Request $request) {

    $student = new Student;
    $student->student_first_name = $request->student_first_name;
    $student->student_last_name = $request->student_last_name;
    $student->student_group = $request->student_group;
    $student->student_phone = $request->student_phone;
    $student->student_email = $request->student_email;
    $student->student_book = $request->student_book;

    $student->save();

    return redirect('/student');
});

Route::delete('/student/{student}', function (Student $student) {
    $student->delete();

    return redirect('/student');
});

Route::get('/reg', function () {
    $courses = Course::orderBy('created_at', 'asc')->get();
    $students = Student::orderBy('created_at', 'asc')->get();
    $statuses = ['waiting', 'accept'];
    $registrations = Registration::select('*')
        ->leftJoin('courses', 'registrations.registration_course_id', '=', 'courses.course_id')
        ->leftJoin('students', 'registrations.registration_student_id', '=', 'students.student_id')

        ->get();

    return view('reg', [
        'students' => $students,
        'courses' => $courses,
        'statuses' => $statuses,
        'registrations' => $registrations
    ]);
});

Route::post('/reg', function (Request $request) {
    $registrations = Registration::select('*')
        ->leftJoin('courses', 'registrations.registration_course_id', '=', 'courses.course_id')
        ->leftJoin('students', 'registrations.registration_student_id', '=', 'students.student_id')
        ->get();

    $registration = new Registration;
    $registration->registration_student_id = $request->student_id;
    $registration->registration_course_id = $request->course_id;
    $registration->registration_status = $request->status;

    foreach ($registrations as $registration){
        if ($registration->registration_student_id == $request->student_id){
            return redirect('/reg');
        }
    }

    $registration->save();

    return redirect('/reg');
});

Route::delete('/reg/{registration}', function (Registration $registration) {
    $registration->delete();

    return redirect('/reg');
});

Route::auth();

Route::get('/home', 'HomeController@index')->name('home');
