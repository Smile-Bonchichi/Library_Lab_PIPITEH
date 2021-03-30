<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Курсы</h1>

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
                    <th>Модуль №1</th>
                    <th>Модуль №2</th>
                    <th>Доп. баллы</th>
                    <th>Сессия</th>
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
                                <div>{{ $course->registration_mark_module1 }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $course->registration_mark_module2 }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $course->registration_mark_extra }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $course->registration_mark_session }}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $course->teacher_first_name }} {{ $course->teacher_last_name }}</div>
                            </td>

                            <!-- Кнопка Удалить -->
                            <td>
                                <form action="{{ url('courses_student/'.$course->registration_id) }}" method="POST">
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
