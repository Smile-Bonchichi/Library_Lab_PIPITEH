@extends('layouts.app')

@section('content')


    <div class="list-group">
        <a href="{{ url('faculty') }}" class="list-group-item list-group-item-action text-center">Факультет</a>
{{--        <a href="{{ url('faculty') }}" class="list-group-item list-group-item-action active">Факультет</a>--}}
        <a href="{{ url('department') }}" class="list-group-item list-group-item-action text-center">Кафедра</a>
        <a href="{{ url('teacher') }}" class="list-group-item list-group-item-action text-center">Преподователь</a>
        <a href="{{ url('course') }}" class="list-group-item list-group-item-action text-center">Курсы</a>
        <a href="{{ url('student') }}" class="list-group-item list-group-item-action text-center">Студенты</a>
        <a href="{{ url('reg') }}" class="list-group-item list-group-item-action text-center">Регистрация</a>
{{--        <a href="{{ url('reg') }}" class="list-group-item list-group-item-action disabled">Vestibulum at eros</a>--}}
    </div>

@endsection
