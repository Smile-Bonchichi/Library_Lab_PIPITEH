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

// Route::get('/', function () {
//     return view('welcome');
// });
use Illuminate\Http\Request;
use App\Task;


Route::get('/', function () {
  return view('welcome');
});



// Route::group(['middleware' => ['web']], function () {

//     Route::get('/', function () {
//         return view('welcome');
//     })->middleware('guest');

//     Route::get('/tasks', 'TaskController@index');
//     Route::post('/task', 'TaskController@store');
//     Route::delete('/task/{task}', 'TaskController@destroy');

//     Route::auth();

// });

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

Route::get('/tasks', 'TaskController@index');
Route::post('/task', 'TaskController@store');
Route::post('/task/{task}', 'TaskController@store2');
Route::delete('/task/{task}', 'TaskController@destroy');

Route::auth();

// Auth::routes();

Route::get('/home', 'HomeController@index')->name('home');