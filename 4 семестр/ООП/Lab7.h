#pragma once

class Array {
protected:
	str id;
	int n;
	int* arr;
public:
	Array() { n = 0;  arr = new int[n]; this->id = "#1"; }
	virtual void input(int size) {
		this->n = size; arr = new int[n];
		for (int i = 0; i < n; i++) arr[i] = i;
	}
	void output() {
		yellow(id + ":  ");
		for (int i = 0; i < n; i++) cout << arr[i] << " ";
		cout << endl;
	}
	virtual int Amount() {
		int amount = 0;
		for (int i = 0; i < n; i++) amount += arr[i];
		return amount;
	}
	void outputAmount() { dark_blue(id + " amount = "); red(to_string(Amount()) + "\n"); }
	friend void AllAmount(Array& arr1, Array2& arr2, Array3& arr3);
	~Array() { delete[]arr; }
};
class Array2 : public Array {
public:
	Array2() : Array() { this->id = "#2"; }
	void input(int size) override {
		this->n = size; arr = new int[n];
		for (int i = 0; i < n; i++) arr[i] = i + 10;
	}
	int Amount() override {
		int amount_odd = 0;
		int amount_even = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] % 2 == 0) amount_even += arr[i];
			else amount_odd += arr[i];
		}
		int amount = amount_even + amount_odd;
		return amount;
	}
	friend void AllAmount(Array& arr1, Array2& arr2, Array3& arr3);
};
class Array3 : public Array {
public:
	Array3() : Array() { this->id = "#3"; }
	void input(int size) override {
		this->n = size; arr = new int[n];
		for (int i = 0; i < n; i++) arr[i] = i + 20;
	}
	int Amount() override {
		int amount_odd = 0;
		int amount_even = 0;
		for (int i = n - 1; i > -1; i--) {
			if (arr[i] % 2 == 0) amount_even += arr[i];
			else amount_odd += arr[i];
		}
		int amount = amount_even + amount_odd;
		return amount;
	}
	friend void AllAmount(Array& arr1, Array2& arr2, Array3& arr3);
};

class Figure {
protected:
	double a;
	double b;
public:
	Figure() { this->a = this->b = 0; }
	virtual double square() = 0;
	virtual double perimeter() = 0;
	virtual void output() = 0;
};

class rectangle : public Figure {
public:
	rectangle() { this->a = this->b = 0; }
	rectangle(double plosha, double lenght) { this->a = plosha; this->b = lenght; }
	double square() override { return (this->a * this->b); }
	double perimeter() override { return ((this->a + this->b) * 2); }
	void output() override { red("a = " + to_string(a) + "\n"); red("b = " + to_string(b) + "\n"); }
};

class circle : public Figure {
	double radius;
public:
	circle() { this->radius = 0; }
	circle(double r) { this->radius = r; }
	double square() override { return (pow(this->radius, 2) * PI); }
	double perimeter() override { return (2 * PI * this->radius); }
	void output() override { red("r = " + to_string(radius) + "\n"); }
};

class trapezium : public Figure {
	double h, c, d;
public:
	trapezium() { this->a = this->b = this->c = this->d = this->h = 0; };
	trapezium(double a, double b, double hight, double c, double d) {
		this->a = a; this->b = b;
		this->c = c; this->d = d;
		this->h = hight;
	}
	double square() override { return ((this->a + this->b) / 2 * this->h); }
	double perimeter() override { return (this->a + this->b + this->c + this->d); }
	void output() override { red("a = " + to_string(a) + "\nb = " + to_string(b) + "\nc = " + to_string(c) + "\nd = " + to_string(d) + "\nh = " + to_string(h) + "\n"); }
};

class Curency {
protected:
	double money;
public:
	Curency() { this->money = 0; }
	virtual void convert() = 0;
	virtual void output() = 0;
};

class Dollar : Curency {
public:
	Dollar() { this->money = 0; }
	Dollar(double money) { this->money = money; }
	void output() override { green("Ваш баланс в долларах: "); red(to_string(money) + "\n"); }
	void convert() override { output(); green("Ваш баланс в рублях: "); red(to_string(money * 73.75) + "\n"); }
};

class Euro : Curency {
public:
	Euro() { this->money = 0; }
	Euro(double money) { this->money = money; }
	void output() override { green("Ваш баланс в евро: "); red(to_string(money) + "\n"); }
	void convert() override { output(); green("Ваш баланс в рублях: "); red(to_string(money * 88.97) + "\n"); }
};

void AllAmount(Array& arr1, Array2& arr2, Array3& arr3) { magenta("#1 + #2 + #3 = " + to_string(arr1.Amount() + arr2.Amount() + arr3.Amount())); }

void Choice(str s) {
	yellow("   ________________________________________\n");
	yellow(" / \\       "); dark_blue("Меню " + s + "\n");
	yellow("|   |                                      |.\n");
	yellow(" \\_ |      "); dark_blue("1. Заполнить фигуру       "); yellow("      |.\n");
	yellow("    |       "); dark_blue("2. Вывести стороны фигуры"); yellow("      |.\n");
	yellow("    |       "); dark_blue("3. Посчитать площадь     "); yellow("      |.\n");
	yellow("    |       "); dark_blue("4. Посчитать переметр    "); yellow("      |.\n");
	yellow("    |       "); dark_blue("5. Назад                 "); yellow("      |.\n");
	yellow("    |   ___________________________________|___\n");
	yellow("    |  /                                      /.\n");
	yellow("    \\_/______________________________________/.\n");
}

void sq() {
	str s; bool f = true;
	double temp1 = 0, temp2 = 0;
	rectangle rec;
	while (f) {
		Choice("прямоугольника");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: green("Введите "); red("площадь "); green("прямоугольника: "); cin >> temp1;
				green("Введите "); red("длину "); green(" прямоугольника: "); cin >> temp2;
				rec = rectangle(temp1, temp2); break;
			case 2: rec.output(); break;
			case 3: green("Площадь "); red("прямоугольника "); green("состовляет = "); cout << rec.square() << endl; break;
			case 4: green("Перемитр "); red("прямоугольника "); green("состовляет = "); cout << rec.perimeter() << endl; break;
			case 5: f = false; break;
			}
	}
}
void cir() {
	str s; bool f = true;
	double temp = 0;
	circle cir;
	while (f) {
		Choice("круга");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: green("Введите "); red("радиус "); green("круга: "); cin >> temp;
				cir = circle(temp); break;
			case 2: cir.output(); break;
			case 3: green("Площадь "); red("круга "); green("состовляет = "); cout << cir.square() << endl; break;
			case 4: green("Перемитр "); red("круга "); green("состовляет = "); cout << cir.perimeter() << endl; break;
			case 5: f = false; break;
			}
	}
}
void tra() {
	str s; bool f = true;
	double temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0, temp5 = 0;
	trapezium tra;
	while (f) {
		Choice("трапеции");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: green("Введите "); red("#1 длину основной "); green("трапеции: "); cin >> temp1;
				green("Введите "); red("#2 длину основной "); green("трапеции: "); cin >> temp2;
				green("Введите "); red("#1 длину боковой "); green("трапеции: "); cin >> temp3;
				green("Введите "); red("#2 длину боковой "); green("трапеции: "); cin >> temp4;
				green("Введите "); red("высота "); green("трапеции: "); cin >> temp5;
				tra = trapezium(temp1, temp2, temp3, temp4, temp5); break;
			case 2: tra.output(); break;
			case 3: green("Площадь "); red("круга "); green("состовляет = "); cout << tra.square() << endl; break;
			case 4: green("Перемитр "); red("круга "); green("состовляет = "); cout << tra.perimeter() << endl; break;
			case 5: f = false; break;
			}
	}
}

void lab7_1() {
	Array arr1;
	Array2 arr2;
	Array3 arr3;

	str s; bool f = true; int n;

	while (f) {
		Main_Menu("Объявить кол - во элементов у массива #1", "Объявить кол - во элементов у массива #2", "Объявить кол - во элементов у массива #3",
			"Вывести все массивы", "Сложить массив #1", "Сложить массив #2", "Сложить массив #3", "Вывести общую сумму массивов");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: cout << "n = "; cin >> n; arr1.input(n); break;
			case 2: cout << "n = "; cin >> n; arr2.input(n); break;
			case 3: cout << "n = "; cin >> n; arr3.input(n); break;
			case 4: arr1.output(); arr2.output(); arr3.output(); cin.ignore(); getline(cin, s); break;
			case 5: arr1.outputAmount(); cin.ignore(); getline(cin, s); break;
			case 6: arr2.outputAmount(); cin.ignore(); getline(cin, s); break;
			case 7: arr3.outputAmount(); cin.ignore(); getline(cin, s); break;
			case 8: AllAmount(arr1, arr2, arr3); cin.ignore(); getline(cin, s); break;
			case 9: f = false; break;
			}
	}
}

void lab7_2() {
	str s; bool f = true;
	while (f) {
		Main_Menu("Меню площади", "Меню круга", "Меню трапеции");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: sq(); break;
			case 2: cir(); break;
			case 3: tra(); break;
			case 4: f = false; break;
			}
	}
}

void lab7_3() {
	Dollar d; Euro e;
	str s; bool f = true;
	int temp = 0;
	while (f) {
		Main_Menu("Заполнить кол - во денег в долларах", "Вывести кол - во денег в долларах", "Конвентировать доллары в рубли",
			"Заполнить кол - во денег в евро", "Вывести кол - во денег в евро", "Конвентировать евро в рубли");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: green("Введите "); red("количество денег "); green("в долларах: "); cin >> temp;
				d = Dollar(temp); break;
			case 2: d.output(); cin.ignore(); getline(cin, s); break;
			case 3: d.convert(); cin.ignore(); getline(cin, s); break;
			case 4: green("Введите "); red("количество денег "); green("в евро: "); cin >> temp;
				e = Euro(temp); break;
			case 5: e.output(); cin.ignore(); getline(cin, s); break;
			case 6: e.convert(); cin.ignore(); getline(cin, s); break;
			case 7: f = false; break;
			}
	}
}