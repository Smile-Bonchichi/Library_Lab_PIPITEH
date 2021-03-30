<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Регистрация</h1>

    <div class="panel-body">
        <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    <!-- Форма новой задачи -->
        <form action="{{ url('reg') }}" method="POST" class="form-horizontal">
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

            <div class="form-group">
                <label for="teacher_department" class="col-sm-3 control-label">Студент</label>
                <div class="col-sm-6">
                    <select name="student_id" class="form-control">
                        @foreach ($students as $student)
                            <option value="{{ $student->student_id }}">{{ $student->student_first_name }} {{ $student->student_last_name }}</option>
                        @endforeach
                    </select>
                </div>
            </div>

            <!-- Имя задачи -->


            <div class="form-group">
                <label for="teacher_department" class="col-sm-3 control-label">Статус</label>
                <div class="col-sm-6">
                    <select name="status" class="form-control">
                        @foreach ($statuses as $status)
                            <option value="{{ $status }}">{{ $status }}</option>
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

    @if (count($registrations) > 0)
        <div class="panel panel-default">
            <div class="panel-body">
                <table class="table table-striped faculty-table">

                    <!-- Заголовок таблицы -->
                    <thead>
                    <th>Курс</th>
                    <th>Студент</th>
                    <th>Статус</th>
                    <th>Дата создания</th>
                    <th>Дата обновления</th>
                    </thead>

                    <!-- Тело таблицы -->
                    <tbody>
                    @foreach ($registrations as $registration)
                        <tr>
                            <!-- Название факультета -->
                            <td class="table-text">
                                <div>{{ $registration->course_name }}</div>
                            </td>

                            <!-- Аббревиатура факультета -->
                            <td class="table-text">
                                <div>{{ $registration ->student_first_name}} {{ $registration ->student_last_name}}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $registration ->registration_status }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $registration ->created_at }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $registration ->updated_at }}</div>
                            </td>


                            <!-- Кнопка Удалить -->
                            <td>
                                <form action="{{ url('reg/'.$registration->registration_id) }}" method="POST">
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
