<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Курсы</h1>

    <div class="panel-body">
        <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    <!-- Форма новой задачи -->
        <form action="{{ url('course') }}" method="POST" class="form-horizontal">
        {{ csrf_field() }}

        <!-- Имя задачи -->
            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Наименование</label>

                <div class="col-sm-6">
                    <input type="text" name="course_name" id="task-name" class="form-control">
                </div>
            </div>

            <!-- Имя задачи -->
            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Описание</label>

                <div class="col-sm-6">
                    <input type="text" name="course_description" id="task-name" class="form-control">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Кредиты</label>

                <div class="col-sm-6">
                    <input type="number" name="course_credit" id="task-name" class="form-control">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Семестр</label>

                <div class="col-sm-6">
                    <input type="number" name="course_semestr" id="task-name" class="form-control">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Лимит</label>

                <div class="col-sm-6">
                    <input type="number" name="course_limit" id="task-name" class="form-control">
                </div>
            </div>

            <div class="form-group">
                <label for="teacher_department" class="col-sm-3 control-label">Преподаватель</label>
                <div class="col-sm-6">
                    <select name="teacher_id" class="form-control">
                        @foreach ($teachers as $teacher)
                            <option value="{{ $teacher->teacher_id }}">{{ $teacher->teacher_first_name }} {{ $teacher->teacher_last_name }}</option>
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

    @if (count($courses) > 0)
        <div class="panel panel-default">
            <div class="panel-body">
                <table class="table table-striped faculty-table">

                    <!-- Заголовок таблицы -->
                    <thead>
                    <th>Наименование</th>
                    <th>Описание</th>
                    <th>Кредиты</th>
                    <th>Семестр</th>
                    <th>Преподаватель</th>
                    <th>&nbsp;</th>
                    </thead>

                    <!-- Тело таблицы -->
                    <tbody>
                    @foreach ($courses as $course)
                        <tr>
                            <!-- Название факультета -->
                            <td class="table-text">
                                <div>{{ $course->course_name }}</div>
                            </td>

                            <!-- Аббревиатура факультета -->
                            <td class="table-text">
                                <div>{{ $course->course_description }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $course->course_credit }}</div>
                            </td>

                            <!-- Аббревиатура факультета -->
                            <td class="table-text">
                                <div>{{ $course->course_semestr }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $course->teacher_first_name }} {{ $course->teacher_last_name }}</div>
                            </td>

                            <!-- Кнопка Удалить -->
                            <td>
                                <form action="{{ url('course/'.$course->course_id) }}" method="POST">
                                    {{ csrf_field() }}
                                    {{ method_field('DELETE') }}

                                    <button type="submit" class="btn btn-danger">
                                        <i class="fa fa-trash"></i> Удалить
                                    </button>
                                </form>
                            </td>

                        </tr>
                    @endforeach
                    </tbody>
                </table>
            </div>
        </div>
    @endif

    <!-- Текущие факультеты -->



@endsection
