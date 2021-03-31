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
int _count = 0;
bool id = false, ifround = false;

void push(Queue*& _Last, Queue*& _First);
void output(Queue* _First);
void pop(Queue*& _Last, Queue*& _First);
void seachByIndex(Queue* _First);
void searchByValue(Queue* _First);
int count(Queue* _First);
void round(Queue*& _Last, Queue*& _First);
void delQ(Queue*& _Last, Queue*& _First);
void clearQ(Queue*& _Last, Queue*& _First);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Queue* _last = NULL;
	Queue* _first = NULL;

	bool f = true;
	int choice;

	push(_last, _first);
	id = true;

	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|             ������� ����:             |" << endl;
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
		cout << "|        7.������������ �������         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         8.����������� �������         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           9.������� �������           |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               10.�����                |" << endl;
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
			case 1:	push(_last, _first); id = true;  break;
			case 2: output(_first); break;
			case 3: pop(_last, _first); break;
			case 4: seachByIndex(_first); break;
			case 5: searchByValue(_first); break;
			case 6: count(_first); break;
			case 7: round(_first, _last); break;
			case 8: delQ(_last, _first);  break;
			case 9: clearQ(_last, _first); break;
			case 10: f = false; break;
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
	delete _last;
	delete _first;
	return 0;
}

void push(Queue*& _Last, Queue*& _First) {
	if (ifround == true) {
		cout << "� ��� ������������ �������!!!" << endl << "������ ���������" << endl;
	}
	else {
		if (id == false) {
			_count++;
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
			_count++;
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
}

void output(Queue* _First) {
	if (ifround == false) {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl << "������ ����������" << endl;
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
	else {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl << "������ ����������" << endl;
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
				if (i == _count + 1) {
					i = 1;
					cout << endl;
				}
				if (k == (_count * 5)) {
					break;
				}
			}
		}
	}
}

void pop(Queue*& _Last, Queue*& _First) {
	if (ifround == true) {
		cout << "� ��� ������������ �������!!!" << endl << "������ �������" << endl;
	}
	else {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl << "������ �������" << endl;
		}
		else {
			_count--;
			Queue* q = new Queue;
			q = _First;
			_First = _First->_next;
			if (q->_next == NULL) {
				_Last = NULL;
			}
			cout << "������� " << q->_item << " ������" << endl;
			delete q;
		}
		if (_count == 0) {
			id = false;
		}
	}
}

void seachByIndex(Queue* _First) {
	if (ifround == true) {
		cout << "� ��� ������������ �������!!!" << endl << "������ ������ �� �������" << endl;
	}
	else {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl << "������ ������" << endl;
		}
		else {
			x = 0;
			i = 1;
			Queue* q = new Queue;
			q = _First;
			cout << "������� ������ ��������� ��������:";
			cin >> x;
			if (x <= 0 || x > _count) {
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
}

void searchByValue(Queue* _First) {
	if (ifround == true) {
		cout << "� ��� ������������ �������!!!" << endl << "������ ������ �� ��������" << endl;
	}
	else {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl << "������ ������" << endl;
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
}

int count(Queue* _First) {
	if (ifround == true) {
		cout << "� ��� ������������ �������!!!" << endl << "������ ������ ��� - �� �������" << endl;
		return 0;
	}
	else {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl;
			return 0;
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
}

void round(Queue*& _Last, Queue*& _First) {
	if (_count <= 0) {
		cout << "���� ����!!!" << endl;
	}
	if (ifround == false) {
		_Last->_next = _First;
		ifround = true;
		cout << "Last->next: " << _Last->_next << endl;
		cout << "First: " << _First << endl;
	}
	else {
		_Last->_next = NULL;
		ifround = false;
	}
	if (ifround == true) {
		cout << "������� ������������" << endl;
	}
	else {
		cout << "������� ������������" << endl;
	}
}

void delQ(Queue*& _Last, Queue*& _First) {
	if (ifround == true) {
		cout << "� ��� ������������ �������!!!" << endl << "������ ����������" << endl;
	}
	else {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl << "������ ����������" << endl;
		}
		else {
			Queue* q = new Queue;
			while (_First != 0) {
				q = _First;
				_First = _First->_next;
				delete q;
			}
			_Last = NULL;
			_count = 0;
			id = false;
			cout << "������� ����������" << endl;
		}
	}
}

void clearQ(Queue*& _Last, Queue*& _First) {
	if (ifround == true) {
		cout << "� ��� ������������ �������!!!" << endl << "������ ��������" << endl;
	}
	else {
		if (_count <= 0) {
			cout << "���� ����!!!" << endl << "������ �������" << endl;
		}
		else {
			Queue* q = new Queue;
			while (_First != 0) {
				q = _First;
				_First = _First->_next;
				delete q;
			}
			_Last = NULL;
			_count = 0;
			id = false;
			cout << "������� �������" << endl;
		}
	}
}