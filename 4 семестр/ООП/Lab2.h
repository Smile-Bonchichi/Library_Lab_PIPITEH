#pragma once

struct infoFor1_1 {
	str departure; //отправление
	str destination;//место назначения
	int number_flight = 0;//номер рейса
	str date_departure;//дата отправления
	str date_destination;//дата посадки
	int number_registration = 0;//номер регистрации
};

struct infoFor1_2 {
	str full_name;
	struct date { str day; str month; str year; } date_b;
	str number_stud;
};

struct infoFor1_3 { int item; infoFor1_3* next; };

class Aeroflot {
	int count;
	infoFor1_1* Arr;
private:
	int SearchElem(str item) {
		int c = 0, s = -1, choice;
		for (int i = 0; i < count; i++) 
			if (Arr[i].destination == item) { c++; s = i; }
		if (c == 0) return s;
		else if (c == 1) return s;
		else
			while (true) {
				for (int i = 0; i < c; i++)
					cout << item << "\t" << i + 1 << endl;
				cout << "\nChoice one elem: ";
				cin >> choice; system("cls");
				if (choice > c || choice < 0) red("Error!!!\n");
				else { s = choice - 1; return s; }
			}
	}
public:
	void setInfo(int n, infoFor1_1* arr) {
		count = n; Arr = new infoFor1_1[count];
		for (int i = 0; i < count; i++) Arr[i] = arr[i];
	}
	void setInfo(int n) { count = n; Arr = new infoFor1_1[count]; }
	void add() {//метод добавления
		infoFor1_1* temp = new infoFor1_1[count];//создание третьего стакана
		for (int i = 0; i < count; i++) temp[i] = Arr[i]; //copy для добавления

		count++; str s; Arr = new infoFor1_1[count]; //увеличение выделяемой памяти для записи нового элемента

		cout << "Введите место отправления:";
		cin.ignore(); getline(cin, s);
		Arr[count - 1].departure = s;

		cout << "Введите место назначения:";
		getline(cin, s);
		Arr[count - 1].destination = s;

		Arr[count - 1].number_flight = count;

		cout << "Введите дату вылета:";
		getline(cin, s);
		Arr[count - 1].date_departure = s;

		cout << "Введите дату прилета:";
		getline(cin, s);
		Arr[count - 1].date_destination = s;

		cout << "Введите номер регистрационной секции:";
		cin >> s; Arr[count - 1].number_registration = atoi(s.c_str());

		for (int i = 0; i < count - 1; i++) Arr[i] = temp[i];

		delete[]temp;
	}
	void output() { //метод вывода
		cout << "____________________________________________________________________________________\n";
		cout << "| № fligth | Departure | Destination |  Date departure  | Date destination | № reg |\n";
		cout << "|----------+-----------+-------------+------------------+------------------+-------+\n";
		for (int i = 0; i < count; i++) {
			cout << "| " << setw(8) << Arr[i].number_flight << " | " << setw(9) << Arr[i].departure;
			cout << " | " << setw(11) << Arr[i].destination << " | ";
			cout << setw(16) << Arr[i].date_departure << " | " << setw(16) << Arr[i].date_destination << " | ";
			cout << setw(5) << Arr[i].number_registration << " |\n";
			cout << "|----------+-----------+-------------+------------------+------------------+-------+\n";
		}
	}
	void sort() { //метод сортировки
		for (int j = 1; j < count; j++) for (int i = 0; i < count - j; i++)
				if (Arr[i].destination > Arr[i + 1].destination) swap(Arr[i], Arr[i + 1]);
	}
	void initial_Sort() { //метод для возвращения обратного вида
		for (int j = 1; j < count; j++) for (int i = 0; i < count - j; i++)
				if (Arr[i].number_flight > Arr[i + 1].number_flight) swap(Arr[i], Arr[i + 1]);
	}
	void search() { //метод для поиска рейса по месту назначения
		str s; int x;
		cout << "Введите место назначение искоемого рейса: ";
		cin >> s; system("cls");
		x = SearchElem(s);
		if (x != -1) {
			cout << "____________________________________________________________________________________\n";
			cout << "| № fligth | Departure | Destination |  Date departure  | Date destination | № reg |\n";
			cout << "|----------+-----------+-------------+------------------+------------------+-------+\n";
			cout << "| " << setw(8) << Arr[x].number_flight << " | " << setw(9) << Arr[x].departure;
			cout << " | " << setw(11) << Arr[x].destination << " | ";
			cout << setw(16) << Arr[x].date_departure << " | " << setw(16) << Arr[x].date_destination << " | ";
			cout << setw(5) << Arr[x].number_registration << " |\n";
			cout << "|----------+-----------+-------------+------------------+------------------+-------+\n";
		} else cout << "Такого рейса нет!!!\n\n";
	}
	~Aeroflot() { delete[]Arr; }
};

class Students {
	int n;
	infoFor1_2* variable_class;
private:
	void pop(int x) {
		variable_class[x].full_name = ' ';
		for (int j = 1; j < n; j++)
			for (int i = 0; i < n - j; i++)
				if (variable_class[i].full_name == " ") swap(variable_class[i], variable_class[i + 1]);
		
		n--; ofstream sout;
		sout.open("1\\Stud.txt");
		sout << n << endl;
		for (int i = 0; i < n; i++) {
			sout << variable_class[i].full_name << endl;
			sout << variable_class[i].date_b.day << ' ' << variable_class[i].date_b.month << ' ' << variable_class[i].date_b.year << endl;
			sout << variable_class[i].number_stud << endl;
		}
		sout.close();
	}
	int SearchElem(str item) {
		int count = 0, s = -1, choice;
		for (int i = 0; i < n; i++) {
			if (variable_class[i].full_name == item) { count++; s = i; }
			else if ((variable_class[i].date_b.day[0] == item[0] && variable_class[i].date_b.day[1] == item[1])
				&& (variable_class[i].date_b.month[0] == item[3] && variable_class[i].date_b.month[1] == item[4])
				&& (variable_class[i].date_b.year[0] == item[6] && variable_class[i].date_b.year[1] == item[7]
					&& (variable_class[i].date_b.year[2] == item[8] && variable_class[i].date_b.year[3] == item[9]))) {
				count++; s = i;
			} else if (variable_class[i].number_stud == item) { count++; s = i; }
		}
		if (count == 0) return s;
		else if (count == 1) return s;
		else
			while (true) {
				for (int i = 0; i < count; i++) cout << item << "\t" << i + 1 << endl;
				cout << "\nChoice one elem: ";
				cin >> choice; system("cls");
				if (choice > count || choice < 0) red("Error!!!\n");
				else { s = choice - 1; return s; }
			}
	}
	void outputSearch(int x) {
		cout << "+ № student +       Full Name      + Date of Birthday + Number Student +\n";
		cout << "|-----------|----------------------|------------------|----------------|\n";
		cout << "| " << setw(9) << x + 1 << " | " << setw(20) << variable_class[x].full_name << " | ";
		cout << setw(8) << variable_class[x].date_b.day << '-' << variable_class[x].date_b.month << '-' << variable_class[x].date_b.year;
		cout << " | " << setw(14) << variable_class[x].number_stud << " |\n";
	}
	void BubbleSort(int check) {
		if (check == 1) {
			fstream sin; sin.open("1\\stud.txt"); sin >> n;
			for (int i = 0; i < n; i++) {
				sin.ignore(); getline(sin, variable_class[i].full_name);
				sin >> variable_class[i].date_b.day >> variable_class[i].date_b.month >> variable_class[i].date_b.year;
				sin >> variable_class[i].number_stud;
			}
			sin.close();
		} else if (check == 2) {
			for (int j = 1; j < n; j++) for (int i = 0; i < n - j; i++)
					if (variable_class[i].full_name > variable_class[i + 1].full_name) swap(variable_class[i], variable_class[i + 1]);
		} else if (check == 3) {
			for (int j = 0; j < n - 1; j++) for (int i = 0; i < n - 1; i++)
					if ((atoi(variable_class[i].date_b.day.c_str()) + (atoi(variable_class[i].date_b.month.c_str()) * 100)
					+ (atoi(variable_class[i].date_b.year.c_str()) * 10000)) > (atoi(variable_class[i + 1].date_b.day.c_str())
					+ (atoi(variable_class[i + 1].date_b.month.c_str()) * 100) + (atoi(variable_class[i + 1].date_b.year.c_str()) * 10000)))
						swap(variable_class[i], variable_class[i + 1]);
		} else
			for (int j = 1; j < n; j++) for (int i = 0; i < n - j; i++)
					if (atoi(variable_class[i].number_stud.c_str()) > atoi(variable_class[i + 1].number_stud.c_str()))
						swap(variable_class[i], variable_class[i + 1]);
	}
	void Choice(str s) {
		cout << "   ________________________________________\n";
		cout << " / \\         " << setw(10) << s << " студентов          \\.\n";
		cout << "|   |                                      |.\n";
		cout << " \\_ |       1. По номеру в списке          |.\n";
		cout << "    |       2. По ФИО                      |.\n";
		cout << "    |       3. По дате рождения            |.\n";
		cout << "    |       4. По номеру телефона          |.\n";
		cout << "    |       5. Назад                       |.\n";
		cout << "    |   ___________________________________|___\n";
		cout << "    |  /                                      /.\n";
		cout << "    \\_/______________________________________/.\n";
	}
public:
	Students(int count, infoFor1_2* x) {
		this->n = count; this->variable_class = new infoFor1_2[n];
		for (int i = 0; i < n; i++) this->variable_class[i] = x[i];
	}
	void add() {
		infoFor1_2* temp = new infoFor1_2[n];
		for (int i = 0; i < n; i++) {
			temp[i].full_name = variable_class[i].full_name;
			temp[i].date_b = variable_class[i].date_b;
			temp[i].number_stud = variable_class[i].number_stud;
		}
		n++; variable_class = new infoFor1_2[n];
		for (int i = 0; i < n - 1; i++) {
			variable_class[i].full_name = temp[i].full_name;
			variable_class[i].date_b = temp[i].date_b;
			variable_class[i].number_stud = temp[i].number_stud;
		}
		cout << "Введите ФИО нового студента: ";
		cin.ignore(); getline(cin, variable_class[n - 1].full_name);
		cout << "Введите дату рождения нового студента: ";
		cin >> variable_class[n - 1].date_b.day >> variable_class[n - 1].date_b.month >> variable_class[n - 1].date_b.year;
		cout << "Введите номер нового студента: ";
		cin >> variable_class[n - 1].number_stud;
		ofstream sout; sout.open("1\\Stud.txt"); sout << n << endl;
		for (int i = 0; i < n; i++) {
			sout << variable_class[i].full_name << endl;
			sout << variable_class[i].date_b.day << ' ' << variable_class[i].date_b.month << ' ' << variable_class[i].date_b.year << endl;
			sout << variable_class[i].number_stud << endl;
		}
		sout.close();
		delete[]temp;
	}
	void output() {
		cout << "________________________________________________________________________\n";
		cout << "| № student |       Full Name      | Date of Birthday | Number Student |\n";
		cout << "|-----------|----------------------|------------------|----------------|\n";
		for (int i = 0; i < n; i++) {
			cout << "| " << setw(9) << i + 1 << " | " << setw(20) << variable_class[i].full_name << " | ";
			cout << setw(8) << variable_class[i].date_b.day << '-' << variable_class[i].date_b.month << '-' << variable_class[i].date_b.year;
			cout << " | " << setw(14) << variable_class[i].number_stud << " |\n";
			cout << "|-----------|----------------------|------------------|----------------|\n";
		}
	}
	void del() {
		int x = 0; str s; bool f = true;
		while (f) {
			Choice("Удаление");
			cout << "\nВведите признак удаления: ";
			cin >> s; system("cls");
			if (!check_number(s)) cout << "Вы ввели не число!!!\n";
			else
				switch (atoi(s.c_str())) {
				case 1: f = false;
					cout << "Введите номер студента из списка для удаления: ";
					cin >> s; system("cls");
					if (!check_number(s)) cout << "Вы ввели не число!!!\n";
					else {
						if ((atoi(s.c_str()) - 1) >= n || (atoi(s.c_str()) - 1) < 0) cout << "Вы ввели неправильно, повторите ввод!!!\n";
						else pop(atoi(s.c_str()) - 1);
					}; break;
				case 2: f = false;
					cout << "Введите ФИО студента из списка: ";
					cin.ignore(); getline(cin, s); system("cls"); x = SearchElem(s);
					if (x == -1) cout << "Такого студента нет в базе данных!!!\n\n";
					else pop(x); break;
				case 3: f = false;
					cout << "Введите дату рождения студента из списка: ";
					cin >> s; system("cls"); x = SearchElem(s);
					if (x == -1) cout << "Такого студента нет в базе данных!!!\n\n";
					else pop(x); break;
				case 4: f = false;
					cout << "Введите номер телефона студента из списка: ";
					cin >> s; system("cls"); x = SearchElem(s);
					if (x == -1) cout << "Такого студента нет в базе данных!!!\n\n";
					else pop(x); break;
				case 5: f = false; break;
				default: cout << "Такой операции не существует!!!\nВведите заново.\n"; break;
				}
		}
	}
	void sort() {
		str s; bool f = true;
		while (f) {
			Choice("Сортировка");
			cout << "\nВведите признак сортировки: ";
			cin >> s; system("cls");
			if (!check_number(s)) cout << "Вы ввели не число!!!\n";
			else
				switch (atoi(s.c_str())) {
				case 1: f = false; BubbleSort(1); break;
				case 2: f = false; BubbleSort(2); break;
				case 3: f = false; BubbleSort(3); break;
				case 4: f = false; BubbleSort(4); break;
				case 5: f = false; break;
				default: cout << "Такой операции не существует!!!\nВведите заново\n"; break;
				}
		}
	}
	void search() {
		int x = -1; str s; bool f = true;
		while (f) {
			Choice("Поиск");
			cout << "\nВведите признак поиска: ";
			cin >> s; system("cls");
			if (!check_number(s)) cout << "Вы ввели не число!!!\n";
			else
				switch (atoi(s.c_str())) {
				case 1: f = false;
					cout << "Введите номер студента из списка: ";
					cin >> s; system("cls");
					if (!check_number(s)) cout << "Вы ввели не число!!!\n";
					else {
						if ((atoi(s.c_str()) - 1) >= n || (atoi(s.c_str()) - 1) < 0) cout << "Такого студента нет в базе данных!!!\n\n";
						else outputSearch(atoi(s.c_str()) - 1);
					}; break;
				case 2: f = false;
					cout << "Введите ФИО студента из списка: ";
					cin.ignore(); getline(cin, s); system("cls"); x = SearchElem(s);
					if (x != -1) outputSearch(x);
					else cout << "Такого студента нет в базе данных!!!\n\n"; break;
				case 3: f = false;
					cout << "Введите дату рождения студента из списка: ";
					cin >> s; system("cls"); x = SearchElem(s);
					if (x != -1) outputSearch(x);
					else cout << "Такого студента нет в базе данных!!!\n\n"; break;
				case 4: f = false;
					cout << "Введите номер телефона студента из списка: ";
					cin >> s; system("cls"); x = SearchElem(s);
					if (x != -1) outputSearch(x);
					else cout << "Такого студента нет в базе данных!!!\n\n"; break;
				case 5: f = false; break;
				default: cout << "Такой операции не существует!!!\nВведите заново.\n"; break;
				}
		}
	}
	~Students() { delete[]variable_class; }
};

class Stack {
	infoFor1_3* S;
	int count;
private:
	void d(int& k1, int& k2) {
		infoFor1_3* pv = S;
		while (pv != NULL) {
			if (pv->item % 2 == 0) k1++;
			else k2++;

			pv = pv->next;
		}
	}
public:
	Stack() { S = NULL; count = 0; }
	void push(int s) {
		infoFor1_3* pv = new infoFor1_3;
		pv->item = s; pv->next = S;
		S = pv; count++;
	}
	void pop() {
		if (count == 0) cout << "Стек пуст!!!\nНечего удалять!!!\n";
		else {
			infoFor1_3* pv = S; S = S->next;
			cout << "Элемент " << pv->item << " удален!!!\n";
			delete pv; count--;
		}
	}
	void output() {
		if (count == 0) cout << "Стек пуст!!!\nНечего показывать!!!\n";
		else {
			infoFor1_3* pv = S; int i = count;
			cout << "_____________________\n";
			cout << "| Элементы | Индекс |\n";
			while (pv != NULL) {
				cout << "| " << setw(8) << pv->item << " | " << setw(6) << i << " |\n";
				pv = pv->next; i--;
			}
		}
	}
	int getCount() { return count; }
	void divide() {
		if (count == 0) cout << "Стек пуст!!!\nНечего разделять!!!\n";
		else {
			int countE = 0, countO = 0;
			int i = 0, j = 0, min, max;
			d(countE, countO);
			int* arrEven = new int[countE + 1];
			int* arrOdd = new int[countO + 1];
			for (int i = 0; i < countE; i++)
				arrEven[i] = 0;
			for (int i = 0; i < countO; i++)
				arrOdd[i] = 0;
			infoFor1_3* pv = S;
			while (pv != NULL) {
				if (pv->item % 2 == 0) { arrEven[i] = pv->item; i++; } 
				else { arrOdd[j] = pv->item; j++; }
				
				pv = pv->next;
			}
			cout << "_____________________\n";
			cout << "| Четные | Нечетные |\n";
			if (countE > countO) { max = countE; min = countO; }
			else { min = countE; max = countO; }
			for (int i = 0; i < min; i++) cout << "| " << setw(6) << arrEven[i] << " | " << setw(8) << arrOdd[i] << " |\n";
			if (max == countE) for (int i = min; i < max; i++) cout << "| " << setw(6) << arrEven[i] << endl;
			else for (int i = min; i < max; i++) cout << "| " << setw(9) << " | " << setw(8) << arrOdd[i] << " |\n";
			
			delete[]arrEven; delete[]arrOdd;
		}
	}
	~Stack() { delete S; }
};

void lab2_1() {
	time_t start, end; double dif;
	str s; bool f = true;
	Aeroflot A; start = clock();
	cout << "Читать данные из файла?\n1 - Yes\t2 - No\n\n";
	cin >> s; system("cls");
	if (!check_number(s)) cout << "Вы ввели не число!!!\n";
	else {
		if (atoi(s.c_str()) == 1) {
			fstream sin; sin.open("1\\air.txt");
			int n; sin >> n;
			infoFor1_1* arr = new infoFor1_1[n];
			for (int i = 0; i < n; i++) {
				sin >> arr[i].number_flight;
				sin.ignore(); getline(sin, arr[i].departure); getline(sin, arr[i].destination);
				sin >> arr[i].number_registration;
				sin.ignore(); getline(sin, arr[i].date_departure); getline(sin, arr[i].date_destination);
			}
			sin.close();

			A.setInfo(n, arr); delete[]arr;
		}
		else if (atoi(s.c_str()) == 2) A.setInfo(0);
	}
	while (f) {
		Main_Menu("Добавить новую запись", "Вывести записи полетов", "Отсортировать записи полетов", "Вернуть в первоначальный вид", "Поиск записи полета");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: A.add(); break;
			case 2: A.output(); break;
			case 3: A.sort(); break;
			case 4: A.initial_Sort(); break;
			case 5: A.search(); break;
			case 6: f = false; break;
			default: cout << "Такой операции не существует!!!\nВведите заново.\n"; break;
			}
	}
	system("cls"); end = clock(); dif = difftime(end, start);
	cout << "Программа работала " << (dif / 1000.0) << " секунд\n";
}

void lab2_2() {
	int n; str s;
	fstream sin; bool f = true;

	sin.open("1\\Stud.txt"); sin >> n;

	infoFor1_2* variable_main = new infoFor1_2[n];

	for (int i = 0; i < n; i++) {
		sin.ignore(); getline(sin, variable_main[i].full_name);
		sin >> variable_main[i].date_b.day >> variable_main[i].date_b.month >> variable_main[i].date_b.year;
		sin >> variable_main[i].number_stud;
	}
	sin.close();

	Students S(n, variable_main);
	while (f) {
		Main_Menu("Добавить нового студента", "Вывести список студентов", "Удалить студента", "Отсортировать список студентов", "Поиск студента");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1: S.add(); break;
			case 2: S.output(); break;
			case 3: S.del(); break;
			case 4: S.sort(); break;
			case 5: S.search(); break;
			case 6: f = false; break;
			default: cout << "Такой операции не существует!!!\nВведите заново.\n"; break;
			}
	}
	delete[]variable_main;
}

void lab2_3() {
	Stack S; str s;
	int x, n; bool f = true;
	cout << "Хотите прочитать с файла данные?\n 1 - yes\t 2 - no\n";
	cin >> s; system("cls");
	if (!check_number(s)) cout << "Вы ввели не число!!!\n";
	else
		if (atoi(s.c_str()) == 1) {
			fstream sin; sin.open("1\\Stack.txt"); sin >> n;
			for (int i = 0; i < n; i++) { sin >> x; S.push(x); }
			sin.close();
		}
	while (f) {
		Main_Menu("Добавить новый элемент в stack", "Вывести элементы stack'a", "Удалить элемент stack'a", "Вывести кол - во элементов stack'a", "Разделить и вывести stack");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1:
				cout << "Введите новый элемент: ";
				cin >> s; system("cls");
				if (!check_number(s)) cout << "Вы ввели не число!!!\n";
				else S.push(atoi(s.c_str())); break;
			case 2: S.output(); break;
			case 3: S.pop(); break;
			case 4: cout << "В стеке: " << S.getCount() << " элементов\n"; break;
			case 5: S.divide(); break;
			case 6: f = false; break;
			default: cout << "Такой операции не существует!!!\nВведите заново.\n"; break;
			}
	}
}