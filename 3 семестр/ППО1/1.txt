	create table emplo(
		ID_e BIGSERIAL PRIMARY KEY,
		surname VARCHAR(50),
		name VARCHAR(50),
		middle VARCHAR(50),
		position VARCHAR(50),
		wages INT
	);
	
	create table accruals(
		ID_a INT REFERENCES emplo(ID_e),
		type_add_money VARCHAR(50),
		sum_add_money INT
	);
	
	create table fines(
		ID_f INT REFERENCES emplo(ID_e),
		type_del_money VARCHAR(50),
		sum_del_money INT
	);
	
	create table net_wages(
		ID_s INT REFERENCES emplo(ID_e),
		sum_salary INT,
		sum_retention INT, 
		net_sum INT
	);
	
	create table period(
		ID_p INT REFERENCES emplo(ID_e),
		month VARCHAR(10),
		date_begin date,
		date_end date,
		sum_wages INT,
		flag boolean
	);