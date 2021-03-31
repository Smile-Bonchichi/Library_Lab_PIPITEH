#pragma once

void lab1_1() {
	double R;
	cout << "������� ������ �����: " << endl;
	cin >> R;
	cout << "������� ����� = " << PI * R * R << endl;
	cout << "����� ����� = " << 2 * PI * R << endl;
}

void lab1_2() {
	double a, b;
	cout << "������� ����� � = ";
	cin >> a;
	cout << "������� ����� b = ";
	cin >> b;
	cout << "���������� = " << sqrt(a * a + b * b);
	cout << "�������=" << (a * b) / 2.0 << endl;
}

void lab1_3() {
	double R = 20, r, s;
	cout << "������� ������� ������ ������ 20: ";
	cin >> r;
	cout << "������� ����������� ����� = " << PI * R * R << endl;
	cout << "������� �������� ����� = " << PI * r * r << endl;
	cout << "������� ������ S = " << (PI * R * R) - (PI * r * r) << endl;
}

void lab1_4() {
	double x, y, z;
	cout << "������� �������� x, y � Z: ";
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "� = " << (sqrt(fabs(x - 1)) - (sqrt(fabs(pow(y, 1 / 3))))) / 1 + ((pow(x, 2)) / 2) + ((pow(y, 2)) / 2) << endl;
	cout << "b = " << x * (atan(z) + exp(-(x + 3))) << endl;
	cout << "a1 = " << (1 + pow(sin(x + y), 2)) / (2 + fabs((x - 2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x << endl;
	cout << " b1 = " << pow(cos(atan((1 / z) + 180) / PI), 2) << endl;
}

void lab1_5() {
	double a, b, u;
	cout << "������� ������� ��������� = ";
	cin >> a >> b;
	cout << "������� ���� � �������� = ";
	cin >> u;
	cout << "��� ���������� a = " << a << " � b = " << b << " ������� �����= " << ((abs(a - b) / 2) * tan(u * PI / 180)) * ((a + b) / 2) << endl;
}

void lab1_6() {
	double a, b, c, p;
	cout << "������� a: " << endl;
	cin >> a;
	cout << "������� b: " << endl;
	cin >> b;
	cout << "������� c: " << endl;
	cin >> c;
	p = (a + b + c) / 2;
	cout << "S = " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
}

void lab1_7() {
	int a, b;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "������� �������������� " << (a + b) / 2.0 << endl;
	cout << "������� �������������� " << sqrt(abs(a) * abs(b)) << endl;
}

void lab1_8() {
	double x1, y1, x2, y2;
	cout << "������� ���������� x 1 �����" << endl;
	cin >> x1;
	cout << "������� ���������� y 1 �����" << endl;
	cin >> y1;
	cout << "������� ���������� x 2 �����" << endl;
	cin >> x2;
	cout << "������� ���������� y 2 �����" << endl;
	cin >> y2;
	cout << "���������� �����=" << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) << endl;
}

void lab1_9() {
	int X;
	cout << "������� 4-������� �����: ";
	cin >> X;
	cout << int(X / 1000) % 10 << " - thousands" << endl;
	cout << int(X / 100) % 10 << " - hundreds" << endl;
	cout << int(X / 10) % 10 << " - tens" << endl;
	cout << X % 10 << " - ones\n" << endl;
}