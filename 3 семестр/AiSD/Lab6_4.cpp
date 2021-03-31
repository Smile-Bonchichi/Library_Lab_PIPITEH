#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <iomanip>
#include "Windows.h"

using namespace std;

struct list {
	string item;
	list* next;
};

int _count = 0, _check;
bool ifcheck = false;

void inition(list*& li, string x);
void push(list*& li);
void output(list* li);
void check(list*& li);
int search(list* li);
int search_A_a(list* li);

int main() {
	setlocale(0, "rus");
	list* _List = new list;

	bool f = true;
	int choice, k = 0;

	_List->item = "#4";
	_List->next = 0;

	string x;
	cout << "������� ������: ";
	getline(cin, x);
	inition(_List, x);
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|             ������� ����:             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         1. ���������� ��������        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           2. ����� ���������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           3. �������� ������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|                4. �����               |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: push(_List); break;
		case 2:	output(_List); break;
		case 3: check(_List); break;
		case 4: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
	return 0;
}

void inition(list*& li, string x) {
	if (x[0] == 'A') {
		ifcheck = true;
		_check = 1;
	}
	else if (x[0] == 'a') {
		ifcheck = true;
		_check = 2;
	}
	for (int i = 0; i < x.length(); i++) {
		if (_count == 0) {
			list* _li = new list;
			_li->item = x[i];
			li->next = _li;
			li->next->next = NULL;
			_count++;
		}
		else {
			list* _li = new list;
			_li->item = x[i];
			list* _LI = new list;
			_LI = li->next;
			while (_LI->next != 0) {
				_LI = _LI->next;
			}
			_LI->next = _li;
			_li->next = 0;
			_count++;
		}
	}
}

void push(list*& li) {
	char x;
	cout << "������� ����� ������� ��� ����������:";
	cin >> x;
	list* _li = new list;
	_li->item = x;
	list* _LI = new list;
	_LI = li->next;
	while (_LI->next != 0) {
		_LI = _LI->next;
	}
	_LI->next = _li;
	_li->next = 0;
	cout << "������� = " << x << " ��������\n" << endl;
	_count++;
}

void output(list* li) {
	if (_count <= 0) {
		cout << "���� ����, ������ ��������!!!" << endl;
	}
	else {
		int i = 1;
		list* _li = li->next;
		cout << "------------------------------------" << endl;
		cout << "|\t��������\t:   ������ |\n";
		cout << "------------------------------------" << endl;
		while (_li != 0) {
			cout << "|\t" << _li->item << "\t\t:     " << i << "\t   |" << endl;
			cout << "------------------------------------" << endl;
			_li = _li->next;
			i++;
		}
	}
}

int search_A_a(list* li) {
	int kol = 0, i = 1, j = 0;
	list* _li = new list;
	_li = li->next;
	while (_li != NULL) {
		if (_li->item == "A" || _li->item == "a") {
			kol++;
			j = i;
		}
		i++;
		_li = _li->next;
	}
	if (kol == 0) {
		return 0;
	}
	else if (kol == 1) {
		return j;
	}
	else {
		while (_li != 0) {
			if (_li->item == "A" || _li->item == "a") {
				j = i;
			}
			_li = _li->next;
		}
		return j;
	}
	return 0;
}

int search(list* li) {
	list* _li = new list;
	int k = 0;
	_li = li->next;
	while (_li != NULL) {
		if (_li->item == "A" || _li->item == "a") {
			k++;
		}
		_li = _li->next;
	}
	return k;
}

void check(list*& li) {
	if (ifcheck == true) {
		list* _li = new list;
		if (_check == 1) {
			_li->item = "A";
			cout << "� ������ ������ ����� A �� - �� ����� � ����� ��������� A!!!" << endl;
		}
		else if (_check == 2) {
			_li->item = "a";
			cout << "� ������ ������ ����� a �� - �� ����� � ����� ��������� a!!!" << endl;
		}
		list* _LI = new list;
		_LI = li->next;
		while (_LI->next != 0) {
			_LI = _LI->next;
		}
		_LI->next = _li;
		_li->next = 0;
	}
	else {
		int c, k;
		string trash;
		k = search(li);
		for (int l = 0; l < k; l++) {
			c = search_A_a(li);
			if (c == 0) {
				cout << "� ������ ���� ���� <<A>> ��� <<�>>!!!" << endl;
			}
			else if (c == _count) {
				list* _li = new list;
				list* _LI = new list;
				_li = li;
				while (_li->next != 0) {
					_LI = _li;
					_li = _li->next;
				}
				trash = _li->item;
				cout << "������ ������� = " << _li->item << endl;
				delete _li;
				_LI->next = 0;
			}
			else {
				list* _li = new list;
				list* _LI = new list;
				int j = 1;
				_LI = li->next;
				while (_LI != 0) {
					if (j == c) {
						_li->next = _LI->next;
						trash = _LI->item;
						cout << "������ ������� = " << _LI->item << endl;
						delete _LI;
						break;
					}
					j++;
					_li = _LI;
					_LI = _LI->next;
				}
			}
			_count--;
		}
	}
}