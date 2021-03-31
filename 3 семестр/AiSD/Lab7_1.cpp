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

void inition(list* he, list* ta);
void inition_count0(list*& he, list*& ta, int& _count);

void listnum1(list* he, list* ta, int& _count);
void listnum2(list* he, list* ta, int& _count);

void Concon(list* he1, list* ta1, list* he2, list* ta2, int& count1, int& count2);
void con(list* he1, list* ta1, list* he2, list* ta2);

void add(list*& he, list*& ta, int& _count);

void output(list* he, list* ta, int& _count);
void output_back(list* he, list* ta, int& _count);

void deleLI(list*& he, list*& ta, int& _count);

void search(list*& he, list*& ta, int& _count);

void swapLI(list*& he, list*& ta, int& _count);

void sort(list*& he, list*& ta, int& _count);

void clear(list*& he, list*& ta, int& _count);

void push(list*& he, list*& ta, int k, int& _count);
void pop(list*& he, list*& ta, int k, int& _count);

void searchByIndex(list* he, list* ta, int x, int& _count);
int searchByValue(list* he, list* ta, int value, int& _count);

void swapMain(list*& he, list*& ta, int x, int& _count);

void swapByIndex(list*& he, list*& ta, int& _count);
void swapByValue(list*& he, list*& ta, int& _count);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 2;

	list* _head = new list[n];
	list* _tail = new list[n];

	bool f = true;
	int choice, _count1 = 1, _count2 = 1;

	for (int i = 0; i < n; i++) {
		_head[i].item = 0;
		_head[i].next = NULL;
		_head[i].prev = NULL;

		_tail[i].item = 0;
		_tail[i].next = NULL;
		_tail[i].prev = NULL;

		inition(&_head[i], &_tail[i]);
	}

	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|              ������� ����:            |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             1. ������ � 1             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             2. ������ � 2             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           3. �������������            |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               4. �����                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: listnum1(&_head[0], &_tail[0], _count1); break;
		case 2: listnum2(&_head[1], &_tail[1], _count2); break;
		case 3: Concon(&_head[0], &_tail[0], &_head[1], &_tail[1], _count1, _count2); break;
		case 4: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
	return 0;
}

void listnum1(list* he, list* ta, int& _count) {
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|            ������� ����� � 1:         |" << endl;
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
		case 1: add(he, ta, _count); break;
		case 2:	output(he, ta, _count); break;
		case 3:	output_back(he, ta, _count); break;
		case 4: deleLI(he, ta, _count); break;
		case 5: search(he, ta, _count); break;
		case 6: swapLI(he, ta, _count); break;
		case 7: sort(he, ta, _count); break;
		case 8:	clear(he, ta, _count); break;
		case 9: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

void listnum2(list* he, list* ta, int& _count) {
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|            ������� ����� � 2:         |" << endl;
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
		case 1: add(he, ta, _count); break;
		case 2:	output(he, ta, _count); break;
		case 3:	output_back(he, ta, _count); break;
		case 4: deleLI(he, ta, _count); break;
		case 5: search(he, ta, _count); break;
		case 6: swapLI(he, ta, _count); break;
		case 7: sort(he, ta, _count); break;
		case 8:	clear(he, ta, _count); break;
		case 9: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

void Concon(list* he1, list* ta1, list* he2, list* ta2, int& count1, int& count2) {
	bool f = true;
	int choice;
	if (count1 == 0 && count2 == 0) {
		cout << "��� ������ �� ��������������!!!" << endl;
	}
	else if (count1 == 0) {
		cout << "������ � 1 �� �������������!!!" << endl;
	}
	else if (count2 == 0) {
		cout << "������ � 2 �� �������������!!!" << endl;
	}
	else {
		while (f) {
			cout << "-----------------------------------------" << endl;
			cout << "|   ���� ������������ �� ���� �������:  |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               1. 1 + 2                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               2. 2 + 1                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               3. �����                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "������� ����� ��������:";
			cin >> choice;
			system("cls");
			switch (choice) {
			case 1: con(he1, ta1, he2, ta2); cout << "� 2 ������ ����������� � � 1, � � 2 ������ ����!!!" << endl; count1 += count2; count2 = 0; f = false; break;
			case 2: con(he2, ta2, he1, ta1); cout << "� 1 ������ ����������� � � 2, � � 1 ������ ����!!!" << endl; count2 += count1; count1 = 0; f = false; break;
			case 3: f = false; break;
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
}

void con(list* he1, list* ta1, list* he2, list* ta2) {
	ta1->prev->next = he2->next;
	he2->next->prev = ta1->prev;
	he2->next = 0;
	ta2->prev->next = ta1;
	ta1->prev = ta2->prev;
	ta2->prev = 0;
}

void add(list*& he, list*& ta, int& _count) {
	if (_count == 0) {
		inition_count0(he, ta, _count);
	}
	else {
		bool f = true, f1 = true;
		int x, check;
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
			if (x == 1) {
				while (f1) {
					cout << "������� ������ ���� ��������:";
					cin >> x;
					system("cls");
					if (x <= 0 || x > (_count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						push(he, ta, x, _count);
						cout << " � ������ = " << x << endl;
					}
				}
			}
			else if (x == 2) {
				while (f1) {
					cout << "������� ������ ��� ������:";
					cin >> x;
					system("cls");
					if (x <= 0 || x > (_count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else if (x == 1) {
						f1 = false;
						f = false;
						push(he, ta, x, _count);
						cout << " �� ������� " << x << endl;
					}
					else {
						f1 = false;
						f = false;
						push(he, ta, x - 1, _count);
						cout << " �� ������� " << x << endl;
					}
				}
			}
			else if (x == 3) {
				while (f1) {
					cout << "������� ������ ��� ������:";
					cin >> x;
					system("cls");
					if (x <= 0 || x >= (_count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						push(he, ta, x + 1, _count);
						cout << " ����� ������� " << x << endl;
					}
				}
			}
			else if (x == 4) {
				if (_count <= 0) {
					cout << "���� ����, ������ �������� �� ��� �����!!!" << endl;
				}
				else {
					while (f1) {
						cout << "������� �������� �������� �� �������� ��������:";
						cin >> x;
						system("cls");
						check = searchByValue(he, ta, x, _count);
						if (check == 0) {
							cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
						}
						else {
							f1 = false;
							f = false;
							push(he, ta, check, _count);
							cout << " �� �������� " << x << endl;
						}
					}
				}
			}
			else if (x == 5) {
				if (_count <= 0) {
					cout << "���� ����, ������ �������� �� ��� �����!!!" << endl;
				}
				else {
					while (f1) {
						cout << "������� �������� �������� ����� �������� ��������:";
						cin >> x;
						system("cls");
						check = searchByValue(he, ta, x, _count);
						if (check == 0) {
							cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
						}
						else {
							f1 = false;
							f = false;
							push(he, ta, (check + 1), _count);
							cout << " ����� �������� " << x << endl;
						}
					}
				}
			}
			else if (x == 6) {
				f = false;
			}
			else {
				cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl;
			}
		}
	}
}

void output(list* he, list* ta, int& _count) {
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
void output_back(list* he, list* ta, int& _count) {
	if (_count <= 0) {
		cout << "���� ����, ������ ��������!!!" << endl;
	}
	else {
		int i = _count;
		list* _pv;
		_pv = ta->prev;
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

void deleLI(list*& he, list*& ta, int& _count) {
	if (_count <= 0) {
		cout << "���� ����, ������ �������!!!" << endl;
	}
	else {
		bool f = true, f1 = true;
		int x, check;
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
			if (x == 1) {
				while (f1) {
					cout << "������� ������ ������ �������:";
					cin >> x;
					system("cls");
					if (x <= 0 || x > (_count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(he, ta, x, _count);
					}
				}
			}
			else if (x == 2) {
				while (f1) {
					cout << "������� ������ ������ �������:";
					cin >> x;
					system("cls");
					if (x <= 1 || x > (_count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(he, ta, x - 1, _count);
					}
				}
			}
			else if (x == 3) {
				while (f1) {
					cout << "������� ������ ������ �������:";
					cin >> x;
					system("cls");
					if (x <= 0 || x >= (_count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(he, ta, x + 1, _count);
					}
				}
			}
			else if (x == 4) {
				while (f1) {
					cout << "������� �������� �������� �� �������� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(he, ta, x, _count);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						if (check == 1) {
							cout << "������ ������� �� " << x << " \n������ ��� ��� ������ ���!!!" << endl;
						}
						else {
							pop(he, ta, (check - 1), _count);
						}
					}
				}
			}
			else if (x == 5) {
				while (f1) {
					cout << "������� �������� �������� ����� �������� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(he, ta, x, _count);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						if (check == _count) {
							cout << "������ ������� ����� " << x << " \n������ ��� ��� ������ ���!!!" << endl;
						}
						else {
							pop(he, ta, (check + 1), _count);
						}
					}
				}
			}
			else if (x == 6) {
				while (f1) {
					cout << "������� �������� �������� ������� ����� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(he, ta, x, _count);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(he, ta, check, _count);
					}
				}
			}
			else if (x == 7) {
				f = false;
			}
			else {
				cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl;
			}
		}
	}
}

void search(list*& he, list*& ta, int& _count) {
	bool f = true, f1 = true;
	int x, check;
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
		if (x == 1) {
			while (f1) {
				cout << "������� ������ ��� ������:";
				cin >> x;
				system("cls");
				if (x <= 0 || x > (_count + 1)) {
					cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f1 = false;
					f = false;
					searchByIndex(he, ta, x, _count);
				}
			}
		}
		else if (x == 2) {
			while (f1) {
				cout << "������� ������ ��� ������:";
				cin >> x;
				system("cls");
				if (x <= 0 || x > (_count + 1)) {
					cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f1 = false;
					f = false;
					searchByIndex(he, ta, (x - 1), _count);
				}
			}
		}
		else if (x == 3) {
			while (f1) {
				cout << "������� ������ ��� ������:";
				cin >> x;
				system("cls");
				if (x <= 0 || x > (_count + 1)) {
					cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f1 = false;
					f = false;
					searchByIndex(he, ta, (x + 1), _count);
				}
			}
		}
		else if (x == 4) {
			while (f1) {
				cout << "������� �������� �������:";
				cin >> x;
				system("cls");
				check = searchByValue(he, ta, x, _count);
				if (check == 0) {
					cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f1 = false;
					f = false;
					if (check == 1) {
						cout << "������ ������� �� " << x << " \n������ ��� ��� ������ ���!!!" << endl;
					}
					else {
						searchByIndex(he, ta, (check - 1), _count);
					}
				}
			}
		}
		else if (x == 5) {
			while (f1) {
				cout << "������� �������� �������:";
				cin >> x;
				system("cls");
				check = searchByValue(he, ta, x, _count);
				if (check == 0) {
					cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f1 = false;
					f = false;
					if (check == 1) {
						cout << "������ ������� �� " << x << " \n������ ��� ��� ������ ���!!!" << endl;
					}
					else {
						searchByIndex(he, ta, (check + 1), _count);
					}
				}
			}
		}
		else if (x == 6) {
			f = false;
		}
		else {
			cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl;
		}
	}
}

void swapLI(list*& he, list*& ta, int& _count) {
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
		case 1: f = false; swapByIndex(he, ta, _count); break;
		case 2: f = false; swapByValue(he, ta, _count); break;
		case 3: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

void sort(list*& he, list*& ta, int& _count) {
	if (_count == 0) {
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

void clear(list*& he, list*& ta, int& _count) {
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

void inition(list* he, list* ta) {
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
}
void inition_count0(list*& he, list*& ta, int& _count) {
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
	_count++;
	cout << "������ ������� �� ��������� = " << x << " ���������������\n" << endl;
}

void searchByIndex(list* he, list* ta, int x, int& _count) {
	if (_count <= 0) {
		cout << "���� ����, ������ ������!!!" << endl;
	}
	else {
		int i = 1;
		bool f = true;
		list* _pv = new list;
		while (f) {
			system("cls");
			if (x <= 0 || x > (_count + 1)) {
				cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
			}
			else {
				f = false;
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
		}
	}
}
int searchByValue(list* he, list* ta, int value, int& _count) {
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

void push(list*& he, list*& ta, int k, int& _count) {
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
void pop(list*& he, list*& ta, int k, int& _count) {
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

void swapMain(list*& he, list*& ta, int x, int& _count) {
	if (_count == 0) {
		cout << "���� ����, ������ ������ �������!!!" << endl;
	}
	else {
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
}
void swapByIndex(list*& he, list*& ta, int& _count) {
	bool f = true, f2 = true;
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
		case 1:
			f = false;
			while (f2) {
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
					swapMain(he, ta, x - 1, _count);
					f2 = false;
				}
			};  break;
		case 2:
			f = false;
			while (f2) {
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
					swapMain(he, ta, x, _count);
					f2 = false;
				}
			}; break;
		case 3: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}
void swapByValue(list*& he, list*& ta, int& _count) {
	bool f = true, f2 = true;
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
		case 1:
			f = false;
			while (f2) {
				cout << "������� �������� �������:";
				cin >> x;
				system("cls");
				check = searchByValue(he, ta, x, _count);
				if (check == 0) {
					cout << "������ �������� ����!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else if (check == 1) {
					cout << "������� " << x << " ��������� �� ������ ������� � �� ����� ���� �������������!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f2 = false;
					swapMain(he, ta, check - 1, _count);
				}
			}; break;
		case 2:
			f = false;
			while (f2) {
				cout << "������� �������� �������:";
				cin >> x;
				system("cls");
				check = searchByValue(he, ta, x, _count);
				if (check == 0) {
					cout << "������ �������� ����!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else if (check == _count) {
					cout << "������� " << x << " ��������� �� ��������� ������� � �� ����� ���� �������������!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f2 = false;
					swapMain(he, ta, check, _count);
				}
			}; break;
		case 3: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}