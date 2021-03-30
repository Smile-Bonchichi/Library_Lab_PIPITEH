<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Студенты</h1>

    <div class="panel-body">
        <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    <!-- Форма новой задачи -->
        <form action="{{ url('student') }}" method="POST" class="form-horizontal">
        {{ csrf_field() }}

        <!-- Имя задачи -->
            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Имя</label>

                <div class="col-sm-6">
                    <input type="text" name="student_first_name" id="task-name" class="form-control">
                </div>
            </div>

            <!-- Имя задачи -->
            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Фамилия</label>

                <div class="col-sm-6">
                    <input type="text" name="student_last_name" id="task-name" class="form-control">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Группа</label>

                <div class="col-sm-6">
                    <input type="text" name="student_group" id="task-name" class="form-control">
                </div>
            </div>

            <!-- Имя задачи -->
            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Телефон</label>

                <div class="col-sm-6">
                    <input type="text" name="student_phone" id="task-name" class="form-control">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Почта</label>

                <div class="col-sm-6">
                    <input type="text" name="student_email" id="task-name" class="form-control">
                </div>
            </div>

            <!-- Имя задачи -->
            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Номер зачетки</label>

                <div class="col-sm-6">
                    <input type="text" name="student_book" id="task-name" class="form-control">
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

    @if (count($students) > 0)
        <div class="panel panel-default">
            <div class="panel-body">
                <table class="table table-striped faculty-table">

                    <!-- Заголовок таблицы -->
                    <thead>
                    <th>Имя</th>
                    <th>Фамилия</th>
                    <th>Группа</th>
                    <th>Телефон</th>
                    <th>Почта</th>
                    <th>Номер зачетки</th>
                    </thead>

                    <!-- Тело таблицы -->
                    <tbody>
                    @foreach ($students as $student)
                        <tr>
                            <!-- Название факультета -->
                            <td class="table-text">
                                <div>{{ $student->student_first_name }}</div>
                            </td>

                            <!-- Аббревиатура факультета -->
                            <td class="table-text">
                                <div>{{ $student->student_last_name }}</div>
                            </td>
                            <td class="table-text">
                                <div>{{ $student->student_group }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $student->student_phone }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $student->student_email  }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $student->student_book }}</div>
                            </td>

                            <!-- Кнопка Удалить -->
                            <td>
                                <form action="{{ url('student/'.$student->student_id) }}" method="POST">
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
