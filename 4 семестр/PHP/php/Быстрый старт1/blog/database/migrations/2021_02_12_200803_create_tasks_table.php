<?php

use Illuminate\Support\Facades\Schema;
use Illuminate\Database\Schema\Blueprint;
  use Illuminate\Database\Migrations\Migration;

  class CreateTasksTable extends Migration
  {
    /**
    * Запуск миграций
    *
    * @return void
    */
    public function up()
    {
      Schema::create('tasks', function (Blueprint $table) {
        $table->increments('id');
        $table->string('name');
        $table->timestamps();
      });
    }

    /**
    * Откатить миграции
    *
    * @return void
    */
    public function down()
    {
      Schema::drop('tasks');
    }
  }