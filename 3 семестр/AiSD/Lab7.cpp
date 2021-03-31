#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <iomanip>
#include "Windows.h"

using namespace std;

struct list {
	int item;
	list* next;
	list* prev;
};

int _count = 0, p = 0;

void inition(list*& he, list*& ta);

void add(list*& he, list*& ta);

void output(list* he, list* ta);
void output_back(list* he, list* ta);

void deleLI(list*& he, list*& ta);

void search(list* he, list* ta);

void swapLI(list*& he, list*& ta);

void sort(list*& he, list*& ta);

void clear(list*& he, list*& ta);

void pushByIndex(list*& he, list*& ta);
void pushByIndex_Before(list*& he, list*& ta);
void pushByIndex_After(list*& he, list*& ta);

void pushByValue_Before(list*& he, list*& ta);
void pushByValue_After(list*& he, list*& ta);

void push(list*& he, list*& ta, int k);

void popByIndex(list*& he, list*& ta);
void popByIndex_Before(list*& he, list*& ta);
void popByIndex_After(list*& he, list*& ta);

void popByValue_Before(list*& he, list*& ta);
void popByValue_After(list*& he, list*& ta);
void popByValue(list*& he, list*& ta);

void pop(list*& he, list*& ta, int k);

void searchByIndex_Value(list* he, list* ta);
void searchByIndex_Before(list* he, list* ta);
void searchByIndex_After(list* he, list* ta);
void searchByIndex(list* he, list* ta, int x);

void searchByValue_Before(list* he, list* ta);
void searchByValue_After(list* he, list* ta);
int searchByValue(list* he, list* ta, int value);

void swapByValue_Before(list*& he, list*& ta);
void swapByValue_After(list*& he, list*& ta);
void swapByValue(list*& he, list*& ta);

void swapByIndex_Before(list*& he, list*& ta);
void swapByIndex_After(list*& he, list*& ta);
void swapByIndex(list*& he, list*& ta);

void swapMain(list*& he, list*& ta, int x);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	list* _head = new list;
	list* _tail = new list;
	bool f = true;
	int choice;

	_head->item = 0;
	_head->next = NULL;
	_head->prev = NULL;

	_tail->item = 0;
	_tail->next = NULL;
	_tail->prev = NULL;

	inition(_head, _tail);
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|             Главное Меню:             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         1. Добавление элемента        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          2. Вывод элементов           |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|      3. Вывод наоборот элементов      |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          4. Удаление элемента         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|            5. Поиск элемента          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           6. Поменять местами         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         7. Отсортировать список       |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           8. Очистить список          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|                9. Выход               |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "Введите номер операции:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: add(_head, _tail); break;
		case 2:	output(_head, _tail); break;
		case 3:	output_back(_head, _tail); break;
		case 4: deleLI(_head, _tail); break;
		case 5: search(_head, _tail); break;
		case 6: swapLI(_head, _tail); break;
		case 7: sort(_head, _tail); break;
		case 8:	clear(_head, _tail); break;
		case 9: f = false; break;
		default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
		}
	}
	return 0;
}

void inition(list*& he, list*& ta) {
	int x;
	cout << "Инициализируйте первый элемент для списка:";
	cin >> x;
	system("cls");
	list* _pv = new list;
	_pv->item = x;
	he->next = _pv;
	_pv->next = ta;
	_pv->prev = he;
	ta->prev = _pv;
	cout << "Первый элемент со значением = " << x << " инициализирован\n" << endl;
	_count++;
}

void add(list*& he, list*& ta) {
	if (_count <= 0) {
		inition(he, ta);
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|            Меню добавления:           |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|       1. Добавление по индексу        |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   2. Добавление до указанного индекса |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "| 3. Добавление после указанного индекса|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|  4. Добавление до указанного элемента |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|5. Добавление после указанного элемента|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               6. Назад                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "Введите номер операции:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; pushByIndex(he, ta); break;
			case 2: f = false; pushByIndex_Before(he, ta); break;
			case 3: f = false; pushByIndex_After(he, ta); break;
			case 4: f = false; pushByValue_Before(he, ta); break;
			case 5: f = false; pushByValue_After(he, ta); break;
			case 6: f = false; break;
			default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
			}
		}
	}
}

void output(list* he, list* ta) {
	if (_count <= 0) {
		cout << "Лист пуст, нечего выводить!!!" << endl;
	}
	else {
		int i = 1;
		list* _pv = he->next;
		cout << "------------------------------------" << endl;
		cout << "|\tЭлементы\t:   Индекс |\n";
		cout << "------------------------------------" << endl;
		while (_pv != ta) {
			cout << "|\t" << _pv->item << "\t\t:     " << i << "\t   |" << endl;
			cout << "------------------------------------" << endl;
			_pv = _pv->next;
			i++;
		}
	}
}
void output_back(list* he, list* ta) {
	if (_count <= 0) {
		cout << "Лист пуст, нечего выводить!!!" << endl;
	}
	else {
		int i = _count;
		list* _pv = ta->prev;
		cout << "------------------------------------" << endl;
		cout << "|\tЭлементы\t:   Индекс |\n";
		cout << "------------------------------------" << endl;
		while (_pv != he) {
			cout << "|\t" << _pv->item << "\t\t:     " << i << "\t   |" << endl;
			cout << "------------------------------------" << endl;
			_pv = _pv->prev;
			i--;
		}
	}
}

void deleLI(list*& he, list*& ta) {
	if (_count <= 0) {
		cout << "Лист пуст, нечего удалять!!!" << endl;
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|              Меню удаления:           |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|         1. Удаление по индексу        |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   2. Удаление до указанного индекса   |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "| 3. Удаление после указанного индекса  |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   4. Удаление до указанного элемента  |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "| 5. Удаление после указанного элемента |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|         6. Удаление по значению       |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               7. Назад                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "Введите номер операции:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; popByIndex(he, ta); break;
			case 2: f = false; popByIndex_Before(he, ta); break;
			case 3: f = false; popByIndex_After(he, ta); break;
			case 4: f = false; popByValue_Before(he, ta); break;
			case 5: f = false; popByValue_After(he, ta); break;
			case 6: f = false; popByValue(he, ta); break;
			case 7: f = false; break;
			default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
			}
		}
	}
}

void search(list* he, list* ta) {
	if (_count <= 0) {
		cout << "Лист пуст, нечего искать!!!" << endl;
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|              Меню поиска:             |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|          1. Поиск по индексу          |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|     2. Поиск до указанного индекса    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   3. Поиск после указанного индекса   |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|    4. Поиск до указанного элемента    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|  5. Поиск после указанного элемента   |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               6. Назад                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "Введите номер операции:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; searchByIndex_Value(he, ta); break;
			case 2: f = false; searchByIndex_Before(he, ta); break;
			case 3: f = false; searchByIndex_After(he, ta); break;
			case 4: f = false; searchByValue_Before(he, ta); break;
			case 5: f = false; searchByValue_After(he, ta); break;
			case 6: f = false; break;
			default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
			}
		}
	}
}

void swapLI(list*& he, list*& ta) {
	if (_count <= 0) {
		cout << "Лист пуст, нечего менять местами!!!" << endl;
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|              Меню swap'а:             |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|     1. Поменять местами по индексу    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|    2. Поменять местами по значению    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               3. Назад                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "Введите номер операции:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; swapByIndex(he, ta); break;
			case 2: f = false; swapByValue(he, ta); break;
			case 3: f = false; break;
			default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
			}
		}
	}
}

void sort(list*& he, list*& ta) {
	if (_count <= 0) {
		cout << "Лист пуст, нечего сортировать!!!" << endl;
	}
	else {
		list* _pv = new list;
		list* _PV = new list;
		for (int i = 1; i <= _count; i++) {
			_pv = he->next;
			while (_pv->next != ta) {
				if (_pv->item > _pv->next->item) {
					_PV = _pv->next;
					_pv->prev->next = _PV;
					_PV->next->prev = _pv;
					_pv->next = _PV->next;
					_PV->prev = _pv->prev;
					_pv->prev = _PV;
					_PV->next = _pv;
				}
				else {
					_pv = _pv->next;
				}
			}
		}
	}
}

void clear(list*& he, list*& ta) {
	if (_count <= 0) {
		cout << "Лист пуст, нечего очищать!!!" << endl;
	}
	else {
		list* _pv = new list;
		_pv = he->next;
		while (_pv != ta) {
			list* _PV = new list;
			_PV = _pv;
			_pv = _pv->next;
			delete _PV;
		}
		_count = 0;
		he->next = 0;
		cout << "Лист успешно очищен!!!" << endl;
	}
}

/*PUSH по Индексу
ДО			//		ПОСЛЕ
*/
void pushByIndex(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс куда добавить:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, x);
			cout << " в индекс = " << x << endl;
		}
	}
}
void pushByIndex_Before(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс куда добавить:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (x == 1) {
			f = false;
			push(he, ta, x);
			cout << " в индекс = " << x << endl;
		}
		else {
			f = false;
			push(he, ta, x - 1);
			cout << " в индекс = " << x << endl;
		}
	}
}
void pushByIndex_After(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс куда добавить:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > _count) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, x + 1);
			cout << " в индекс = " << x << endl;
		}
	}
}

/*PUSH по Значению
ДО			//		ПОСЛЕ
*/

void pushByValue_Before(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите значение элемента до которого добавить:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Введенного элемента не существует." << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, check);
			cout << " до элемента " << x << endl;
		}
	}
}
void pushByValue_After(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите значение элемента до которого добавить:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Введенного элемента не существует." << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, check + 1);
			cout << " после элемента " << x << endl;
		}
	}
}

//PUSH
void push(list*& he, list*& ta, int k) {
	list* _pv = new list;
	int x;
	cout << "Введите новый элемент для добавления:";
	cin >> x;
	system("cls");
	_pv->item = x;
	if (k == 1) {
		_pv->next = he->next;
		he->next->prev = _pv;
		_pv->prev = he;
		he->next = _pv;
	}
	else if (k == (_count + 1)) {
		list* _PV = new list;
		_PV = he->next;
		while (_PV->next != ta) {
			_PV = _PV->next;
		}
		_pv->next = _PV->next;
		_PV->next->prev = _pv;
		_PV->next = _pv;
		_pv->prev = _PV;
	}
	else {
		list* _PV = new list;
		int j = 1;
		_PV = he->next;
		while (_PV != ta) {
			if (j == (k - 1)) {
				_pv->next = _PV->next;
				_PV->next->prev = _pv;
				_pv->prev = _PV;
				_PV->next = _pv;
				break;
			}
			j++;
			_PV = _PV->next;
		}
	}
	_count++;
	cout << "Элемент " << x << " успешно добавлен";
}

/*POP по Индексу
ДО			//		ПОСЛЕ
*/
void popByIndex(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс откуда удалить:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			pop(he, ta, x);
		}
	}
}
void popByIndex_Before(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс откуда удалить:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (x == 1) {
			cout << "До 1 индекса ничего нет" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			pop(he, ta, x - 1);
		}
	}
}
void popByIndex_After(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс откуда удалить:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (x == _count) {
			cout << "После " << _count << " ничего нет " << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			pop(he, ta, x + 1);
		}
	}
}

/*POP по Значению
ДО			//		ПОСЛЕ
*/
void popByValue_Before(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите значение элемента до которого удалить:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Введенного элемента не существует." << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (check == 1) {
			cout << "Нельзя удалить до " << x << " \nПотому что там ничего нет!!!" << endl;
		}
		else {
			f = false;
			pop(he, ta, (check - 1));
		}
	}
}
void popByValue_After(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите значение элемента до которого удалить:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Введенного элемента не существует." << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (check == _count) {
			cout << "Нельзя удалить после " << x << " \nПотому что там ничего нет!!!" << endl;
		}
		else {
			f = false;
			pop(he, ta, (check + 1));
		}
	}
}
void popByValue(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите значение элемента до которого удалить:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Введенного элемента не существует." << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			pop(he, ta, (check));
		}
	}
}

//POP
void pop(list*& he, list*& ta, int k) {
	list* _pv = new list;
	int x;
	if (k == 1) {
		_pv = he->next;
		he->next = _pv->next;
		_pv->next->prev = he;
		x = _pv->item;
		cout << "Элемент " << _pv->item << " успешно удален" << endl;
		delete _pv;
	}
	else if (k == _count) {
		list* _PV = new list;
		list* __PV = new list;
		_PV = he;
		while (_PV->next != ta) {
			__PV = _PV;
			_PV = _PV->next;
		}
		x = _PV->item;
		cout << "Элемент " << _PV->item << " успешно удален" << endl;
		delete _PV;
		__PV->next = ta;
		ta->prev = __PV;
	}
	else {
		int j = 1;
		list* _PV = new list;
		list* __PV = new list;
		_PV = he->next;
		while (_PV != ta) {
			if (j == k) {
				__PV->next = _PV->next;
				_PV->next->prev = __PV;
				x = _PV->item;
				cout << "Элемент " << _PV->item << " успешно удален" << endl;
				delete _PV;
				break;
			}
			j++;
			__PV = _PV;
			_PV = _PV->next;
		}
	}
	_count--;
	if (_count == 0) {
		he->next = 0;
	}
}

/*SEARCH по Значению
ДО			//		ПОСЛЕ
*/
void searchByIndex_Value(list* he, list* ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс где искать:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			searchByIndex(he, ta, x);
		}
	}
}
void searchByIndex_Before(list* he, list* ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс где искать:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (x == 1) {
			cout << "До 1 индекса ничего нет" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			searchByIndex(he, ta, (x - 1));
		}
	}
}
void searchByIndex_After(list* he, list* ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс где искать:";
		cin >> x;
		system("cls");
		if (x <= 0 || x >= _count) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (x == _count) {
			cout << "После " << _count << " ничего нет " << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			searchByIndex(he, ta, (x + 1));
		}
	}
}

//SEARCH по Индексу
void searchByIndex(list* he, list* ta, int x) {
	int i = 1;
	list* _pv = new list;
	_pv = he->next;
	while (_pv != ta) {
		if (i == x) {
			cout << "Искомый элемент:" << endl;
			cout << x << "| " << _pv->item << endl;
		}
		i++;
		_pv = _pv->next;
	}
}

/*SEARCH по Значению
ДО			//		ПОСЛЕ
*/
void searchByValue_Before(list* he, list* ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите искоемый элемент:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Введенного элемента не существует." << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (check == 1) {
			cout << "Ничего нет до значения " << x << " \nПовторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			searchByIndex(he, ta, (check - 1));
		}
	}
}
void searchByValue_After(list* he, list* ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите искоемый элемент:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Введенного элемента не существует." << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (check == _count) {
			cout << "Ничего нет после значения " << x << " \nПовторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			searchByIndex(he, ta, (check + 1));
		}
	}
}

//SEARCH по Значению
int searchByValue(list* he, list* ta, int value) {
	int i = 1, j, kol = 0, k = 0, x;
	bool f = true;
	list* _pv = new list;
	_pv = he->next;
	while (_pv != ta) {
		if (_pv->item == value) {
			kol++;
			j = i;
		}
		i++;
		_pv = _pv->next;
	}
	if (kol == 0) {
		return 0;
	}
	else if (kol == 1) {
		return j;
	}
	else {
		while (f) {
			for (i = 0; i < kol; i++) {
				cout << i + 1 << "\t|" << value << endl;
			}
			cout << "Мы нашли " << kol << " элемента с введённым значение, выберите 1 из них:";
			cin >> x;
			system("cls");
			if (x <= 0 || x > kol) {
				cout << "Ошибка при вводе!!!" << endl;
			}
			else {
				f = false;
				i = 1;
				_pv = he->next;
				while (_pv != ta) {
					if (_pv->item == value) {
						j = i;
						k++;
					}
					if (k == x) {
						break;
					}
					i++;
					_pv = _pv->next;
				}
				return j;
			}
		}
	}
	return 0;
}

//SWAP по индексу
void swapByIndex_Before(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс:";
		cin >> x;
		system("cls");
		if (x <= 0 || x >= (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (x == 1) {
			cout << "До первого индекса ничего нет!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			swapMain(he, ta, x - 1);
		}
	}
}
void swapByIndex_After(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "Введите индекс:";
		cin >> x;
		system("cls");
		if (x <= 0 || x >= (_count + 1)) {
			cout << "Вы вышли за границы списка!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (x == _count) {
			cout << "После индекса " << _count << " ничего нет!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			swapMain(he, ta, x);
			f = false;
		}
	}
}
void swapByIndex(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "-----------------------------------------------" << endl;
		cout << "|            Меню swap'а по индексу:          |" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "|  1. Поменять местами до задаваемого индекса |" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "|2. Поменять местами после задаваемого индекса|" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "|                   3. Назад                  |" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << endl;
		cout << "Введите номер операции:";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: f = false; swapByIndex_Before(he, ta); break;
		case 2: f = false; swapByIndex_After(he, ta); break;
		case 3: f = false; break;
		default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
		}
	}
}

//SWAP по Значению
void swapByValue_Before(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите искоемый элемент:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Такого элемента нету!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (check == 1) {
			cout << "Элемент " << x << " находится на первом индексе и не может быть перестановлен!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			swapMain(he, ta, check - 1);
		}
	}
}
void swapByValue_After(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "Введите искоемый элемент:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "Такого элемента нету!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else if (check == _count) {
			cout << "Элемент " << x << " находится на последнем индексе и не может быть перестановлен!!!" << endl << "Повторите заново ввод!!!" << endl;
		}
		else {
			f = false;
			swapMain(he, ta, check);
		}
	}
}
void swapByValue(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "------------------------------------------------" << endl;
		cout << "|            Меню swap'а по значению:          |" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "|  1. Поменять местами до задаваемого значения |" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "|2. Поменять местами после задаваемого значения|" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "|                  3. Назад                    |" << endl;
		cout << "------------------------------------------------" << endl;
		cout << endl;
		cout << "Введите номер операции:";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: f = false; swapByValue_Before(he, ta); break;
		case 2: f = false; swapByValue_After(he, ta); break;
		case 3: f = false; break;
		default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
		}
	}
}

//SWAP
void swapMain(list*& he, list*& ta, int x) {
	list* _pv = new list;
	list* _PV = new list;
	int i = 1;
	_pv = he->next;
	while (_pv != ta) {
		if (i == x) {
			break;
		}
		i++;
		_pv = _pv->next;
	}
	_PV = _pv->next;
	_pv->prev->next = _PV;
	_PV->next->prev = _pv;
	_pv->next = _PV->next;
	_PV->prev = _pv->prev;
	_pv->prev = _PV;
	_PV->next = _pv;
	cout << "Были swap'нуты элементы " << _pv->item << " и " << _PV->item << endl;
}
