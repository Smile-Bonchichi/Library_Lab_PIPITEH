<!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Регистрация</h1>

    <div class="panel-body">
        <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    <!-- Форма новой задачи -->
        <form action="{{ url('/menu_teacher_student') }}" method="POST" class="form-horizontal">
            {{ csrf_field() }}

            <div class="form-group row">
                <label for="task" class="col-md-4 col-form-label text-md-right">Номер регистрации</label>

                <div class="col-sm-6">
                    <input type="text" name="registration_id" class="form-control" id="SetClinic1" value="{{ $registration->registration_id }}" readonly>
                </div>
            </div>

            <div class="p-3 mb-2 bg-light text-dark">{{ $registration->student_first_name }}</div>
            <div class="p-3 mb-2 bg-light text-dark">{{ $registration->student_last_name }}</div>
            <div class="p-3 mb-2 bg-light text-dark">{{ $registration->student_group }}</div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Модуль №1</label>

                <div class="col-sm-6">
                    <input type="number" name="mark_module1" id="task-name" class="form-control" value="{{ $registration->registration_mark_module1  }}">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Модуль №2</label>

                <div class="col-sm-6">
                    <input type="number" name="mark_module2" id="task-name" class="form-control" value="{{ $registration->registration_mark_module2  }}">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Доп. баллы</label>

                <div class="col-sm-6">
                    <input type="number" name="mark_extra" id="task-name" class="form-control" value="{{ $registration->registration_mark_extra  }}">
                </div>
            </div>

            <div class="form-group">
                <label for="task" class="col-sm-3 control-label">Сессия</label>

                <div class="col-sm-6">
                    <input type="number" name="mark_session" id="task-name" class="form-control" value="{{ $registration->registration_mark_session  }}">
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
