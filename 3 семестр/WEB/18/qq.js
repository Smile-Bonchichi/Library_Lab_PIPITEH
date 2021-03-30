function test1(){
	let t = testtext.value;
	if(t[0] == 'h' && t[1] == 't' && t[2] == 't' && t[3] == 'p' && t[4] == 's' && t[5] == ':' && t[6] == '/' && t[7] == '/'){
		alert("Правильно");
	} else {
		alert("Неправильно");
	}
}

function test2() {
	let t = testtext2.value;
	document.write("<b>" + t + "</b>");
}

function test3(){
	let t = new Date();
	let temp;
	temp = (((24 - t.getHours()) * 60)* 60) + ((60 - t.getMinutes()) * 60) + (60 - t.getSeconds());
	alert(temp + " секунд осталось до конца дня");
}

function test4(value){
	let date = new Date();
	let t = value;
	let datet = Date.parse(t);
	let nowt = date.getTime();
	let diff = Math.abs(Math.floor((datet - nowt)/(1000*60*60*24)));
	qq.value = diff + " дня вы прожили";
}

function start(a) {
	window.timerId = window.setInterval(timer, 1000);
	let elem = document.getElementById('but2');
	elem.disabled = false;
	a.disabled = true;
}

function stop(a) {
	window.clearInterval(window.timerId);
	let elem = document.getElementById('but1');
	elem.disabled = false;
	a.disabled = true;
}

function timer() {
	let elem = document.getElementById('test');
	elem.innerHTML = parseInt(elem.innerHTML)+1;
}



let btnStart = document.getElementById("start");
let btnStop = document.getElementById("stop");
btnStop.disabled = true;

function startslide(){
	window.timerId = window.setInterval(function(){
		btnStart.disabled = true;
		btnStop.disabled = false;
		
		let imgFirst = document.getElementById('image-1');
		let imgSecond = document.getElementById('image-2');
		let imgThird = document.getElementById('image-3');

		let image = imgFirst.src;
		imgFirst.src = imgSecond.src;
		imgSecond.src = imgThird.src;
		imgThird.src = image;
	}, 1000);
}

function stopslide(){
	btnStop.disabled = true;
	btnStart.disabled = false;
	window.clearInterval(window.timerId);
}