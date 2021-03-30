function OpenNewWindow() {
	let NewWindow = window.open("https://www.youtube.com", "youtube", "width=1700,height=1500");
} 

function Time(){
	let day = new Date();
	text.value = day.toLocaleString("ru");
}