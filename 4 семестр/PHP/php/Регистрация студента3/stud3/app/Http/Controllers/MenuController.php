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
        if($request->user()->user_type == 'student'){
            return  view('menu_student');
        }
        elseif ($request->user()->user_type == 'teacher'){
            return  redirect('\menu_teacher');
        }
        return view('menu');
    }

}
