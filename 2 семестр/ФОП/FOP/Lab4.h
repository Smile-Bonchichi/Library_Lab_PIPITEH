#pragma once

template<class Type>
Type maximum(Type a, Type b, Type c) {
	Type k = a;
	if (k < b)k = b;
	if (k < c)k = c;
	return k;
}

void lab4_1() {
	int a, b, c;
	double a1, b1, c1;
	char a2, b2, c2;
	cout << "������� 3 �����(�����):";
	cin >> a >> b >> c;
	cout << "������� 3 �����(�������):";
	cin >> a1 >> b1 >> c1;
	cout << "������� 3  �������:";
	cin >> a2 >> b2 >> c2;

	cout << "������������ �����(�����):" << maximum(a, b, c) << endl;
	cout << "������������ �����(�������):" << maximum(a1, b1, c1) << endl;
	cout << "������������ ������:" << maximum(a2, b2, c2) << endl;
}

template<class T>
T MIN(T a, T b) {
	if (a < b)return a;
	else return b;
}

void lab4_2() {
	int a, b;
	double a1, b1;
	char a2, b2;
	cout << "������� 2 �����(�����):";
	cin >> a >> b;
	cout << "����������� �����(�����):" << MIN(a, b) << endl;
	cout << endl;
	cout << "������� 2 �����(�������):";
	cin >> a1 >> b1;
	cout << "�����������  �����(�������):" << MIN(a1, b1) << endl;
	cout << endl;
	cout << "������� 2  �������:";
	cin >> a2 >> b2;
	cout << "�����������  ������:" << MIN(a2, b2) << endl;
	cout << endl;
}

template<class T>
T power(T n, int p = 2) {
	T result = 1;
	for (int i = 1; i <= p; i++)
		result *= n;
	return result;
}


void lab4_3() {
	double a1, res1;
	int p, a2, res2;
	char r, a3, res3;
	long a4, res4;
	float a5, res5;
	cout << "������� ����� (�������): ";
	cin >> a1;
	cout << "����� �� ������� + ��� - ( �� ��������� � �������): ";
	cin >> r;
	if (r == '+') {
	skip:
		cout << "������� �������: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "������� ������������� �������\n";
			goto skip;
		} else
			res1 = power(a1, p);
	} else
		res1 = power(a1);
	cout << "P��������: " << endl;
	cout << "�������� ������������ ����� - " << a1 << ", � ������� �����: " << res1 << endl;

	cout << endl;
	cout << "������� ����� (�����): ";
	cin >> a2;
	cout << "����� �� ������� + ��� - ( �� ��������� � �������): ";
	cin >> r;
	if (r == '+') {
	q:
		cout << "������� �������: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "������� ������������� �������\n";
			goto q;
		} else
			res2 = power(a2, p);
	} else
		res2 = power(a2);
	cout << "P��������: " << endl;
	cout << "�������� ����� �����- " << a2 << ", � ������� �����: " << res2 << endl;

	cout << endl;
	cout << "������� ������ (Char): ";
	cin >> a3;
	cout << "����� �� ������� + ��� - ( �� ��������� � �������): ";
	cin >> r;
	if (r == '+') {
	t:
		cout << "������� �������: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "������� ������������� �������\n";
			goto t;
		} else
			res3 = power(a3, p);
	} else
		res3 = power(a3);
	cout << "P��������: " << endl;
	cout << "�������� ������- " << a3 << ", � ������� �����: " << res3 << endl;

	cout << endl;
	cout << "������� ����� (long): ";
	cin >> a4;
	cout << "����� �� ������� + ��� - ( �� ��������� � �������): ";
	cin >> r;
	if (r == '+') {
	m:
		cout << "������� �������: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "������� ������������� �������\n";
			goto m;
		} else
			res4 = power(a4, p);
	} else
		res4 = power(a4);
	cout << "P��������: " << endl;
	cout << "�������� ����� (long)- " << a4 << ", � ������� �����: " << res4 << endl;

	cout << endl;
	cout << "������� ����� (float): ";
	cin >> a5;
	cout << "����� �� ������� + ��� - ( �� ��������� � �������): ";
	cin >> r;
	if (r == '+') {
	e:
		cout << "������� �������: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "������� ������������� �������\n";
			goto e;
		} else
			res5 = power(a5, p);
	} else
		res5 = power(a5);
	cout << "P��������: " << endl;
	cout << "�������� ������������ ����� (float)- " << a5 << ", � ������� �����: " << res5 << endl;
}

int Fib(int a) {
	if ((a == 1) || (a == 2))
		return 1;
	else
		return (Fib(a - 1)) + (Fib(a - 2));
}
void lab4_4() {
	int n, i;
	cout << "������� ���������� ����� ��������: ";
	cin >> n;
	for (i = 1; i <= n; i++)
		cout << i << "." << Fib(i) << endl;
}

int nod(int x, int y) {
	if (y == 0)
		return x;
	else
		return nod(y, x % y);
}

void lab4_5() {
	int a, b;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "��� ������ ����� �����: " << nod(a, b) << endl;
}