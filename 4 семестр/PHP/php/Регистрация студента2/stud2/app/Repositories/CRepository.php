<?php

namespace App\Repositories;

use App\User;
use App\Faculty;

class CRepository
{
  /**
   * Получить все задачи заданного пользователя.
   *
   * @return Collection
   */
  
  public function getFaculties()
  {
    return Faculty::orderBy('created_at', 'asc')->get();
    // return Task::where('user_id', $user->id)
    //                 ->orderBy('created_at', 'asc')
    //                 ->get();
  }
}