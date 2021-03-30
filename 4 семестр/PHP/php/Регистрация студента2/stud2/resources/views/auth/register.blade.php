@extends('layouts.app')

@section('content')
    <div class="container">
        <div class="row justify-content-center">
            <div class="col-md-8">
                <div class="card">
                    <div class="card-header">{{ __('Register') }}</div>

                    <div class="card-body">
                        <form method="POST" action="{{ route('register') }}">
                            @csrf
                            @if($user_type == 'student')
                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Тип пользователя</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="user_type" class="form-control" id="SetClinic1" value="{{ $user_type }}" readonly>
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Имя</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="student_first_name" id="task-name" class="form-control">
                                    </div>
                                </div>

                                <!-- Имя задачи -->
                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Фамилия</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="student_last_name" id="task-name" class="form-control">
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Группа</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="student_group" id="task-name" class="form-control">
                                    </div>
                                </div>

                                <!-- Имя задачи -->
                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Телефон</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="student_phone" id="task-name" class="form-control">
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="email" class="col-md-4 col-form-label text-md-right">Почта</label>

                                    <div class="col-md-6">
                                        <input id="email" type="email" class="form-control @error('email') is-invalid @enderror" name="email" value="{{ old('email') }}" required autocomplete="email">

                                        @error('email')
                                        <span class="invalid-feedback" role="alert">
                                            <strong>{{ $message }}</strong>
                                        </span>
                                        @enderror
                                    </div>
                                </div>


                                <div class="form-group row">
                                    <label for="name" class="col-md-4 col-form-label text-md-right">Номер зачетки</label>

                                    <div class="col-md-6">
                                        <input id="name" type="text" class="form-control @error('name') is-invalid @enderror" name="name" value="{{ old('name') }}" required autocomplete="name" autofocus>

                                        @error('name')
                                        <span class="invalid-feedback" role="alert">
                                        <strong>{{ $message }}</strong>
                                    </span>
                                        @enderror
                                    </div>
                                </div>


                                <div class="form-group row">
                                    <label for="password" class="col-md-4 col-form-label text-md-right">Пароль</label>

                                    <div class="col-md-6">
                                        <input id="password" type="password" class="form-control @error('password') is-invalid @enderror" name="password" required autocomplete="new-password">

                                        @error('password')
                                        <span class="invalid-feedback" role="alert">
                                            <strong>{{ $message }}</strong>
                                        </span>
                                        @enderror
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="password-confirm" class="col-md-4 col-form-label text-md-right">Подтверждение пароля</label>

                                    <div class="col-md-6">
                                        <input id="password-confirm" type="password" class="form-control" name="password_confirmation" required autocomplete="new-password">
                                    </div>
                                </div>
                            @elseif($user_type == 'teacher')
                                <div class="form-group row">
                                    <label for="name" class="col-md-4 col-form-label text-md-right">Пользователь</label>

                                    <div class="col-md-6">
                                        <input id="name" type="text" class="form-control @error('name') is-invalid @enderror" name="name" value="{{ old('name') }}" required autocomplete="name" autofocus>

                                        @error('name')
                                        <span class="invalid-feedback" role="alert">
                                        <strong>{{ $message }}</strong>
                                    </span>
                                        @enderror
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Тип пользователя</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="user_type" class="form-control" id="SetClinic1" value="{{ $user_type }}" readonly>
                                    </div>
                                </div>


                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Имя</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="teacher_first_name" id="task-name" class="form-control">
                                    </div>
                                </div>

                                <!-- Имя задачи -->
                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Фамилия</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="teacher_last_name" id="task-name" class="form-control">
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="teacher_department" class="col-md-4 col-form-label text-md-right">Кафедра</label>
                                    <div class="col-sm-6">
                                        <select name="department_id" class="form-control">
                                            @foreach ($departments as $department)
                                                <option value="{{ $department->department_id }}">{{ $department->department_abbr }}</option>
                                            @endforeach
                                        </select>
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="email" class="col-md-4 col-form-label text-md-right">Почта</label>

                                    <div class="col-md-6">
                                        <input id="email" type="email" class="form-control @error('email') is-invalid @enderror" name="email" value="{{ old('email') }}" required autocomplete="email">

                                        @error('email')
                                        <span class="invalid-feedback" role="alert">
                                            <strong>{{ $message }}</strong>
                                        </span>
                                        @enderror
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="password" class="col-md-4 col-form-label text-md-right">Пароль</label>

                                    <div class="col-md-6">
                                        <input id="password" type="password" class="form-control @error('password') is-invalid @enderror" name="password" required autocomplete="new-password">

                                        @error('password')
                                        <span class="invalid-feedback" role="alert">
                                            <strong>{{ $message }}</strong>
                                        </span>
                                        @enderror
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="password-confirm" class="col-md-4 col-form-label text-md-right">Подтверждение пароля</label>

                                    <div class="col-md-6">
                                        <input id="password-confirm" type="password" class="form-control" name="password_confirmation" required autocomplete="new-password">
                                    </div>
                                </div>
                            @else
                                <div class="form-group row">
                                    <label for="task" class="col-md-4 col-form-label text-md-right">Тип пользователя</label>

                                    <div class="col-sm-6">
                                        <input type="text" name="user_type" class="form-control" id="SetClinic1" value="{{ $user_type }}" readonly>
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="name" class="col-md-4 col-form-label text-md-right">{{ __('Name') }}</label>

                                    <div class="col-md-6">
                                        <input id="name" type="text" class="form-control @error('name') is-invalid @enderror" name="name" value="{{ old('name') }}" required autocomplete="name" autofocus>

                                        @error('name')
                                        <span class="invalid-feedback" role="alert">
                                        <strong>{{ $message }}</strong>
                                    </span>
                                        @enderror
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="email" class="col-md-4 col-form-label text-md-right">{{ __('E-Mail Address') }}</label>

                                    <div class="col-md-6">
                                        <input id="email" type="email" class="form-control @error('email') is-invalid @enderror" name="email" value="{{ old('email') }}" required autocomplete="email">

                                        @error('email')
                                        <span class="invalid-feedback" role="alert">
                                        <strong>{{ $message }}</strong>
                                    </span>
                                        @enderror
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="password" class="col-md-4 col-form-label text-md-right">{{ __('Password') }}</label>

                                    <div class="col-md-6">
                                        <input id="password" type="password" class="form-control @error('password') is-invalid @enderror" name="password" required autocomplete="new-password">

                                        @error('password')
                                        <span class="invalid-feedback" role="alert">
                                        <strong>{{ $message }}</strong>
                                    </span>
                                        @enderror
                                    </div>
                                </div>

                                <div class="form-group row">
                                    <label for="password-confirm" class="col-md-4 col-form-label text-md-right">{{ __('Confirm Password') }}</label>

                                    <div class="col-md-6">
                                        <input id="password-confirm" type="password" class="form-control" name="password_confirmation" required autocomplete="new-password">
                                    </div>
                                </div>
                            @endif

                            <div class="form-group row mb-0">
                                <div class="col-md-6 offset-md-4">
                                    <button type="submit" class="btn btn-primary">
                                        {{ __('Register') }}
                                    </button>
                                </div>
                            </div>
                        </form>
                    </div>
                </div>
            </div>
        </div>
    </div>
@endsection
