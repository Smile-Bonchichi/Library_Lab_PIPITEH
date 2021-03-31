#pragma once

int power(int base, int exponent) {
	int result = 1;
	for (int i = 1; i <= exponent; i++)
		result *= base;
	return result;
}

void lab1_1() {
	int base, res;
	int exponent;
	cout << "������� �����: ";
	cin >> base;
skip:
	cout << "������� �������: ";
	cin >> exponent;
	if (exponent) {
		cout << "������� ������������� �������\n";
		goto skip;
	} else
		res = power(base, exponent);
	cout << "�������� �����, � ������� ���� ������� �����: " << res << endl;
}

bool multiple(int a, int b) {
	if (b % a == 0)
		return 1;
	else
		return 0;
}


void lab1_2() {
	int a, b, n;
	cout << "������� ����������� ���������� ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a = rand() % 10 + 1;
		b = rand() % 100 + 1;
		cout << "����� � �����: " << a << "\t";
			cout << "����� b �����: " << b << "\t";
		if (multiple(a, b))
			cout << b << " ������ " << a << endl;
		else
			cout << b << " �� ������ " << a << endl;
	}
}

void draw(int s1 = 5, int s2 = 5, char w = '@') {
	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++)
			cout << w << "\t";
		cout << endl;
	}
}


void lab1_3() {
	int a, b;
	char w;
	cout << "�������  ������ �������:";
	cin >> a;
	cout << "�������  ������ �������:";
	cin >> b;
	cout << "�������  ������:";
	cin >> w;
	draw();
	cout << endl;
	draw(a, b);
	cout << endl;
	draw(a, b, w);
}

double chislo(double a, double b, double c) {
	double f;
	f = (2 * a - b - sin(c)) / (5 + abs(c));
	return f;
}

void lab1_4() {
	double  s, t, e, f;
m:
	cout << "������� ����� s: ";
	cin >> s;
	cout << "������� ����� t: ";
	cin >> t;
	e = chislo(t, -2 * s, 1.17) + chislo(2.2, t, s - t);
	cout << "���������: " << e << "\n\n";
	goto m;
}

double MAX(double f, double t) {
	if (f > t)
		return f;
	else
		return t;
}

void lab1_5() {
	double a, b, c, f;
	cout << "������� ����� a: ";
	cin >> a;
	cout << "������� ����� b: ";
	cin >> b;
	cout << "������� ����� c: ";
	cin >> c;
	f = (MAX(a, a + b) + MAX(a, b + c)) / (1 + MAX(a + b * c, 1.15));
	cout << "���������: " << f << endl;
}

bool even(int a) {
	if (a % 2 == 0)
		return 1;
	else
		return 0;
}

void lab1_6() {
	int a;
	do {
		cout << "������� �����: ";
		cin >> a;
		if (a == 0)
			break;
		if (even(a))
			cout << "����� " << a << " - ������" << endl;
		else
			cout << "����� " << a << " - �� ������" << endl;
	} while (true);
}

bool perfect(int number) {
	int sum = 0;
	for (int i = 1; i <= number / 2; i++)
		if (number % i == 0)
			sum += i;
	if (sum == number)
		return true;
	else
		return false;
}

void lab1_7() {
	cout << "C���������� ����� � ��������� �� 1 �� 1000:" << endl;
	for (int i = 1; i <= 1000; i++)
		if (perfect(i)) {
			cout << i << endl;
			cout << endl;
			cout << "C����������: " << endl;
			for (int j = 1; j <= i / 2; j++) {
				if (i % j == 0)
					cout << j << "+";
			}
			cout << "\n\n";
		}
}

bool simple(int num) {
	if (num < 2)
		return false;
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return false;
	return true;
}


void lab1_8() {
	for (int i = 1; i <= 10000; i++)
		if (simple(i))
			cout << i << "\t";
}

bool flip() {
	int a;
	a = rand();
	if (a % 2 == 0)
		return false;
	else
		return true;
}

void lab1_9() {
	int kolorel = 0, kolreshka = 0;
	srand(time(NULL));
	for (int i = 1; i <= 100; i++) {
		if (flip()) {
			cout << i << ".�����" << "\n";
			kolreshka++;
		} else {
			cout << i << ".����" << "\n";
			kolorel++;
		}
	}
	cout << endl;
	cout << "���� ����� " << kolorel << " ���" << endl;
	cout << "����� ������ " << kolreshka << " ���" << endl;
}