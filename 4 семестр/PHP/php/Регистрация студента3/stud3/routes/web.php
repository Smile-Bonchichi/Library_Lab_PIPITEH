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


use App\Mail\OrderShipped;
use App\User;
use Illuminate\Http\Request;
use App\Task;
use App\Faculty;
use App\Department;
use App\Teacher;
use App\Course;
use App\Student;
use App\Registration;
use Illuminate\Support\Facades\Mail;


//Главная страница
Route::get('/', function () {
    return view('welcome');
});

//Контролееры входа
Route::get('auth/login', 'Auth\LoginController@showLoginForm')->name('auth');
Route::post('auth/login', 'Auth\LoginController@login');
Route::get('auth/logout', 'Auth\LoginController@logout');

//Контролееры регистрации
Route::get('auth/register', 'Auth\RegisterController@showRegistrationForm');
Route::post('auth/register', 'Auth\RegisterController@register');

//Страница выбора типа пользователя
Route::get('/register_user', function () {
    $types = ['student', 'teacher', 'admin'];
    return view('register_user',['types' => $types]);
});

//Отправка выбора тип пользователя
Route::post('/register_user', function (Request $request) {
    $user_type = $request->type1;
    $departments = Department::orderBy('created_at', 'asc')->get();
    return view('Auth/register', ['user_type' => $user_type, 'departments' => $departments]);
});

//Меню для студента
Route::get('/menu_student', function () {
    return view('menu_student');
});

//Список курсов для студента
Route::get('/courses_student', function () {
    $courses = Course::select('*')
        ->Join('teachers', 'courses.course_teacher_id', '=', 'teachers.teacher_id')
        ->Join('registrations', 'courses.course_id', '=', 'registrations.registration_course_id')
        ->Join('students', 'registrations.registration_student_id', '=', 'students.student_id')
        ->where('student_book', Auth::user()->name)
        ->get();

    return view('courses_student', [
        'courses' => $courses
    ]);
});

//Страница добавления регистрации для студента
Route::get('/courses_student_add', function () {
    $courses = Course::orderBy('created_at', 'asc')->get();
    return view('courses_student_add',['courses'=>$courses]);
});

//Добавление регистрации для студента
Route::post('/courses_student_add', function (Request $request) {

    $student = Student::where('student_id', '=', Auth::user()->user_id)->firstOrFail();
    $course = Course::where('course_id', '=', $request->course_id)->firstOrFail();
    $teacher = Teacher::where('teacher_id', '=', $course->course_teacher_id)->firstOrFail();
    $user = User::where('user_id', '=', $teacher->teacher_id)->where('user_type', '=', 'teacher')->firstOrFail();


    $userName = $teacher->teacher_first_name.' '.$teacher->teacher_last_name;
    $email = $user->email;
//    $email = 'erkin1399@gmail.com';
    $msg = 'Студент '.$student->student_first_name
        .' '.$student->student_last_name
        .' подписался на курс '.$course->course_name;



    $student1 = Student::orderBy('created_at', 'asc')->where('student_book', Auth::user()->name)->first();

    $registrations = Registration::orderBy('created_at', 'asc')
        ->where('registration_student_id', $student1->student_id)
        ->get();

    foreach ($registrations as $registration){
        if ($registration->registration_course_id == $request->course_id){
            return redirect('/courses_student');
        }
    }

    $registrations2 = Registration::select('*')
        ->leftJoin('courses', 'registrations.registration_course_id', '=', 'courses.course_id')
        ->leftJoin('students', 'registrations.registration_student_id', '=', 'students.student_id')
        ->get();
//    die ($registrations->where('course_id', $request->course_id)->count());
    $course = Course::orderBy('created_at', 'asc')->where('course_id', $request->course_id)->first();
    if($registrations2->where('course_id', $request->course_id)->count() >= $course->course_limit){
        return redirect('/courses_student');
    }

    $registration = new Registration;
    $registration->registration_student_id = $student1->student_id;
    $registration->registration_course_id = $request->course_id;
    $registration->registration_status = 'accept';

    $registration->registration_mark_module1 = 0;
    $registration->registration_mark_module2 = 0;
    $registration->registration_mark_extra = 0;
    $registration->registration_mark_session = 0;

//    foreach ($registrations as $registration){
//        if ($registration->registration_student_id == $request->student_id & $registration->registration_course_id == $request->course_id){
//            return redirect('/courses_student');
//        }
//    }

    $registration->save();

    Mail::to($email)->send(new \App\Mail\MailClass($userName, $msg));

    return redirect('/courses_student');
});

Route::get('send', 'mailController@send');


//Удаление регистрации для студента
Route::delete('/courses_student/{registration}', function (Registration $registration) {
    $student = Student::where('student_id', '=', $registration->registration_student_id)->firstOrFail();
    $course = Course::where('course_id', '=', $registration->registration_course_id)->firstOrFail();
    $teacher = Teacher::where('teacher_id', '=', $course->course_teacher_id)->firstOrFail();
    $user = User::where('user_id', '=', $teacher->teacher_id)->where('user_type', '=', 'teacher')->firstOrFail();


    $userName = $teacher->teacher_first_name.' '.$teacher->teacher_last_name;
    $email = $user->email;
    $msg = 'Студент '.$student->student_first_name
      .' '.$student->student_last_name
      .' отказался от курса '.$course->course_name;

    Mail::to($email)->send(new \App\Mail\MailClass($userName, $msg));
//    die('mail sent!');
    $registration->delete();

    return redirect('/courses_student');
});

//Меню для преподавателя
Route::get('/menu_teacher', function () {
    $courses = Course::select('*')
        // ->from('departments')
        ->Join('teachers', 'courses.course_teacher_id', '=', 'teachers.teacher_id')
        ->where('teachers.teacher_id', Auth::user()->user_id)
        ->get();
    return view('menu_teacher',['courses' =>  $courses]);
});

//Список для учителя
Route::get('/menu_teacher/{course}', function (Course $course) {
    $registrations = Registration::select('*')
        ->leftJoin('courses', 'registrations.registration_course_id', '=', 'courses.course_id')
        ->leftJoin('students', 'registrations.registration_student_id', '=', 'students.student_id')
        ->where('courses.course_id', $course->course_id)
        ->get();
    return view('menu_teacher2',['registrations' =>  $registrations]);
});

Route::get('/menu_teacher_student/{registration}', function (Registration $registration) {
    $registration2 = Registration::select('*')
        ->leftJoin('courses', 'registrations.registration_course_id', '=', 'courses.course_id')
        ->leftJoin('students', 'registrations.registration_student_id', '=', 'students.student_id')
        ->where('registrations.registration_id', $registration->registration_id)
        ->get()->first();
    return view('menu_teacher_student',['registration' =>  $registration2]);
});

Route::post('/menu_teacher_student', function (Request $request) {
    Registration::where('registration_id',$request->registration_id)->update([
        'registration_mark_module1' => $request->mark_module1,
        'registration_mark_module2' => $request->mark_module2,
        'registration_mark_extra' => $request->mark_extra,
        'registration_mark_session' => $request->mark_session,
    ]);

    $courses = Course::select('*')
        // ->from('departments')
        ->Join('teachers', 'courses.course_teacher_id', '=', 'teachers.teacher_id')
        ->where('teachers.teacher_id', Auth::user()->user_id)
        ->get();
    return view('menu_teacher',['courses' =>  $courses]);
});

//Меню для админа
Route::get('/menu', 'MenuController@index');

//Страница факультет для админа
Route::get('/faculty', function () {
    $faculties = Faculty::orderBy('created_at', 'asc')->get();

    return view('faculty', [
        'faculties' => $faculties
    ]);
});

//Добавление факультета для админа
Route::post('/faculty', function (Request $request) {
    $faculty = new Faculty;
    $faculty->faculty_abbr = $request->faculty_abbr;
    $faculty->faculty_name = $request->faculty_name;
    $faculty->save();

    return redirect('/faculty');
});

//Удаление факультета для админа
Route::delete('/faculty/{faculty}', function (Faculty $faculty) {
    $faculty->delete();

    return redirect('/faculty');
});

//Страница кафедры для админа
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

//Добавление кафедры для админа
Route::post('/department', function (Request $request) {


    $department = new Department;
    $department->department_abbr = $request->department_abbr;
    $department->department_name = $request->department_name;
    $department->department_faculty_id = $request->faculty_id;
    $department->save();

    return redirect('/department');
});

//Удаление кафедры для админа
Route::delete('/department/{department}', function (Department $department) {
    $department->delete();

    return redirect('/department');
});

//Страница преподавателя для админа
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

//Добавление преподавателя для админа
Route::post('/teacher', function (Request $request) {


    $teacher = new Teacher;
    $teacher->teacher_first_name = $request->teacher_first_name;
    $teacher->teacher_last_name = $request->teacher_last_name;
    $teacher->teacher_department_id = $request->department_id;
    $teacher->save();

    return redirect('/teacher');
});

//Удаление преподавателя для админа
Route::delete('/teacher/{teacher}', function (Teacher $teacher) {
    $teacher->delete();

    return redirect('/teacher');
});


//Страница курса для админа
Route::get('/course', function () {
    $teachers = Teacher::orderBy('created_at', 'asc')->get();
    $courses = Course::select('*')
        // ->from('departments')
        ->leftJoin('teachers', 'courses.course_teacher_id', '=', 'teachers.teacher_id')
        ->get();

    return view('course', [
        'courses' => $courses,
        'teachers' => $teachers
    ]);
});

//Добавление курса для админа
Route::post('/course', function (Request $request) {


    $course = new Course;
    $course->course_name = $request->course_name;
    $course->course_description = $request->course_description;
    $course->course_credit = $request->course_credit;
    $course->course_semestr= $request->course_semestr;
    $course->course_limit= $request->course_limit;
    $course->course_teacher_id = $request->teacher_id;
    $course->save();

    return redirect('/course');
});

//Удаление курса для админа
Route::delete('/course/{course}', function (Course $course) {
    $course->delete();

    return redirect('/course');
});


//Страница факультет для админа
Route::get('/student', function () {
    $students = Student::orderBy('created_at', 'asc')->get();

    return view('student', [
        'students' => $students
    ]);
});

//Добавление студента для админа
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

//Удаление студента для админа
Route::delete('/student/{student}', function (Student $student) {
    $student->delete();

    return redirect('/student');
});

//Страница регистрации для админа
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

//Добавление регистрации для админа
Route::post('/reg', function (Request $request) {
    $registrations = Registration::select('*')
        ->leftJoin('courses', 'registrations.registration_course_id', '=', 'courses.course_id')
        ->leftJoin('students', 'registrations.registration_student_id', '=', 'students.student_id')
        ->get();

    $registration = new Registration;
    $registration->registration_student_id = $request->student_id;
    $registration->registration_course_id = $request->course_id;
    $registration->registration_status = $request->status;
    $registration->registration_module1 = 0;
    $registration->registration_module2 = 0;
    $registration->registration_extra = 0;
    $registration->registration_status = 0;

    foreach ($registrations as $registration){
        if ($registration->registration_student_id == $request->student_id){
            return redirect('/reg');
        }
    }

    $registration->save();

    return redirect('/reg');
});

//Удаление регистрации для админа
Route::delete('/reg/{registration}', function (Registration $registration) {
    $title = 'Студент '.Auth::user()->name.' отказался от курса';
    $txt = 'Гы';
    $userName = Auth::user()->name;
    $email = 'erkin1399@gmail.com';

    $msg = "Студент";

//    $msg = "adsasfd";

    Mail::to($email)->send(new \App\Mail\MailClass($userName, $msg));

    $registration->delete();

    return redirect('/reg');
});

Route::auth();

Route::get('/home', 'HomeController@index')->name('home');
