alert("Здравствуйте!!!");

let result = prompt("Вам есть 18?", "");
if (result == 18){
	document.write("Вам 18 лет!!!")
} else if (result < 18){
	document.write("Вам меньше 18-ти лет!!!")
} else {
	document.write("Вам больше 18-ти лет!!!")
}

let q = confirm("Ok or Отмена?")
if(q){
	alert("Вход в клуб разрешен!!!");
}else{
	alert("Вход в клуб воспрещен");
}