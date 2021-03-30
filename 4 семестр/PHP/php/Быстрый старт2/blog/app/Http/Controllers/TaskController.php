<?php

namespace App\Http\Controllers;

use App\Task;
use App\User;
use App\Http\Requests;
use Illuminate\Http\Request;
use App\Http\Controllers\Controller;
use App\Repositories\TaskRepository;

class TaskController extends Controller
{
    //
	protected $tasks;

	// $user = App\User::find(1);

	//   foreach ($user->tasks as $task) {
	//     echo $task->name;
	//   }

    public function __construct()
  	{
    	$this->middleware('auth');

    	// $this->tasks = $tasks;
  	}

 //  	public function index(Request $request)
	// {
	//   $tasks = $request->user()->tasks()->get();

	//   //для версии 5.1
	//   //$tasks = Task::where('user_id', $request->user()->id)->get();

	//   return view('tasks.index', [
	//     'tasks' => $tasks,
	//   ]);
	// }
	public function index(Request $request)
  	{
    	// return view('tasks.index', [
     //  	'tasks' => $this->tasks->forUser($request->user()),
    	// ]);
    	$tasks = $request->user()->tasks()->get();

	  	return view('tasks.index', [
	    	'tasks' => $tasks,
	  	]);
  	}

	public function store(Request $request)
	{
	  $this->validate($request, [
	    'name' => 'required|max:255',
	  ]);

	  $request->user()->tasks()->create([
	    'name' => $request->name,
	  ]);

	  return redirect('/tasks');
	}

	/**
	* Уничтожение заданной задачи.
	*
	* @param  Request  $request
	* @param  Task  $task
	* @return Response
	*/
	public function destroy(Request $request, Task $task)
	{
	    // $this->authorize('destroy', $task);

	    // Удаление задачи...
	    $this->authorize('destroy', $task);

	    $task->delete();

	    return redirect('/tasks');
	}

}
