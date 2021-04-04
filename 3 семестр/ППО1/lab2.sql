Lab2_1 {
	create table professor(
		ID_prof BIGSERIAL PRIMARY KEY,
		ФИО VARCHAR(50)
	);
	
	create table courses (
		ID_cour BIGSERIAL PRIMARY KEY,
		Название_предмета VARCHAR(50),
		ID_prof INT REFERENCES professor(ID_prof)
	);
	
	create table students (
		ID_stud BIGSERIAL PRIMARY KEY,
		ФИО VARCHAR(50),
		ID_cour INT REFERENCES courses(ID_cour)
	);
	
	create table exams (
		ID_cour INT REFERENCES courses(ID_cour),
		Название_предмета VARCHAR(50),
		ID_stud INT REFERENCES students(ID_stud),
		ID_prof INT REFERENCES professor(ID_prof),
		
		CONSTRAINT id_exams PRIMARY KEY(ID_stud, ID_cour, ID_prof)
	);
}

Lab2_2 {
	create table city (
		ID_city BIGSERIAL PRIMARY KEY,
		Город VARCHAR(50)
	);

	create table average (
		ID_avg BIGSERIAL PRIMARY KEY,
		ID_city INT REFERENCES city(ID_city),
		Утренняя_температура INT,
		Дневная_температура INT,
		Вечерняя_температура INT,
		Средняя_температура DECIMAL(10,2)
	 );
	 
	create table main (
		ID_avg INT REFERENCES average(ID_avg),
		ID_city INT REFERENCES city(ID_city),
		Температура INT,
		Влажность INT,
		Скорость_ветра INT,
		Дата_получения DATE,	
		CONSTRAINT id_main PRIMARY KEY(ID_avg, ID_city)
	);
}

Lab2_3{
	create table car (
	ID_Car BIGSERIAL PRIMARY KEY,
	Марка_авто VARCHAR(50),
	Модель VARCHAR(50),
	Год_выпуска DATE,
	Цвет VARCHAR(50),
	Объем DECIMAL(4,1)
);
	
	create table Salon (
	ID_salon BIGSERIAL,
	ID_car INT REFERENCES car(ID_Car),
	Адрес_салона VARCHAR(50),
	Есть_в_наличии VARCHAR(50),
	Цена INT,
	CONSTRAINT id_salon PRIMARY KEY(ID_car)
);
}