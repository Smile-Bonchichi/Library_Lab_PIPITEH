Lab2_1 {
	create table professor(
		ID_prof BIGSERIAL PRIMARY KEY,
		��� VARCHAR(50)
	);
	
	create table courses (
		ID_cour BIGSERIAL PRIMARY KEY,
		��������_�������� VARCHAR(50),
		ID_prof INT REFERENCES professor(ID_prof)
	);
	
	create table students (
		ID_stud BIGSERIAL PRIMARY KEY,
		��� VARCHAR(50),
		ID_cour INT REFERENCES courses(ID_cour)
	);
	
	create table exams (
		ID_cour INT REFERENCES courses(ID_cour),
		��������_�������� VARCHAR(50),
		ID_stud INT REFERENCES students(ID_stud),
		ID_prof INT REFERENCES professor(ID_prof),
		
		CONSTRAINT id_exams PRIMARY KEY(ID_stud, ID_cour, ID_prof)
	);
}

Lab2_2 {
	create table city (
		ID_city BIGSERIAL PRIMARY KEY,
		����� VARCHAR(50)
	);

	create table average (
		ID_avg BIGSERIAL PRIMARY KEY,
		ID_city INT REFERENCES city(ID_city),
		��������_����������� INT,
		�������_����������� INT,
		��������_����������� INT,
		�������_����������� DECIMAL(10,2)
	 );
	 
	create table main (
		ID_avg INT REFERENCES average(ID_avg),
		ID_city INT REFERENCES city(ID_city),
		����������� INT,
		��������� INT,
		��������_����� INT,
		����_��������� DATE,	
		CONSTRAINT id_main PRIMARY KEY(ID_avg, ID_city)
	);
}

Lab2_3{
	create table car (
	ID_Car BIGSERIAL PRIMARY KEY,
	�����_���� VARCHAR(50),
	������ VARCHAR(50),
	���_������� DATE,
	���� VARCHAR(50),
	����� DECIMAL(4,1)
);
	
	create table Salon (
	ID_salon BIGSERIAL,
	ID_car INT REFERENCES car(ID_Car),
	�����_������ VARCHAR(50),
	����_�_������� VARCHAR(50),
	���� INT,
	CONSTRAINT id_salon PRIMARY KEY(ID_car)
);
}