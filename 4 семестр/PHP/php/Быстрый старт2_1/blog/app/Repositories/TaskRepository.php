<?php

namespace App\Repositories;

use App\User;
use App\Task;

class TaskRepository
{
  /**
   * Получить все задачи заданного пользователя.
   *
   * @param  User  $user
   * @return Collection
   */
  
  public function forUser(User $user)
  {
    return $user->tasks()
              ->orderBy('created_at', 'asc')
              ->get();
    // return Task::where('user_id', $user->id)
    //                 ->orderBy('created_at', 'asc')
    //                 ->get();
  }
}