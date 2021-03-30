  <!-- resources/views/faculty.blade.php -->

@extends('layouts.app')

@section('content')

    <h1>Кафедры</h1>

  <div class="panel-body">
    <!-- Отображение ошибок проверки ввода -->
    @include('common.errors')

    <!-- Форма новой задачи -->
    <form action="{{ url('department') }}" method="POST" class="form-horizontal">
      {{ csrf_field() }}

      <!-- Имя задачи -->
      <div class="form-group">
        <label for="task" class="col-sm-3 control-label">Наименование</label>

        <div class="col-sm-6">
          <input type="text" name="department_name" id="task-name" class="form-control">
        </div>
      </div>

      <!-- Имя задачи -->
      <div class="form-group">
        <label for="task" class="col-sm-3 control-label">Аббривиатура</label>

        <div class="col-sm-6">
          <input type="text" name="department_abbr" id="task-name" class="form-control">
        </div>
      </div>

      <div class="form-group">
        <label for="department_faculty" class="col-sm-3 control-label">Факультет</label>
        <div class="col-sm-6">
          <select name="faculty_id" class="form-control">
              @foreach ($faculties as $faculty)
                <option value="{{ $faculty->faculty_id }}">{{ $faculty->faculty_abbr }}</option>
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

  @if (count($departments) > 0)
  <div class="panel panel-default">
    <div class="panel-body">
      <table class="table table-striped faculty-table">

        <!-- Заголовок таблицы -->
        <thead>
          <th>Наименование</th>
          <th>Аббривиатура</th>
          <th>Факультет</th>
          <th>&nbsp;</th>
        </thead>

        <!-- Тело таблицы -->
        <tbody>
          @foreach ($departments as $department)
            <tr>
              <!-- Название факультета -->
              <td class="table-text">
                <div>{{ $department->department_name }}</div>
              </td>

              <!-- Аббревиатура факультета -->
              <td class="table-text">
                <div>{{ $department->department_abbr }}</div>
              </td>

              <td class="table-text">
                <div>{{ $department->faculty_name }}</div>
              </td>

                <!-- Кнопка Удалить -->
                  <td>
                    <form action="{{ url('department/'.$department->department_id) }}" method="POST">
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
