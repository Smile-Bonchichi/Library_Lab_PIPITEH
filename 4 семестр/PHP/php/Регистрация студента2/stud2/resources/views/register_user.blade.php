@extends('layouts.app')

@section('content')
    <div class="container">
        <div class="row justify-content-center">
            <div class="col-md-8">
                <div class="card">
                    <div class="card-header">Регистрация</div>

                    <div class="card-body">
                        <form method="POST" action="{{ url('register_user') }}">
                            @csrf

                            <div class="form-group row">
                                <label for="name" class="col-md-4 col-form-label text-md-right">Тип пользователя</label>
                                <div class="col-md-4 col-form-label text-md-right">
                                    <select name="type1" class="form-control">
                                        @foreach ($types as $type)
                                            <option value="{{ $type }}"><h1>{{ $type }}</h1></option>
                                        @endforeach
                                    </select>
                                </div>
                            </div>
                            <label for="name" class="col-md-4 col-form-label text-md-right"></label>

                            <div class="form-group row mb-0">
                                <div class="col-md-6 offset-md-4">
                                    <button type="submit" class="btn btn-primary">
                                        Регистрация
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
