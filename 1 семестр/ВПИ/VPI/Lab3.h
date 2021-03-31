#pragma once

void lab3_1() {
	double y;
	for (double x = 1; x <= 20; x = x + 0.5) {
		y = (2 * x * x) + 15;
		cout << "при x = " << x << "\t" << "y = " << y << endl;
	}
}

void lab3_2() {
	double y;
	for (double x = 0; x <= 16; x += 2) {
		y = 0.8 * x - sin(sqrt(x)) - 0.1;
		cout << "при x = " << x << "\t" << "y = " << y << endl;
	}
}

void lab3_3() {
	double a = 0.3, n = 10, t;
	for (int i = 1; i <= 10; i++) {
		if (sin((i * i + 1) / 10) > 0)
			t = a * sin((i * i + 1) / 10);
		if (sin((i * i + 1) / 10) <= 0)
			t = cos(i + 1 / n);
		cout << "При i=" << i << "\t" << "t=" << t << endl;
	}
}

void lab3_4() {
	double a = 2.6, b = 5, S;
	for (double x = 0; x <= 10; x = x + 0.5) {
		if (x < 2)
			S = (a + (b / exp(x)) + cos(x));
		else if (x >= 6)
			S = (a + b) / (x + 1);
		else if (2 <= x && x < 6)
			S = exp(x) + sin(x);
		cout << "При x=" << x << "\t" << "S=" << S << "\t" << endl;
	}
}

void lab3_5() {
	int x = 1, S = 0, P = 1;
	do {
		S = S + x;
		P = P * x;
		x++;
	} while (x <= 10);
	cout << "Cумма равна " << S << endl;
	cout << "Произведение равно " << P << endl;
}

void lab3_6() {
	double x = 1, S = 0;
	while (x <= 100) {
		x = x * x;
		S = S + 1 / x;
		x++;
	}
	cout << "Сумма чисел равна " << S << endl;
}

void lab3_7() {
	double a, i = 1, S = 0;
restart:
	cout << "\nВведите число a = ";
	cin >> a;
	do {
		S = S + 1 / i;
		cout << i << ")" << S << endl;
		i++;
	} while (S <= a);
	cout << "Первое число больше a = " << a << ", является " << S << endl;
	goto restart;
}

void lab3_8() {
	int n;
	double x, S = 0;
restart:
	cout << "\nВведите степень n=";
	cin >> n;
	cout << "Введите x = ";
	cin >> x;
	for (int i = 1; i <= n; i++)
		S = S + sin(pow(x, i));
	cout << "Сумма= " << S << endl;
	goto restart;
}

void lab3_9() {
	double a = 1, b = 0, c = 0, cosinus = 0, sinus = 0, d = 1, n, i;
	cout << "Введите число n = " << endl;
	cin >> n;
	for (i = 1; i <= n; i++)
		a = a * (1 / pow(i, 2));
	for (i = 1; i <= n; i++) {
		sinus = sinus + sin(i);
		b = b + (1 / sinus);
	}
	for (i = 1; i <= n; i++)
		c = sqrt(c + 2);
	for (i = 1; i <= n; i++) {
		cosinus = cosinus + cos(i);
		d = d * (cosinus / sinus);
	}
	cout << "Число a=" << a << endl;
	cout << "Число b=" << b << endl;
	cout << "Число с=" << c << endl;
	cout << "Число d=" << d << endl;
}

void lab3_10() {
	double x = 1, y = 1, s = 0, i = 1, n;
restart:
	cout << "\nВведите n=" << endl;
	cin >> n;
	do {
		s += x / (1 + fabs(y));
		x *= 0.3;
		y += x;
		x *= 0.3;
		i++;
	} while (i <= n);
	cout << "S=" << s << endl;
	goto restart;
}