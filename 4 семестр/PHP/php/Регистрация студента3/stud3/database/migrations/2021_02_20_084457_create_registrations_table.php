<?php

use Illuminate\Support\Facades\Schema;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Database\Migrations\Migration;

class CreateRegistrationsTable extends Migration
{
    /**
     * Run the migrations.
     *
     * @return void
     */
    public function up()
    {
        Schema::create('registrations', function (Blueprint $table) {
            $table->bigIncrements('registration_id');
            $table->integer('registration_student_id')->index();
            $table->integer('registration_course_id')->index();
            $table->string('registration_status', 50);
            $table->mediumInteger('registration_mark_module1');
            $table->mediumInteger('registration_mark_module');
            $table->mediumInteger('registration_mark_extra');
            $table->mediumInteger('registration_mark_session');
            $table->timestamps();
        });
    }

    /**
     * Reverse the migrations.
     *
     * @return void
     */
    public function down()
    {
        Schema::dropIfExists('registrations');
    }
}
