#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <iomanip>
#include "Windows.h"

using namespace std;

struct P_Queue {
	int value;
	int pos;

	P_Queue* _next;
};

void inition(P_Queue*& _Q);
void push(P_Queue*& _Q, int value, int p);
void output(P_Queue*& _Q);
void pop(P_Queue*& _Q);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	P_Queue* Q = new P_Queue;
	bool f = true;
	int choice, x, i;
	inition(Q);
	Q->_next = 0;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|             ������� ����:             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|    1.���������� �������� �� �������   |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|     2.�������� ��������� �������      |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|     3.�������� �������� �� �������    |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             4.�����                   |" << endl;
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
				cout << "������� ����� ������� ������ ��������:";
				cin >> x;
				cout << "������� ��������� ����� �������:";
				cin >> i;
				push(Q, x, i);
				break;
			case 2: output(Q); break;
			case 3: pop(Q); break;
			case 4: f = false; break;
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
	return 0;
}

void inition(P_Queue*& _Q) {
	P_Queue* Q = new P_Queue;
	int x; cin >> x;
	Q->_next = _Q;
	Q->value = x;
	Q->pos = 1;
	_Q = Q;
}

void push(P_Queue*& _Q, int value, int p) {
	P_Queue* q, * t;
	q = NULL;
	t = new P_Queue;
	t->value = value;
	t->pos = p;
	if (_Q == NULL || p < _Q->pos) {
		t->_next = _Q;
		_Q = t;
	}
	else {
		q = _Q;
		while (q->_next != NULL && q->_next->pos <= p) {
			q = q->_next;
		}
		t->_next = q->_next;
		q->_next = t;
	}
}

void output(P_Queue*& _Q) {
	P_Queue* Q;
	if (_Q == NULL) {
		cout << "������� �����!\n������ ����������!!!\n";
	}
	else {
		Q = _Q;
		cout << "\t------------------------------------" << endl;
		cout << "\t| ��������\t:\t���������� |\n";
		cout << "\t------------------------------------" << endl;
		while (Q != NULL) {
			cout << "\t|" << Q->value << "\t\t:\t" << Q->pos << "\t   |" << endl;
			cout << "\t------------------------------------" << endl;
			Q = Q->_next;
		}
	}
}

void pop(P_Queue*& _Q) {
	P_Queue* Q;
	if (_Q == NULL) {
		cout << "������� �����!\n������ �������!!!\n";
	}
	else {
		Q = _Q;
		cout << "������ �������: " << Q->value << endl;
		_Q = _Q->_next;
		delete Q;
	}
}