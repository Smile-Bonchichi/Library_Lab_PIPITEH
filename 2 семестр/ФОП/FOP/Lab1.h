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
	cout << "¬ведите число: ";
	cin >> base;
skip:
	cout << "¬ведите степень: ";
	cin >> exponent;
	if (exponent) {
		cout << "¬ведите положительную степень\n";
		goto skip;
	} else
		res = power(base, exponent);
	cout << "¬ведЄнное число, в ведЄнной вами степени равно: " << res << endl;
}

bool multiple(int a, int b) {
	if (b % a == 0)
		return 1;
	else
		return 0;
}


void lab1_2() {
	int a, b, n;
	cout << "¬ведите колмичество повторений ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a = rand() % 10 + 1;
		b = rand() % 100 + 1;
		cout << "„исло а равно: " << a << "\t";
			cout << "„исло b равно: " << b << "\t";
		if (multiple(a, b))
			cout << b << " кратно " << a << endl;
		else
			cout << b << " не кратно " << a << endl;
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
	cout << "¬ведите  первую сторону:";
	cin >> a;
	cout << "¬ведите  вторую сторону:";
	cin >> b;
	cout << "¬ведите  —имвол:";
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
	cout << "¬ведите число s: ";
	cin >> s;
	cout << "¬ведите число t: ";
	cin >> t;
	e = chislo(t, -2 * s, 1.17) + chislo(2.2, t, s - t);
	cout << "–езультат: " << e << "\n\n";
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
	cout << "¬ведите число a: ";
	cin >> a;
	cout << "¬ведите число b: ";
	cin >> b;
	cout << "¬ведите число c: ";
	cin >> c;
	f = (MAX(a, a + b) + MAX(a, b + c)) / (1 + MAX(a + b * c, 1.15));
	cout << "–езультат: " << f << endl;
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
		cout << "¬ведите число: ";
		cin >> a;
		if (a == 0)
			break;
		if (even(a))
			cout << "„исло " << a << " - четное" << endl;
		else
			cout << "„исло " << a << " - не четное" << endl;
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
	cout << "Cовершенные числа в диапазоне от 1 до 1000:" << endl;
	for (int i = 1; i <= 1000; i++)
		if (perfect(i)) {
			cout << i << endl;
			cout << endl;
			cout << "Cомножители: " << endl;
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
			cout << i << ".–ешка" << "\n";
			kolreshka++;
		} else {
			cout << i << ".ќрел" << "\n";
			kolorel++;
		}
	}
	cout << endl;
	cout << "ќрел выпал " << kolorel << " раз" << endl;
	cout << "–ешка выпала " << kolreshka << " раз" << endl;
}