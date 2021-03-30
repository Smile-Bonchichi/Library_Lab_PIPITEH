function Ocl(){
	let n = clock.value;
	if(n >= 0 && n <= 15){
		inClock.value = clock.value + " минут. Первая четверть!!!";
	} else if (n > 15 && n <= 30){
		inClock.value = clock.value + " минут. Вторая четверть!!!";
	} else if (n > 30 && n <= 45){
		inClock.value = clock.value + " минут. Третья четверть!!!";
	} else if(n > 45 && n <= 59){
		inClock.value = clock.value + " минут. Четвертая четверть!!!";
	}
}

function test1(value){
	let t = value;
	let d = new Date()
	if (t == d.getHours()) {
		alert("Правильно");
	} else {
		alert("Неправильно, сейчас " + d.getHours() + " часов");		
	}
}

function test2(value){
	let t = value;
	let ch = false;
	for(let i = 0;i < t.length; i++){
		if(t[i] == 'a'){
			ch = true;
			break;
		} else {
			ch = false;
		}
	}
	if (ch == true){
		alert("Да");
	} else {
		alert("Нет");
	}
}

function test3(value){
	let t = value;
	let ch = false;
	for(let i = 0;i < t.length; i++){
		if(t[0] == '1' || t[0] == '2' || t[0] == '3'){
			ch = true;
			break;
		} else {
			ch = false;
		}
	}
	if (ch == true){
		alert("Да");
	} else {
		alert("Нет");
	}
}

function test4(){
	let sum = 0;
	for(let i = 0;i<=100;i++){
			sum+=i;
	}
	document.write("Сумма чисел от 0 до 100 = " + sum + "<p>");
	document.write("Четные числа от 0 до 100<p>");
	for(let i = 0;i<=100;i++){
		if ((i % 2) == 0){
				document.write(i + "<br>");
		}
	}	
}

function test5(){
	let n = num.value;
	let p = 1;
	while(n!=0){
		p*=n;
		n--;
	}
	inNum.value = p;
}

function test6(){
	let t = [3,4,1,2,7];
	t.sort();
	for(let i = 0; i < t.length; i++){
		document.write(t[i] + " ")
	}
}