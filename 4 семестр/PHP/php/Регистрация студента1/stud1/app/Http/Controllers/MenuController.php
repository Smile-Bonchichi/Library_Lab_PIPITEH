<?php

namespace App\Http\Controllers;

use App\Http\Controllers\Controller;
use App\User;
use App\Faculty;
use App\Department;
use App\Teacher;
use App\Course;
use App\Student;
use App\Registration;
use Illuminate\Http\Request;

class MenuController extends Controller
{
    protected $tasks;

    public function __construct()
    {
        $this->middleware('auth');
    }

    public function index(Request $request)
    {
//        $countFepartments = Department::get()->countBy();
//        $countDepartments = Department::get()->countBy();
//        $countTeachers = Teacher::get()->countBy();
//        $countCourses = Course::get()->countBy();
//        $countStudents = Student::get()->countBy();
//
//        return view('department', [
//            'count1' => $countDepartments,
//            'count2' => $countTeachers,
//            'count3' => $countCourses,
//            'count4' => $countCourses,
//        ]);
        return view('menu');
    }

}
