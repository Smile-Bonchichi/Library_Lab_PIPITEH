<?php

namespace App;

use App\Task;
use App\User;
use Illuminate\Database\Eloquent\Model;

class Task extends Model
{
    //
    // protected $table = 'create_tasks_table';
    // return 
    /**
   * Массово присваиваемые атрибуты.
   *
   * @var array
   */
  protected $fillable = ['name'];

  /**
   * Получить пользователя - владельца данной задачи
   */
  public function user()
  {
    return $this->belongsTo(User::class);
  }
}
