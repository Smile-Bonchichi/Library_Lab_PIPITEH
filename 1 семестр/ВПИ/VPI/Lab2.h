#pragma once

void lab2_1() {
	double x, y, z;
restart:
	cout << "Введите два числа: ";
	cin >> x >> y;
	if (x == y) {
		cout << "Числа должны быть разные, введите заново.";
		goto restart;
	} else if (x < y) {
		z = x;
		x = (x + y) / 2.0;
		y = 2 * z * y;
	} else {
		z = y;
		y = (x + y) / 2.0;
		x = 2 * z * y;
	}
	cout << "Число x равно " << x << endl;
	cout << "Число y равно " << y << endl;
}

void lab2_2() {
	double x, y, z;
restart:
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите z: ";
	cin >> z;
	if (x == y || x == z || y == z) {
		cout << "Числа должны быть разные" << endl;
		goto restart;
	} else {
		if (x + y + z < 1) {
			if (x < y && x < z)
				x = (y + z) / 2;
			else if (y < z && y < x)
				y = (x + z) / 2;
			else
				z = (x + y) / 2;
		} else if (x < y)
			x = (y + z) / 2;
		else
			y = (x + z) / 2;
	}
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "z=" << z << endl;
	goto restart;
}

void lab2_3() {
	double x, fx;
restart:
	cout << "Введите значение x: ";
	cin >> x;
	if (x <= 0)
		fx = 0;
	else if (x > 0 && x <= 1)
		fx = x * x - x;
	else
		fx = pow(x, 2) - sin(PI * pow(x, 2));
	cout << "F(" << x << ")=" << fx << endl;
	goto restart;
}

void lab2_4() {
	double a, b, c, x1, x2, d;
restart:
	cout << "\n\n";
	cout << "Введите а = ";
	cin >> a;
	cout << "Введите b = ";
	cin >> b;
	cout << "Введите с = ";
	cin >> c;
	d = (b * b) - (4 * a * c);
	cout << "d=" << d << endl;
	if (d > 0) {
		x1 = ((-b - sqrt(d)) / (2. * a));
		x2 = ((-b + sqrt(d)) / (2. * a));
		cout << "Два корня x1=" << x1 << "\n" << "x2=" << x2;
	} else if (d == 0) {
		x1 = (-b + sqrt(d)) / (2. * a);
		cout << "Один корень x1=" << x1;
	} else
		cout << "Корней нет";
	goto restart;
}

void lab2_5() {
	int x, y, z;
restart:
	cout << "\n\n";
	cout << "Введите первую сторону: " << endl;
	cin >> x;
	cout << "Введите вторую сторону: " << endl;
	cin >> y;
	cout << "Введите третью сторону: " << endl;
	cin >> z;
	cout << "Существует ли треугольник?" << endl;
	if ((x + y > z) && (z + y > x) && (z + x > y))
		cout << "Треугольник существует!" << endl;
	else
		cout << "Треугольник не существует!" << endl;
	goto restart;
}

void lab2_6() {
	float a, b, c;
restart:
	cout << "\n\n";
	cout << "Введите числа a, b, c: ";
	cin >> a >> b >> c;
	if (a > 0) {
		a = a * a;
		cout << "a = " << a << endl;
	} else
		cout << "Число a отрицательно" << a << endl;
	if (b > 0) {
		b = b * b;
		cout << "b = " << b << endl;
	} else
		cout << "Число b отрицательно" << b << endl;
	if (c > 0) {
		c = c * c;
		cout << "c = " << c << endl;
	} else
		cout << "Число с отрицательно" << c << endl;
	goto restart;
}

void lab2_7() {
	double x, y, z;
restart:
	cout << "\n\n";
	cout << "Введите числа x, y, z: ";
	cin >> x >> y >> z;
	if ((x >= 1) && (x <= 3))
		cout << "x - принадлежит" << endl;
	else
		cout << "x - не принадлежит" << endl;
	if ((y >= 1) && (y <= 3))
		cout << "y - принадлежит" << endl;
	else
		cout << "y - не принадлежит" << endl;
	if ((z >= 1) && (z <= 3))
		cout << "z-принадлежит" << endl;
	else
		cout << "z-не принадлежит" << endl;
	goto restart;
}

void lab2_8() {
	int x, y;
restart:
	cout << "\n\n";
	cout << "Сколько Вам лет?" << endl;
	cin >> x;
	if (x > 100) {
		cout << "Введите заново" << endl;
		goto restart;
	}
	if ((x == 11) || (x == 12) || (x == 13) || (x == 14))
		cout << "Вам " << x << " лет" << endl;
	else {
		y = x % 10;
		switch (y) {
		case 1: cout << "Вам " << x << " год" << endl; break;
		case 2:
		case 3:
		case 4: cout << "Вам " << x << " года" << endl; break;
		default: cout << "Вам " << x << " лет" << endl;
		}
		goto restart;
	}
}

void lab2_9() {
	int a, b, c;
restart:
	cout << "\n";
	cout << "Введите число a = ";
	cin >> a;
	cout << "Введите число b = ";
	cin >> b;
	cout << "Введите число c = ";
	cin >> c;
	if ((a >= b) && (b >= c)) {
		a = 2 * a;
		b = 2 * b;
		c = 2 * c;
	} else {
		a = abs(a);
		b = abs(b);
		c = abs(c);
	}
	cout << "Число a равно " << a << endl;
	cout << "Число b равно " << b << endl;
	cout << "Число c равно " << c << endl;
	goto restart;
}

void lab2_10() {
	int a;
	double x, y, z, w;
restart:
	cout << "\n\n";
	cout << "Введите четырехзначное число " << endl;
	cin >> a;
	if (a < 1000 || a>9999) {
		cout << "Произошла ошибка при вводе" << endl;
		goto restart;
	}
	w = a % 10;
	z = int(a / 10) % 10;
	y = int(a / 100) % 10;
	x = int(a / 1000) % 10;
	if (x == w && y == z)
		cout << "Число является палиндромом" << endl;
	else
		cout << "Число не является палиндромом" << endl;
	goto restart;
}