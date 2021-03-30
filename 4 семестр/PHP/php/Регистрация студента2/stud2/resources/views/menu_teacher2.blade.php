<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1 class="text-center">Регистрация</h1>

    <div class="panel-body">
        <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')


    @if (count($registrations) > 0)
            <h2 class="text-center">{{$registrations->first()->course_name}}</h2>
        <div class="panel panel-default">
            <div class="panel-body">
                <table class="table table-striped faculty-table">

                    <!-- Заголовок таблицы -->
                    <thead>
                    <th>Студент</th>
                    <th>Статус</th>
{{--                    <th>Дата создания</th>--}}
{{--                    <th>Дата обновления</th>--}}
                    </thead>

                    <!-- Тело таблицы -->
                    <tbody>
                    @foreach ($registrations as $registration)
                        <tr>
                            <!-- Название факультета -->
{{--                            <td class="table-text">--}}
{{--                                <div>{{ $registration->course_name }}</div>--}}
{{--                            </td>--}}

                            <!-- Аббревиатура факультета -->
                            <td class="table-text">
                                <div>{{ $registration ->student_first_name}} {{ $registration ->student_last_name}}</div>
                            </td>

                            <td class="table-text">
                                <div>{{ $registration ->registration_status }}</div>
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


                        </tr>
                    @endforeach
                    </tbody>
                </table>
            </div>
        </div>
    @endif

    <!-- Текущие факультеты -->



@endsection
