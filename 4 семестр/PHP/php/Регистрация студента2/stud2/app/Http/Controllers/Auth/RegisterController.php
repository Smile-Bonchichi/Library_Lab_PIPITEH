<?php

namespace App\Http\Controllers\Auth;

use App\User;
use App\Http\Controllers\Controller;
use Illuminate\Support\Facades\Hash;
use Illuminate\Support\Facades\Validator;
use Illuminate\Foundation\Auth\RegistersUsers;
use App\Faculty;
use App\Department;
use App\Teacher;
use App\Course;
use App\Student;
use App\Registration;


class RegisterController extends Controller
{
    /*
    |--------------------------------------------------------------------------
    | Register Controller
    |--------------------------------------------------------------------------
    |
    | This controller handles the registration of new users as well as their
    | validation and creation. By default this controller uses a trait to
    | provide this functionality without requiring any additional code.
    |
    */

    use RegistersUsers;

    /**
     * Where to redirect users after registration.
     *
     * @var string
     */
     protected $redirectTo = '/menu';

    /**
     * Create a new controller instance.
     *
     * @return void
     */
    public function __construct()
    {
        $this->middleware('guest');
    }

    /**
     * Get a validator for an incoming registration request.
     *
     * @param  array  $data
     * @return \Illuminate\Contracts\Validation\Validator
     */
    protected function validator(array $data)
    {
        return Validator::make($data, [
            'name' => ['required', 'string', 'max:255'],
            'email' => ['required', 'string', 'email', 'max:255', 'unique:users'],
            'password' => ['required', 'string', 'min:8', 'confirmed'],
        ]);
    }

    /**
     * Create a new user instance after a valid registration.
     *
     * @param  array  $data
     * @return \App\User
     */
    protected function create(array $data)
    {
        if($data['user_type'] == 'student'){
            $student = new Student;
            $student->student_first_name = $data['student_first_name'];
            $student->student_last_name = $data['student_last_name'];
            $student->student_group = $data['student_group'];
            $student->student_phone = $data['student_phone'];
            $student->student_email = $data['email'];
            $student->student_book = $data['name'];

            $student->save();
            return User::create([
                'name' => $data['name'],
                'email' => $data['email'],
                'user_type' => $data['user_type'],
                'user_id' => $student->student_id,
                'password' => Hash::make($data['password']),
            ]);
        }
        elseif ($data['user_type'] == 'teacher'){
            $teacher = new Teacher;
            $teacher->teacher_first_name = $data['teacher_first_name'];
            $teacher->teacher_last_name = $data['teacher_last_name'];
            $teacher->teacher_department_id = $data['department_id'];
            $teacher->save();
            return User::create([
//                'name' => $teacher->teacher_id,
//                'name' => $data['email'],
                'name' => $data['name'],
                'email' => $data['email'],
                'user_type' => $data['user_type'],
                'user_id' => $teacher->teacher_id,
                'password' => Hash::make($data['password']),
            ]);
        }
        return User::create([
            'name' => $data['name'],
            'email' => $data['email'],
            'user_type' => $data['user_type'],
            'user_id' => 1,
            'password' => Hash::make($data['password']),
        ]);
    }
}
