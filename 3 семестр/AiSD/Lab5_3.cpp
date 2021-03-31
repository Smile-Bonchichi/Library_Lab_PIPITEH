#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <iomanip>
#include "Windows.h"

using namespace std;

struct Queue {
	int _item;
	Queue* _next;
};

int x = 0, i = 1;

void push(Queue*& _Last, Queue*& _First, bool& id);
void output(Queue* _First);
void pop(Queue*& _Last, Queue*& _First, bool& id);
void seachByIndex(Queue* _First);
void searchByValue(Queue* _First);
int count(Queue* _First);
void concotination(Queue*& _Last1, Queue*& _First1, Queue*& _Last2, Queue*& _First2, int choice, bool& id);
void delQ(Queue*& _Last, Queue*& _First, bool& id);
void clearQ(Queue*& _Last, Queue*& _First, bool& id);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Queue* _last1 = NULL;
	Queue* _first1 = NULL;

	Queue* _last2 = NULL;
	Queue* _first2 = NULL;

	bool f1 = true, f2 = true;
	bool id1 = false, id2 = false;
	int choice;

	push(_last1, _first1, id1);
	push(_last2, _first2, id2);
	id1 = true;
	id2 = true;

	while (f1) {
		f2 = true;
		cout << "-----------------------------------------" << endl;
		cout << "|             ������� ����:             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          1. ���� ������� � 1          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          2. ���� ������� � 2          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|        3.������������ ��������        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               4.�����                 |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");

		if (cin.fail()) {
			cout << "������ ����������� ������!!!" << endl;
			break;
		}
		else {
			switch (choice) {
			case 1:
				while (f2) {
					cout << "-----------------------------------------" << endl;
					cout << "|        ������� ���� ������� � 1:      |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|         1.���������� ��������         |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|           2.����� ���������           |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|          3.�������� ��������          |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|     4.������ �������� �� �������      |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|      5.����� ������� �� ��������      |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|        6.���������� ���������         |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|         7.����������� �������         |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|           8.������� �������           |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|               9.�����                 |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << endl;
					cout << "������� ����� ��������:";
					cin >> choice;
					system("cls");

					if (cin.fail()) {
						cout << "������ ����������� ������!!!" << endl;
						break;
					}
					else {
						switch (choice) {
						case 1:	push(_last1, _first1, id1); id1 = true;  break;
						case 2: output(_first1); break;
						case 3: pop(_last1, _first1, id1); break;
						case 4: seachByIndex(_first1); break;
						case 5: searchByValue(_first1); break;
						case 6: count(_first1); break;
						case 7: delQ(_last1, _first1, id1);  break;
						case 8: clearQ(_last1, _first1, id1); break;
						case 9: f2 = false; break;
						default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
						}
					}
				}; break;

			case 2:
				while (f2) {
					cout << "-----------------------------------------" << endl;
					cout << "|        ������� ���� ������� � 2:      |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|         1.���������� ��������         |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|           2.����� ���������           |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|          3.�������� ��������          |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|     4.������ �������� �� �������      |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|      5.����� ������� �� ��������      |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|        6.���������� ���������         |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|         7.����������� �������         |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|           8.������� �������           |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|               9.�����                 |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << endl;
					cout << "������� ����� ��������:";
					cin >> choice;
					system("cls");

					if (cin.fail()) {
						cout << "������ ����������� ������!!!" << endl;
						break;
					}
					else {
						switch (choice) {
						case 1:	push(_last2, _first2, id2); id2 = true;  break;
						case 2: output(_first2); break;
						case 3: pop(_last2, _first2, id2); break;
						case 4: seachByIndex(_first2); break;
						case 5: searchByValue(_first2); break;
						case 6: count(_first2); break;
						case 7: delQ(_last2, _first2, id2);  break;
						case 8: clearQ(_last2, _first2, id2); break;
						case 9: f2 = false; break;
						default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
						}
					}
				}; break;

			case 3:
				cout << "-----------------------------------------" << endl;
				cout << "|             ������� ����:             |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|  1. ������ ������� + ������� �������  |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|  2. ������ ������� + ������ �������   |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|               3.�����                 |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << endl;
				cout << "������� ����� ��������:";
				cin >> choice;
				system("cls");

				if (cin.fail()) {
					cout << "������ ����������� ������!!!" << endl;
				}
				if (choice == 1) {
					concotination(_last1, _first1, _last2, _first2, choice, id2);
				}
				else {
					concotination(_last1, _first1, _last2, _first2, choice, id1);
				}; break;

			case 4: f1 = false; break;

			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}

	delete _last1;
	delete _first1;
	delete _last2;
	delete _first2;

	return 0;
}

void push(Queue*& _Last, Queue*& _First, bool& id) {
	if (id == false) {
		x = 0;
		Queue* q = new Queue;
		cout << "��������������� ������ �������:";
		cin >> x;
		system("cls");
		q->_item = x;
		q->_next = _Last;
		_First = q;
		_Last = _First;
		cout << "������ ������� �������������" << endl;
	}
	else {
		x = 0;
		Queue* q = new Queue;
		cout << "������� ����� �������:";
		cin >> x;
		q->_item = x;
		q->_next = NULL;
		_Last->_next = q;
		_Last = q;
		cout << "������� " << x << " ��������" << endl;
	}
}

void output(Queue* _First) {
	if (_First <= 0) {
		cout << "������� ����!!!" << endl << "������ ����������" << endl;
	}
	else {
		x = 0;
		i = 1;
		int k = 0;
		Queue* q = new Queue;
		q = _First;
		while (q != NULL) {
			x = q->_item;
			cout << "Queue[" << i << "] = " << x << endl;
			i++;
			k++;
			q = q->_next;
		}
	}
}

void pop(Queue*& _Last, Queue*& _First, bool& id) {
	if (_First <= 0) {
		cout << "������� ����!!!" << endl << "������ �������" << endl;
	}
	else {
		Queue* q = new Queue;
		q = _First;
		_First = _First->_next;
		if (q->_next == NULL) {
			_Last = NULL;
		}
		cout << "������� " << q->_item << " ������" << endl;
		delete q;
	}
	if (_First == 0) {
		id = false;
	}
}

void seachByIndex(Queue* _First) {
	if (_First <= 0) {
		cout << "������� ����!!!" << endl << "������ ������" << endl;
	}
	else {
		x = 0;
		i = 1;
		Queue* q = new Queue;
		q = _First;
		cout << "������� ������ ��������� ��������:";
		cin >> x;
		if (x <= 0) {
			cout << "������ ������� ����!!!" << endl;
		}
		else {
			while (q != NULL) {
				if (x == i) {
					cout << "Queue[" << i << "] = " << q->_item << endl;
				}
				q = q->_next;
				i++;
			}
		}
	}
}

void searchByValue(Queue* _First) {
	if (_First <= 0) {
		cout << "������� ����!!!" << endl << "������ ������" << endl;
	}
	else {
		x = 0;
		i = 1;
		Queue* q = new Queue;
		bool k = false;
		q = _First;
		cout << "������� �������� �������:";
		cin >> x;
		while (q != NULL) {
			if (q->_item == x) {
				k = true;
				cout << "Queue[" << i << "] = " << x << endl;
			}
			q = q->_next;
			i++;
		}
		if (k == false) {
			cout << "������� ������� �� ������!" << endl;
		}
	}
}

int count(Queue* _First) {
	if (_First <= 0) {
		cout << "������� ����!!!" << endl;
		return;
	}
	else {
		i = 0;
		Queue* q = _First;
		while (q != NULL) {
			q = q->_next;
			i++;
		}
		cout << "��� - �� ��������� ������� = " << i << endl;
		return i;
	}
}

void concotination(Queue*& _Last1, Queue*& _First1, Queue*& _Last2, Queue*& _First2, int choice, bool& id)
{
	if (_First1 <= 0) {
		cout << "������� � 1 ����!!!" << endl;
		return;
	}
	if (_First2 <= 0) {
		cout << "������� � 2 ����!!!" << endl;
		return;
	}
	if (choice == 1) {
		_Last1->_next = _First2;
		_Last1 = _Last2;
		_Last2 = NULL;
		_First2 = NULL;
		id = false;
	}
	else if (choice == 2) {
		_Last2->_next = _First1;
		_Last2 = _Last1;
		_Last1 = NULL;
		_First1 = NULL;
		id = false;
	}
	else {
		return;
	}
}

void delQ(Queue*& _Last, Queue*& _First, bool& id) {
	if (_First <= 0) {
		cout << "������� ����!!!" << endl << "������ ����������" << endl;
	}
	else {
		Queue* q = new Queue;
		while (_First != 0) {
			q = _First;
			_First = _First->_next;
			delete q;
		}
		_Last = NULL;
		id = false;
		cout << "������� ����������" << endl;
	}
}

void clearQ(Queue*& _Last, Queue*& _First, bool& id) {
	if (_First <= 0) {
		cout << "������� ����!!!" << endl << "������ �������" << endl;
	}
	else {
		Queue* q = new Queue;
		while (_First != 0) {
			q = _First;
			_First = _First->_next;
			delete q;
		}
		_Last = NULL;
		id = false;
		cout << "������� �������" << endl;
	}
}