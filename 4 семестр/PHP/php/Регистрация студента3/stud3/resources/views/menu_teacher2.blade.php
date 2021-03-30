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
                @foreach ($registrations as $registration)
                    <tr>
                        <!-- Название факультета -->
                    {{--                            <td class="table-text">--}}
                    {{--                                <div>{{ $registration->course_name }}</div>--}}
                    {{--                            </td>--}}

                    <!-- Аббревиатура факультета -->

                        <a href="{{ url('menu_teacher_student/'.$registration->registration_id) }}}"
                           class="list-group-item list-group-item-action text-center">
                            {{ $registration ->student_first_name
                            .' '.$registration ->student_last_name
                            .' '.$registration ->student_group
                            .', Модуль №1: '.$registration ->registration_mark_module1
                            .', Модуль №2: '.$registration ->registration_mark_module2
                            .', Доп. баллы: '.$registration ->registration_mark_extra
                            .', Сессия: '.$registration ->registration_mark_session}}
                        </a>


                    </tr>
                @endforeach
            </div>
        </div>
    @endif

    <!-- Текущие факультеты -->



@endsection
