  <!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Преподаватели</h1>

  <div class="panel-body">
    <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    <!-- Форма новой задачи -->
    <form action="{{ url('teacher') }}" method="POST" class="form-horizontal">
      {{ csrf_field() }}

      <!-- Имя задачи -->
      <div class="form-group">
        <label for="task" class="col-sm-3 control-label">Имя</label>

        <div class="col-sm-6">
          <input type="text" name="teacher_first_name" id="task-name" class="form-control">
        </div>
      </div>

      <!-- Имя задачи -->
      <div class="form-group">
        <label for="task" class="col-sm-3 control-label">Фамилия</label>

        <div class="col-sm-6">
          <input type="text" name="teacher_last_name" id="task-name" class="form-control">
        </div>
      </div>

      <div class="form-group">
        <label for="teacher_department" class="col-sm-3 control-label">Кафедра</label>
        <div class="col-sm-6">
          <select name="department_id" class="form-control">
              @foreach ($departments as $department)
                <option value="{{ $department->department_id }}">{{ $department->department_abbr }}</option>
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

  @if (count($teachers) > 0)
      <div class="panel panel-default">
        <div class="panel-body">
          <table class="table table-striped faculty-table">

            <!-- Заголовок таблицы -->
            <thead>
              <th>Имя</th>
              <th>Фамилия</th>
              <th>Кафедра</th>
            </thead>

            <!-- Тело таблицы -->
            <tbody>
              @foreach ($teachers as $teacher)
                <tr>
                  <!-- Название факультета -->
                  <td class="table-text">
                    <div>{{ $teacher->teacher_first_name }}</div>
                  </td>

                  <!-- Аббревиатура факультета -->
                  <td class="table-text">
                    <div>{{ $teacher->teacher_last_name }}</div>
                  </td>

                  <td class="table-text">
                    <div>{{ $teacher->department_abbr }}</div>
                  </td>

                    <!-- Кнопка Удалить -->
                  <td>
                    <form action="{{ url('teacher/'.$teacher->teacher_id) }}" method="POST">
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
