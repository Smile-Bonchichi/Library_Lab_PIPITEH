3_1 {
	select 0;
}

3_2 {
	select model, range from aircrafts_data;
}

3_3 {
	select model, range from aircrafts where range > 10000 or range < 4000;
	select * from aircrafts where range > 6000 and model not like '%100';
}

3_4 {
	select *, (actual_arrival - actual_departure) as Разница
	from flights 
	where status = 'Arrived';
}

3_5 {
	select * from flights where departure_airport = 'LED' 
	and status = 'Cancelled' 
	and EXTRACT(DOW FROM scheduled_arrival) = 4;
}

3_6 {
	select passenger_name, fare_conditions, amount 
	from tickets, ticket_flights where amount > 70000 
	and fare_conditions = 'Economy' 
	and tickets.ticket_no = ticket_flights.ticket_no;
}

3_7 {
	Select 
	tk.passenger_name, 
	fl.departure_airport,
	fl.arrival_airport,
	fl.scheduled_departure,
	fl.scheduled_arrival,
	bp.seat_no
	from Boarding_passes bp
	Join flights fl on bp.flight_id = fl.flight_id
	Join tickets tk on tk.ticket_no = bp.ticket_no;
}

3_8 {
	select tickets.passenger_name, fl.flight_no, bp.seat_no, count(*) over()
	from ticket_flights tf
	join tickets tickets on tickets.ticket_no = tf.ticket_no
	join flights fl on tf.flight_id = fl.flight_id
	left join Boarding_passes bp on bp.flight_id = tf.flight_id and tf.ticket_no = bp.ticket_no
	where bp.seat_no is null
	group by(tickets.passenger_name, fl.flight_no, bp.seat_no);
}

3_9 {
	select f2.flight_id, status, s.seat_no, bp.seat_no
	from flights f2
	join seats s on s.aircraft_code = f2.aircraft_code 
	left join boarding_passes bp on bp.flight_id = f2.flight_id 
	and s.seat_no = bp.seat_no 
	where f2.departure_airport = 'AAQ' and f2.arrival_airport = 'SVO'
	and f2.status not like '%Cancelled%' and f2.status not like '%Scheduled%'
	and bp.seat_no is null
	order by f2.flight_id, s.seat_no;
}

3_10 {
	select avg(amount), max(amount), sum(amount) from ticket_flights, flights
	where ticket_flights.flight_id = flights.flight_id and departure_airport = 'VOZ' and arrival_airport = 'LED';
}

3_11 {
	select tf.fare_conditions, avg(amount) as avg_amount
	from ticket_flights tf
	join tickets t on t.ticket_no = tf.ticket_no and tf.fare_conditions = 'Economy' 
	or t.ticket_no = tf.ticket_no and tf.fare_conditions = 'Comfort'
	or t.ticket_no = tf.ticket_no and tf.fare_conditions = 'Business'
	GROUP BY(tf.fare_conditions);
}

3_12 {
	select a.model, count( * ) as Count
	from seats s
	join aircrafts a on a.aircraft_code = s.aircraft_code
	GROUP BY (a.model) 
	order by Count desc;
}

3_13 {
	select a.airport_code, a.airport_name, count ( * ) as Count
	from flights f
	join airports a on f.arrival_airport = a.airport_code and 
	f.status = 'Arrived' or f.status = 'On Time'
	Group by(a.airport_code, a.airport_name)
	order by Count desc;
}