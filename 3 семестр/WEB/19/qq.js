function paint(){
	let canvas = document.getElementById('draw');
	let x = canvas.getContext("2d");
	
	let x1 = (Math.PI/180)*0;
	let x2 = (Math.PI/180)*360;
	
	x.fillRect(100, 100, 250, 2);
	
	x.fillRect(500, 100, 250, 100);
	
	x.arc(1100,150,120,x1,x2);
	x.fill();
	
	x.fillRect(1400, 30, 250, 250);
	
	let triangle = {
        q1: 450, 
        w1: 450, 
        q2: 350, 
        w2: 650, 
        q3: 550, 
        w3: 650 
    }
	
	x.beginPath();
    x.moveTo(triangle.q1, triangle.w1);
    x.lineTo(triangle.q2, triangle.w2);
    x.lineTo(triangle.q3, triangle.w3);
    x.lineTo(triangle.q1, triangle.w1);
    x.closePath();
    x.fill();
}
paint();