1 {
	select aircrafts.model, flights.scheduled_arrival, flights.scheduled_departure, 
	(flights.scheduled_arrival - flights.scheduled_departure) as ������������_������ 
	from flights, aircrafts
	where (flights.status = 'Arrived' or flights.status = 'On time')
	and (flights.scheduled_arrival - flights.scheduled_departure) >= '06:00:00'
	order by scheduled_departure;
}

2 {
	select *, (actual_departure - scheduled_departure) as �������
	from flights
	where status = 'Arrived' and (actual_departure - scheduled_departure) >= '04:00:00';
}

3 {
	select airports.airport_name, count(*) as ����������_����������
    from flights, ticket_flights, airports
    where (flights.arrival_airport = airports.airport_code or flights.departure_airport = airports.airport_code) 
    and ticket_flights.flight_id = flights.flight_id and date(flights.scheduled_departure) = '2017-07-16' 
	and (flights.status = 'Arrived' or flights.status = 'On Time')
    group by(airports.airport_name)
    order by ����������_���������� desc limit 10;
}

4 {
	select  scheduled_departure, scheduled_arrival, count(*) over(Partition by �_���������_�_5_�����) as totalCount
	from (
		Select *, case when ��������� > 1 then 1 else 0 end as �_���������_�_5_�����
		from (
			select *, count(*) over(Partition by scheduled_departure) as ��������� 
			from flights
			where (status = 'Arrived' or status = 'On Time') 
			and departure_airport = 'SVO'
		) a
	) b
    order by scheduled_departure;
}

5 {
	select distinct date(scheduled_arrival) as dates, 
	count(*) over(Partition by date(scheduled_arrival)) as quantity
    from flights
    where (status = 'Arrived' or status = 'On Time')
    and arrival_airport = 'BAX'
    GROUP By(scheduled_departure, scheduled_arrival)
	order by (dates);
}