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
		cout << "|             ������� ����:             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         1. ���������� ��������        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          2. ����� ���������           |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|      3. ����� �������� ���������      |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          4. �������� ��������         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|            5. ����� ��������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           6. �������� �������         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         7. ������������� ������       |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           8. �������� ������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|                9. �����               |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
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
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
	return 0;
}

void inition(list*& he, list*& ta) {
	int x;
	cout << "��������������� ������ ������� ��� ������:";
	cin >> x;
	system("cls");
	list* _pv = new list;
	_pv->item = x;
	he->next = _pv;
	_pv->next = ta;
	_pv->prev = he;
	ta->prev = _pv;
	cout << "������ ������� �� ��������� = " << x << " ���������������\n" << endl;
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
			cout << "|            ���� ����������:           |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|       1. ���������� �� �������        |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   2. ���������� �� ���������� ������� |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "| 3. ���������� ����� ���������� �������|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|  4. ���������� �� ���������� �������� |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|5. ���������� ����� ���������� ��������|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               6. �����                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "������� ����� ��������:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; pushByIndex(he, ta); break;
			case 2: f = false; pushByIndex_Before(he, ta); break;
			case 3: f = false; pushByIndex_After(he, ta); break;
			case 4: f = false; pushByValue_Before(he, ta); break;
			case 5: f = false; pushByValue_After(he, ta); break;
			case 6: f = false; break;
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
}

void output(list* he, list* ta) {
	if (_count <= 0) {
		cout << "���� ����, ������ ��������!!!" << endl;
	}
	else {
		int i = 1;
		list* _pv = he->next;
		cout << "------------------------------------" << endl;
		cout << "|\t��������\t:   ������ |\n";
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
		cout << "���� ����, ������ ��������!!!" << endl;
	}
	else {
		int i = _count;
		list* _pv = ta->prev;
		cout << "------------------------------------" << endl;
		cout << "|\t��������\t:   ������ |\n";
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
		cout << "���� ����, ������ �������!!!" << endl;
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|              ���� ��������:           |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|         1. �������� �� �������        |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   2. �������� �� ���������� �������   |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "| 3. �������� ����� ���������� �������  |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   4. �������� �� ���������� ��������  |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "| 5. �������� ����� ���������� �������� |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|         6. �������� �� ��������       |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               7. �����                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "������� ����� ��������:";
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
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
}

void search(list* he, list* ta) {
	if (_count <= 0) {
		cout << "���� ����, ������ ������!!!" << endl;
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|              ���� ������:             |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|          1. ����� �� �������          |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|     2. ����� �� ���������� �������    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|   3. ����� ����� ���������� �������   |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|    4. ����� �� ���������� ��������    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|  5. ����� ����� ���������� ��������   |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               6. �����                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "������� ����� ��������:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; searchByIndex_Value(he, ta); break;
			case 2: f = false; searchByIndex_Before(he, ta); break;
			case 3: f = false; searchByIndex_After(he, ta); break;
			case 4: f = false; searchByValue_Before(he, ta); break;
			case 5: f = false; searchByValue_After(he, ta); break;
			case 6: f = false; break;
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
}

void swapLI(list*& he, list*& ta) {
	if (_count <= 0) {
		cout << "���� ����, ������ ������ �������!!!" << endl;
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|              ���� swap'�:             |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|     1. �������� ������� �� �������    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|    2. �������� ������� �� ��������    |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               3. �����                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "������� ����� ��������:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; swapByIndex(he, ta); break;
			case 2: f = false; swapByValue(he, ta); break;
			case 3: f = false; break;
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
}

void sort(list*& he, list*& ta) {
	if (_count <= 0) {
		cout << "���� ����, ������ �����������!!!" << endl;
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
		cout << "���� ����, ������ �������!!!" << endl;
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
		cout << "���� ������� ������!!!" << endl;
	}
}

/*PUSH �� �������
��			//		�����
*/
void pushByIndex(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "������� ������ ���� ��������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, x);
			cout << " � ������ = " << x << endl;
		}
	}
}
void pushByIndex_Before(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "������� ������ ���� ��������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (x == 1) {
			f = false;
			push(he, ta, x);
			cout << " � ������ = " << x << endl;
		}
		else {
			f = false;
			push(he, ta, x - 1);
			cout << " � ������ = " << x << endl;
		}
	}
}
void pushByIndex_After(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "������� ������ ���� ��������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > _count) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, x + 1);
			cout << " � ������ = " << x << endl;
		}
	}
}

/*PUSH �� ��������
��			//		�����
*/

void pushByValue_Before(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "������� �������� �������� �� �������� ��������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, check);
			cout << " �� �������� " << x << endl;
		}
	}
}
void pushByValue_After(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "������� �������� �������� �� �������� ��������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
		}
		else {
			f = false;
			push(he, ta, check + 1);
			cout << " ����� �������� " << x << endl;
		}
	}
}

//PUSH
void push(list*& he, list*& ta, int k) {
	list* _pv = new list;
	int x;
	cout << "������� ����� ������� ��� ����������:";
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
	cout << "������� " << x << " ������� ��������";
}

/*POP �� �������
��			//		�����
*/
void popByIndex(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "������� ������ ������ �������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "������� ������ ������ �������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (x == 1) {
			cout << "�� 1 ������� ������ ���" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "������� ������ ������ �������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (x == _count) {
			cout << "����� " << _count << " ������ ��� " << endl << "��������� ������ ����!!!" << endl;
		}
		else {
			f = false;
			pop(he, ta, x + 1);
		}
	}
}

/*POP �� ��������
��			//		�����
*/
void popByValue_Before(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "������� �������� �������� �� �������� �������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
		}
		else if (check == 1) {
			cout << "������ ������� �� " << x << " \n������ ��� ��� ������ ���!!!" << endl;
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
		cout << "������� �������� �������� �� �������� �������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
		}
		else if (check == _count) {
			cout << "������ ������� ����� " << x << " \n������ ��� ��� ������ ���!!!" << endl;
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
		cout << "������� �������� �������� �� �������� �������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
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
		cout << "������� " << _pv->item << " ������� ������" << endl;
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
		cout << "������� " << _PV->item << " ������� ������" << endl;
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
				cout << "������� " << _PV->item << " ������� ������" << endl;
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

/*SEARCH �� ��������
��			//		�����
*/
void searchByIndex_Value(list* he, list* ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "������� ������ ��� ������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "������� ������ ��� ������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (x == 1) {
			cout << "�� 1 ������� ������ ���" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "������� ������ ��� ������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x >= _count) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (x == _count) {
			cout << "����� " << _count << " ������ ��� " << endl << "��������� ������ ����!!!" << endl;
		}
		else {
			f = false;
			searchByIndex(he, ta, (x + 1));
		}
	}
}

//SEARCH �� �������
void searchByIndex(list* he, list* ta, int x) {
	int i = 1;
	list* _pv = new list;
	_pv = he->next;
	while (_pv != ta) {
		if (i == x) {
			cout << "������� �������:" << endl;
			cout << x << "| " << _pv->item << endl;
		}
		i++;
		_pv = _pv->next;
	}
}

/*SEARCH �� ��������
��			//		�����
*/
void searchByValue_Before(list* he, list* ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "������� �������� �������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
		}
		else if (check == 1) {
			cout << "������ ��� �� �������� " << x << " \n��������� ������ ����!!!" << endl;
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
		cout << "������� �������� �������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
		}
		else if (check == _count) {
			cout << "������ ��� ����� �������� " << x << " \n��������� ������ ����!!!" << endl;
		}
		else {
			f = false;
			searchByIndex(he, ta, (check + 1));
		}
	}
}

//SEARCH �� ��������
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
			cout << "�� ����� " << kol << " �������� � �������� ��������, �������� 1 �� ���:";
			cin >> x;
			system("cls");
			if (x <= 0 || x > kol) {
				cout << "������ ��� �����!!!" << endl;
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

//SWAP �� �������
void swapByIndex_Before(list*& he, list*& ta) {
	bool f = true;
	int x;
	while (f) {
		cout << "������� ������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x >= (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (x == 1) {
			cout << "�� ������� ������� ������ ���!!!" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "������� ������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x >= (_count + 1)) {
			cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (x == _count) {
			cout << "����� ������� " << _count << " ������ ���!!!" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "|            ���� swap'� �� �������:          |" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "|  1. �������� ������� �� ����������� ������� |" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "|2. �������� ������� ����� ����������� �������|" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "|                   3. �����                  |" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: f = false; swapByIndex_Before(he, ta); break;
		case 2: f = false; swapByIndex_After(he, ta); break;
		case 3: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

//SWAP �� ��������
void swapByValue_Before(list*& he, list*& ta) {
	bool f = true;
	int x, check;
	while (f) {
		cout << "������� �������� �������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "������ �������� ����!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (check == 1) {
			cout << "������� " << x << " ��������� �� ������ ������� � �� ����� ���� �������������!!!" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "������� �������� �������:";
		cin >> x;
		system("cls");
		check = searchByValue(he, ta, x);
		if (check == 0) {
			cout << "������ �������� ����!!!" << endl << "��������� ������ ����!!!" << endl;
		}
		else if (check == _count) {
			cout << "������� " << x << " ��������� �� ��������� ������� � �� ����� ���� �������������!!!" << endl << "��������� ������ ����!!!" << endl;
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
		cout << "|            ���� swap'� �� ��������:          |" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "|  1. �������� ������� �� ����������� �������� |" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "|2. �������� ������� ����� ����������� ��������|" << endl;
		cout << "------------------------------------------------" << endl;
		cout << "|                  3. �����                    |" << endl;
		cout << "------------------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> x;
		system("cls");
		switch (x) {
		case 1: f = false; swapByValue_Before(he, ta); break;
		case 2: f = false; swapByValue_After(he, ta); break;
		case 3: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
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
	cout << "���� swap'���� �������� " << _pv->item << " � " << _PV->item << endl;
}
