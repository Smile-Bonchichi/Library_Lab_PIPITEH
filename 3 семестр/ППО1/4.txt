4_1 {
	select * from seats
	where aircraft_code = 'CN1';

	INSERT INTO seats
	(aircraft_code, seat_no, fare_conditions)
	VALUES('CN1', '7A', 'Economy'),
	('CN1', '7B', 'Economy');
}

4_2 {
	select * from seats
	where aircraft_code = '319' and
	(seat_no like '6%' or seat_no like '7%' or seat_no like '8%');
	
	UPDATE seats
	SET fare_conditions='Business'
	WHERE aircraft_code='319' AND 
	(seat_no like '6%' or seat_no like '7%' or seat_no like '8%');
}

4_3 {
	INSERT INTO bookings
	(book_ref, book_date, total_amount)
	VALUES('Nurdin', '2017-08-21', 30000);
	
	INSERT INTO tickets
	(ticket_no, book_ref, passenger_id, passenger_name, contact_data)
	VALUES('0005435999874', 'Nurdin', '9999 989430', 'Ulan uulu Nurdin', '{"phone": "+996779977288"}');
	
	INSERT INTO ticket_flights
	(ticket_no, flight_id, fare_conditions, amount)
	VALUES('0005435999874', 4251, 'Economy', 15000);

	INSERT INTO ticket_flights
	(ticket_no, flight_id, fare_conditions, amount)
	VALUES('0005435999874', 26580, 'Economy', 15000);
}

4_4 {
	alter table ticket_flights
	add column vip boolean default false;

	alter table ticket_flights 
	add column vip_amount int default 0;
}

4_5 {
	create table customer_regular (
		passenger_no BIGSERIAL PRIMARY Key,
		passenger_id char(13) REFERENCES tickets(ticket_no),
		passenger_name text not null,
		bank_card int not null,
		contact_date jsonb null,
		sale int default 0
	);
	
	alter table ticket_flights
	add column ticket_pa int REFERENCES customer_regular(passenger_no);
}

4_6 {
	alter table customer_regular
	add column have_animal bool default false;
	
	create table animal (
		animal_id int REFERENCES customer_regular(passenger_no),
		name char,
		weight int
	);
}