@extends('layouts.app')

@section('content')


    <div class="list-group">
        <a href="{{ url('courses_student') }}" class="list-group-item list-group-item-action text-center">Список курсов</a>
        <a href="{{ url('courses_student_add') }}" class="list-group-item list-group-item-action text-center">Выбор курса</a>
    </div>

@endsection
