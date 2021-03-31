#pragma once

void lab2_1() {
	double x, y, z;
restart:
	cout << "������� ��� �����: ";
	cin >> x >> y;
	if (x == y) {
		cout << "����� ������ ���� ������, ������� ������.";
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
	cout << "����� x ����� " << x << endl;
	cout << "����� y ����� " << y << endl;
}

void lab2_2() {
	double x, y, z;
restart:
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	cout << "������� z: ";
	cin >> z;
	if (x == y || x == z || y == z) {
		cout << "����� ������ ���� ������" << endl;
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
	cout << "������� �������� x: ";
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
	cout << "������� � = ";
	cin >> a;
	cout << "������� b = ";
	cin >> b;
	cout << "������� � = ";
	cin >> c;
	d = (b * b) - (4 * a * c);
	cout << "d=" << d << endl;
	if (d > 0) {
		x1 = ((-b - sqrt(d)) / (2. * a));
		x2 = ((-b + sqrt(d)) / (2. * a));
		cout << "��� ����� x1=" << x1 << "\n" << "x2=" << x2;
	} else if (d == 0) {
		x1 = (-b + sqrt(d)) / (2. * a);
		cout << "���� ������ x1=" << x1;
	} else
		cout << "������ ���";
	goto restart;
}

void lab2_5() {
	int x, y, z;
restart:
	cout << "\n\n";
	cout << "������� ������ �������: " << endl;
	cin >> x;
	cout << "������� ������ �������: " << endl;
	cin >> y;
	cout << "������� ������ �������: " << endl;
	cin >> z;
	cout << "���������� �� �����������?" << endl;
	if ((x + y > z) && (z + y > x) && (z + x > y))
		cout << "����������� ����������!" << endl;
	else
		cout << "����������� �� ����������!" << endl;
	goto restart;
}

void lab2_6() {
	float a, b, c;
restart:
	cout << "\n\n";
	cout << "������� ����� a, b, c: ";
	cin >> a >> b >> c;
	if (a > 0) {
		a = a * a;
		cout << "a = " << a << endl;
	} else
		cout << "����� a ������������" << a << endl;
	if (b > 0) {
		b = b * b;
		cout << "b = " << b << endl;
	} else
		cout << "����� b ������������" << b << endl;
	if (c > 0) {
		c = c * c;
		cout << "c = " << c << endl;
	} else
		cout << "����� � ������������" << c << endl;
	goto restart;
}

void lab2_7() {
	double x, y, z;
restart:
	cout << "\n\n";
	cout << "������� ����� x, y, z: ";
	cin >> x >> y >> z;
	if ((x >= 1) && (x <= 3))
		cout << "x - �����������" << endl;
	else
		cout << "x - �� �����������" << endl;
	if ((y >= 1) && (y <= 3))
		cout << "y - �����������" << endl;
	else
		cout << "y - �� �����������" << endl;
	if ((z >= 1) && (z <= 3))
		cout << "z-�����������" << endl;
	else
		cout << "z-�� �����������" << endl;
	goto restart;
}

void lab2_8() {
	int x, y;
restart:
	cout << "\n\n";
	cout << "������� ��� ���?" << endl;
	cin >> x;
	if (x > 100) {
		cout << "������� ������" << endl;
		goto restart;
	}
	if ((x == 11) || (x == 12) || (x == 13) || (x == 14))
		cout << "��� " << x << " ���" << endl;
	else {
		y = x % 10;
		switch (y) {
		case 1: cout << "��� " << x << " ���" << endl; break;
		case 2:
		case 3:
		case 4: cout << "��� " << x << " ����" << endl; break;
		default: cout << "��� " << x << " ���" << endl;
		}
		goto restart;
	}
}

void lab2_9() {
	int a, b, c;
restart:
	cout << "\n";
	cout << "������� ����� a = ";
	cin >> a;
	cout << "������� ����� b = ";
	cin >> b;
	cout << "������� ����� c = ";
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
	cout << "����� a ����� " << a << endl;
	cout << "����� b ����� " << b << endl;
	cout << "����� c ����� " << c << endl;
	goto restart;
}

void lab2_10() {
	int a;
	double x, y, z, w;
restart:
	cout << "\n\n";
	cout << "������� �������������� ����� " << endl;
	cin >> a;
	if (a < 1000 || a>9999) {
		cout << "��������� ������ ��� �����" << endl;
		goto restart;
	}
	w = a % 10;
	z = int(a / 10) % 10;
	y = int(a / 100) % 10;
	x = int(a / 1000) % 10;
	if (x == w && y == z)
		cout << "����� �������� �����������" << endl;
	else
		cout << "����� �� �������� �����������" << endl;
	goto restart;
}