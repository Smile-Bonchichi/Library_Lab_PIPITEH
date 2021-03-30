<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Регистрация</h1>

    <div class="panel-body">
        <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    <!-- Форма новой задачи -->
        <form action="{{ url('/courses_student_add') }}" method="POST" class="form-horizontal">
            {{ csrf_field() }}

            <div class="form-group">
                <label for="teacher_department" class="col-sm-3 control-label">Курс</label>
                <div class="col-sm-6">
                    <select name="course_id" class="form-control">
                        @foreach ($courses as $course)
                            <option value="{{ $course->course_id }}">{{ $course->course_name }} </option>
                        @endforeach
                    </select>
                </div>
            </div>

            <!-- Кнопка добавления задачи -->
            <div class="form-group">
                <div class="col-sm-offset-3 col-sm-6">
                    <button type="submit" class="btn btn-default">
                        <i class="fa fa-plus"></i> Добавить задачу
                    </button>
                </div>
            </div>
        </form>
    </div>
@endsection
