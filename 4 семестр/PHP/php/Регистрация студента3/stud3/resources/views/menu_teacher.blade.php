<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1 class="text-center">Курсы</h1>

    <div class="panel-body">
        <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    @if (count($courses) > 0)
        <div class="panel panel-default">
            <div class="panel-body">
                @foreach ($courses as $course)
                    <a href="{{ url('menu_teacher/'.$course->course_id) }}}" class="list-group-item list-group-item-action text-center">{{ $course->course_name }}</a>
                @endforeach
            </div>
        </div>
    @endif
@endsection
