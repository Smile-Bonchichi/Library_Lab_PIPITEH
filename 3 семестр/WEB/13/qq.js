let i;
	document.write("№2<p>");
for(i = 1;i <= 7;i++){
	document.write(i * i);
	document.write("<br>");
}
	document.write("<p></p>");
	
	document.write("№3<p>");
let age=prompt("Сколько вам лет?", "")
let years=prompt("Какой сейчас год?", "")

while(age != -1){
	document.write("<br>");
	document.write(years + " году вам было " + age + " лет");
	years--;
	age--;
}

document.write("<p>№4<p>Начальный массив<p>");

let arr = [ "1", "2", "3", "4", "5"];
let l = arr.length;

for(i = 0; i < l; i++){
	document.write(arr[i] + "<br>");
}
arr.splice((l-2),1,"7");
document.write("<p>Измененный массив<p>");
for(i = 0; i < l; i++){
	document.write(arr[i] + "<br>");
}

document.write("<p>");

if (arr.length >= 3 && arr.length <= 5) {
	document.write("Это средний массив, в котором как минимум 3 элемента!!!");
} else if (arr.length > 5) {
	document.write("Это большой массив, в котором как минимум 5 элементов!!!");
} else {
	document.write("Это маленький массив, в котором меньше 3 элементов!!!");
}