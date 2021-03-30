#pragma once

class SafeArray {
	int* arr;
	int n;
public:
	SafeArray() { this->n = 0; arr = new int[n]; }
	SafeArray(const int& count) { this->n = count; arr = new int[n]; }
	void setElem(const int& count, int elem) {
		try {
			if (count < 0 || count >= this->n) throw "Ошибка!!!";
		} catch (const char* ex) { return red(ex); }
		this->arr[count] = elem;
	}
	int getElem(const int& count) {
		try {
			if (count < 0 || count >= this->n) throw "Ошибка!!!";
			else return this->arr[count];
		} catch (const char* ex) { red(ex); return ' '; }
		return 0;
	}
	void output() {
		for (int i = 0; i < n; i++)
			try { 
				if (arr[i] == -842150451) throw " ";
				else cout << arr[i] << endl;
			} catch (const char* ex) { cout << ex; }
	}
};

class Rect_9 {
	double length;
	double width;
public:
	Rect_9() { this->length = this->width = 0; }
	Rect_9(double l, double w) {
		this->length = this->width = 0;
		try {
			if (l < 0 || w < 0) throw "Ошибка!!!";
			else { this->length = l; this->width = w; }
		} catch (const char* ex) { red(ex); exit(0); }
	}
	Rect_9(double square) { this->length = this->width = square; }
	void output() {
		try {
			if (length == 0 || width == 0) throw "Ошибка!!!";
			else cout << "Length = " << length << "\tWidth = " << width << endl;
		} catch (const char* ex) { red(ex); }
	}
	double rect_area() { return (length * width); }
};

void lab9_1() {
	int temp1, temp2;
	str s; bool f = true;
	green("Введите новый размер массива: ");
	cin >> temp1; system("cls");
	SafeArray a(temp1);
	while (f) {
		Main_Menu("Заполнить массив", "Вывести массив", "Получить определенный элемент", "Изменить размер массива");
		cin >> s; system("cls");
		switch (atoi(s.c_str())) {
		case 1:
			green("Введите индекс и элемент куда добавить: ");
			cin >> temp1 >> temp2;
			a.setElem(temp1 - 1, temp2); break;
		case 2: a.output(); cin.ignore(); getline(cin, s); system("cls"); break;
		case 3:
			green("Введите индекс откуда взять: ");
			cin >> temp1; a.getElem(temp1);
			cin.ignore(); getline(cin, s); system("cls"); break;
		case 4:
			green("Введите новый размер массива: ");
			cin >> temp1; a = SafeArray(temp1); break;
		case 5: f = false; break;
		}
	}
}

void lab9_2() {
	Rect_9 a;

	while (true) {
		a = Rect_9(2, -5);
		a.output();
	}
}