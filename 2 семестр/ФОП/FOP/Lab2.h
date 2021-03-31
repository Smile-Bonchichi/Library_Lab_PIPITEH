#pragma once

void result1(double  a, double  b, double& t, double& k) {
	t = sqrt(a * a + b * b);
	k = (a * b) / 2;
}
void result2(double  a, double  b, double* t, double* k) {
	*t = sqrt(a * a + b * b);
	*k = (a * b) / 2;
}

void lab2_1() {
	double a, b, c, S, t, k;
	cout << "������� ����� �=";
	cin >> a;
	cout << "������� ����� b=";
	cin >> b;
	result1(a, b, c, S);
	result2(a, b, &t, &k);
	cout << "����������=" << c << endl;
	cout << "�������=" << S << endl;
	cout << endl;
	cout << "����������(2)=" << t << endl;
	cout << "�������(2)=" << k << endl;
}

void result(double  r, double  h, double& t, double& d) {
	const double pi = 3.14;
	t = pi * r * r;
	d = pi * r * r * h;
}

void lab2_2() {
	double r, h, s, v;
	cout << "������� ������ ���������:";
	cin >> r;
	cout << "������� ������ ��������:";
	cin >> h;
	result(r, h, s, v);
	cout << "������� ��������� �����: " << s << " ��������� ��." << endl;
	cout << "����� �������� �����: " << v << " ���������� ��." << endl;
}

void convert(double a, double b, double c, double& d, double& e) {
	if (a > 1)
		d = c / a;
	else
		d = c * a;

	if (b > 1)
		e = c / b;
	else
		e = c * b;
}

void lab2_3() {
	double tdoll, trub, som, sdoll, srub;
	cout << "������� ���� ������� � ���� �� ����������� ����: ";
	cin >> tdoll;
	cout << "������� ���� ����� � ���� �� ����������� ����: ";
	cin >> trub;
	cout << "������� ����� � �����:";
	cin >> som;
	convert(tdoll, trub, som, sdoll, srub);
	cout << "����� � ��������: " << sdoll << " $." << endl;
	cout << "C���� � ������: " << srub << " �." << endl;
}

int time(int& a, int& b, int& c) {
	int second;
	if (a >= 12)
		a = a - 12;
	second = a * 60 * 60 + b * 60 + c;
	return second;
}

void lab2_4() {
	int a, b, c, a1, b1, c1, interval, t1, t2;
metka:
	cout << "������� ����� �1 (����,������,�������):";
	cin >> a >> b >> c;
	if ((a > 23 || a < 0) || (b < 0 || b>59) || (c < 0 || c>59)) {
		cout << "������� ������!" << endl;
		goto metka;
	}
	t1 = time(a, b, c);
	cout << t1 << " -������ ������ ����� 12" << endl;
	cout << endl;
metka1:
	cout << "������� ����� �2 (����,������,�������):";
	cin >> a1 >> b1 >> c1;
	if ((a1 > 23 || a1 < 0) || (b1 < 0 || b1>59) || (c1 < 0 || c1>59)) {
		cout << "������� ������!" << endl;
		goto metka1;
	}
	t2 = time(a1, b1, c1);
	cout << t2 << " -������ ������ ����� 12" << endl;
	cout << endl;

	interval = abs(t1 - t2);
	cout << "�������� ����� ���������� ������� t1 � t2 �����: " << interval << endl;
}

int Celsius(int& c) {
	return (c - 32) * 5 / 9;
}

int Fahrenheit(int& f) {
	return f * 9 / 5 + 32;;
}

void lab2_5() {
	int i, j, n;
	for (i = 0; i <= 100; i++) {
		n = Fahrenheit(i);
		cout << i << " � C �������\t " << n << " � F ����������" << "\t";
	}
	cout << "\t";
	for (j = 32; j <= 212; j++) {
		n = Celsius(j);
		cout << j << " � F ����������\t" << n << " � C �������" << "\t";
	}
}

int quality_Points(int mark) {
	int kol;
	if (mark >= 87 && mark <= 100)
		kol = 5;
	else if (mark >= 74 && mark <= 86)
		kol = 4;
	else if (mark >= 61 && mark <= 73)
		kol = 3;
	else if (mark >= 41 && mark <= 60)
		kol = 2;
	else
		kol = 1;
	return kol;
}

void lab2_6() {
	int kol, x, y;
	cout << "������� ���-�� �������� : ";
	cin >> kol;
	for (int i = 1; i <= kol; i++) {
		cout << "������� �" << i << "\t";
		x = rand() % 100 + 1;
		cout << x << " ����(-��)\t\t";
		y = quality_Points(x);
		switch (y) {
		case 5: cout << "�������: A" << endl; break;
		case 4: cout << "������: B" << endl; break;
		case 3: cout << "�����������������: �" << endl; break;
		case 2: cout << "�������������������: FX" << endl; break;
		case 1: cout << "�����: F" << endl; break;
		}
	}
}
