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
	cout << "Введите 3 числа(Целые):";
	cin >> a >> b >> c;
	cout << "Введите 3 числа(Дробные):";
	cin >> a1 >> b1 >> c1;
	cout << "Введите 3  символа:";
	cin >> a2 >> b2 >> c2;

	cout << "Максимальное число(Целое):" << maximum(a, b, c) << endl;
	cout << "Максимальное число(Дробное):" << maximum(a1, b1, c1) << endl;
	cout << "Максимальный символ:" << maximum(a2, b2, c2) << endl;
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
	cout << "Введите 2 числа(Целые):";
	cin >> a >> b;
	cout << "Минимальное число(Целое):" << MIN(a, b) << endl;
	cout << endl;
	cout << "Введите 2 числа(Дробные):";
	cin >> a1 >> b1;
	cout << "Минимальное  число(Дробное):" << MIN(a1, b1) << endl;
	cout << endl;
	cout << "Введите 2  символа:";
	cin >> a2 >> b2;
	cout << "Минимальный  символ:" << MIN(a2, b2) << endl;
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
	cout << "Введите число (дробное): ";
	cin >> a1;
	cout << "Будет ли степень + или - ( по умолчанию в квадрат): ";
	cin >> r;
	if (r == '+') {
	skip:
		cout << "Введите степень: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "Введите положительную степень\n";
			goto skip;
		} else
			res1 = power(a1, p);
	} else
		res1 = power(a1);
	cout << "Pезультат: " << endl;
	cout << "Введённое вещественное число - " << a1 << ", в степени равно: " << res1 << endl;

	cout << endl;
	cout << "Введите число (целое): ";
	cin >> a2;
	cout << "Будет ли степень + или - ( по умолчанию в квадрат): ";
	cin >> r;
	if (r == '+') {
	q:
		cout << "Введите степень: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "Введите положительную степень\n";
			goto q;
		} else
			res2 = power(a2, p);
	} else
		res2 = power(a2);
	cout << "Pезультат: " << endl;
	cout << "Введённое целое число- " << a2 << ", в степени равно: " << res2 << endl;

	cout << endl;
	cout << "Введите символ (Char): ";
	cin >> a3;
	cout << "Будет ли степень + или - ( по умолчанию в квадрат): ";
	cin >> r;
	if (r == '+') {
	t:
		cout << "Введите степень: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "Введите положительную степень\n";
			goto t;
		} else
			res3 = power(a3, p);
	} else
		res3 = power(a3);
	cout << "Pезультат: " << endl;
	cout << "Введённый символ- " << a3 << ", в степени равно: " << res3 << endl;

	cout << endl;
	cout << "Введите число (long): ";
	cin >> a4;
	cout << "Будет ли степень + или - ( по умолчанию в квадрат): ";
	cin >> r;
	if (r == '+') {
	m:
		cout << "Введите степень: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "Введите положительную степень\n";
			goto m;
		} else
			res4 = power(a4, p);
	} else
		res4 = power(a4);
	cout << "Pезультат: " << endl;
	cout << "Введённое число (long)- " << a4 << ", в степени равно: " << res4 << endl;

	cout << endl;
	cout << "Введите число (float): ";
	cin >> a5;
	cout << "Будет ли степень + или - ( по умолчанию в квадрат): ";
	cin >> r;
	if (r == '+') {
	e:
		cout << "Введите степень: ";
		cin >> p;
		cout << endl;
		if (p <= 0) {
			cout << "Введите положительную степень\n";
			goto e;
		} else
			res5 = power(a5, p);
	} else
		res5 = power(a5);
	cout << "Pезультат: " << endl;
	cout << "Введённое вещественное число (float)- " << a5 << ", в степени равно: " << res5 << endl;
}

int Fib(int a) {
	if ((a == 1) || (a == 2))
		return 1;
	else
		return (Fib(a - 1)) + (Fib(a - 2));
}
void lab4_4() {
	int n, i;
	cout << "Введите порядковый номер элемента: ";
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
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "НОД данных чисел равен: " << nod(a, b) << endl;
}