#pragma once

void lab1_1() {
	double R;
	cout << "Введите радиус круга: " << endl;
	cin >> R;
	cout << "Площадь круга = " << PI * R * R << endl;
	cout << "Длина круга = " << 2 * PI * R << endl;
}

void lab1_2() {
	double a, b;
	cout << "Введите катет а = ";
	cin >> a;
	cout << "Введите катет b = ";
	cin >> b;
	cout << "Гипотенуза = " << sqrt(a * a + b * b);
	cout << "Площадь=" << (a * b) / 2.0 << endl;
}

void lab1_3() {
	double R = 20, r, s;
	cout << "Введите внешний радиус больше 20: ";
	cin >> r;
	cout << "Площадь внутренного круга = " << PI * R * R << endl;
	cout << "Площадь внешнего круга = " << PI * r * r << endl;
	cout << "Площадь кольца S = " << (PI * R * R) - (PI * r * r) << endl;
}

void lab1_4() {
	double x, y, z;
	cout << "Введите значения x, y и Z: ";
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "а = " << (sqrt(fabs(x - 1)) - (sqrt(fabs(pow(y, 1 / 3))))) / 1 + ((pow(x, 2)) / 2) + ((pow(y, 2)) / 2) << endl;
	cout << "b = " << x * (atan(z) + exp(-(x + 3))) << endl;
	cout << "a1 = " << (1 + pow(sin(x + y), 2)) / (2 + fabs((x - 2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x << endl;
	cout << " b1 = " << pow(cos(atan((1 / z) + 180) / PI), 2) << endl;
}

void lab1_5() {
	double a, b, u;
	cout << "Введите стороны оснований = ";
	cin >> a >> b;
	cout << "Введите угол в градусах = ";
	cin >> u;
	cout << "При основаниях a = " << a << " и b = " << b << " площадь равна= " << ((abs(a - b) / 2) * tan(u * PI / 180)) * ((a + b) / 2) << endl;
}

void lab1_6() {
	double a, b, c, p;
	cout << "Введите a: " << endl;
	cin >> a;
	cout << "Введите b: " << endl;
	cin >> b;
	cout << "Введите c: " << endl;
	cin >> c;
	p = (a + b + c) / 2;
	cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}

void lab1_7() {
	int a, b;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Среднее арифметическое " << (a + b) / 2.0 << endl;
	cout << "Среднее геометрическое " << sqrt(abs(a) * abs(b)) << endl;
}

void lab1_8() {
	double x1, y1, x2, y2;
	cout << "Введите координату x 1 точки" << endl;
	cin >> x1;
	cout << "Введите координату y 1 точки" << endl;
	cin >> y1;
	cout << "Введите координату x 2 точки" << endl;
	cin >> x2;
	cout << "Введите координату y 2 точки" << endl;
	cin >> y2;
	cout << "Расстояние равно=" << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) << endl;
}

void lab1_9() {
	int X;
	cout << "Введите 4-значное число: ";
	cin >> X;
	cout << int(X / 1000) % 10 << " - thousands" << endl;
	cout << int(X / 100) % 10 << " - hundreds" << endl;
	cout << int(X / 10) % 10 << " - tens" << endl;
	cout << X % 10 << " - ones\n" << endl;
}