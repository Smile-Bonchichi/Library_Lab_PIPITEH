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
};

void listnum1(list* li, int& _count1);
void listnum2(list* li, int& _count2);
void listnum3(list* li, int& _count3);

void inition(list* li, int k);
void push(list*& li, int k, int& count);
void add(list*& li, int& count);

void pop(list*& li, int k, int& count);
void deleLI(list*& li, int& count);

void output(list* li, int& count);

void searchByIndex(list* li, int& count);
int searchByValue(list* li, int value, int& count);
void search(list*& li, int& count);

void clear(list*& li, int& count);

void con2(list*& li1, list*& li2, int& count1, int& count2);
void concon2(list* li1, list* li2, list* li3, int& count1, int& count2, int& count3);

void con3(list*& li1, list*& li2, list*& li3, int& count1, int& count2, int& count3);
void concon3(list* li1, list* li2, list* li3, int& count1, int& count2, int& count3);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int n = 3;
	list* _List = new list[n];

	bool f = true;
	int choice, _count1 = 1, _count2 = 1, _count3 = 1;
	for (int i = 0; i < n; i++) {
		_List[i].item = i + 1;
		_List[i].next = NULL;
		inition(&_List[i], (i + 1));
	}

	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|              ������� ����:            |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             1. ������ � 1             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             2. ������ � 2             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             3. ������ � 3             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|    4. ������������ �� ���� �������    |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|    5. ������������ �� ���� �������    |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               6. �����                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: listnum1(&_List[0], _count1); break;
		case 2: listnum2(&_List[1], _count2); break;
		case 3: listnum3(&_List[2], _count3); break;
		case 4: concon2(&_List[0], &_List[1], &_List[2], _count1, _count2, _count3); break;
		case 5: concon3(&_List[0], &_List[1], &_List[2], _count1, _count2, _count3); break;
		case 6: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
	return 0;
}

void listnum1(list* li, int& _count1) {
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|        ������� ���� ������ � 1:       |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         1. ���������� ��������        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           2. ����� ���������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          3. �������� ��������         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|      4. ����� �������� �� �������     |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|     5. ����� �������� �� ��������     |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           6. �������� ������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               7. �����                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: add(li, _count1); break;
		case 2:	output(li, _count1); break;
		case 3: deleLI(li, _count1); break;
		case 4: searchByIndex(li, _count1); break;
		case 5: search(li, _count1); break;
		case 6:	clear(li, _count1); break;
		case 7: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

void listnum2(list* li, int& _count2) {
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|        ������� ���� ������ � 2:       |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         1. ���������� ��������        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           2. ����� ���������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          3. �������� ��������         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|      4. ����� �������� �� �������     |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|     5. ����� �������� �� ��������     |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           6. �������� ������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               7. �����                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: add(li, _count2); break;
		case 2:	output(li, _count2); break;
		case 3: deleLI(li, _count2); break;
		case 4: searchByIndex(li, _count2); break;
		case 5: search(li, _count2); break;
		case 6:	clear(li, _count2); break;
		case 7: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

void listnum3(list* li, int& _count3) {
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|        ������� ���� ������ � 3:       |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         1. ���������� ��������        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           2. ����� ���������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          3. �������� ��������         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|      4. ����� �������� �� �������     |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|     5. ����� �������� �� ��������     |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           6. �������� ������          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               7. �����                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: add(li, _count3); break;
		case 2:	output(li, _count3); break;
		case 3: deleLI(li, _count3); break;
		case 4: searchByIndex(li, _count3); break;
		case 5: search(li, _count3); break;
		case 6:	clear(li, _count3); break;
		case 7: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

void inition(list* li, int k) {
	int x;
	cout << "��������������� ������ ������� ��� ������ � " << k << ":";
	cin >> x;
	system("cls");
	list* _li = new list;
	_li->item = x;
	li->next = _li;
	li->next->next = NULL;
	cout << "������ ������� �� ��������� = " << x << " ���������������\n" << endl;
}

void push(list*& li, int k, int& count) {
	list* _li = new list;
	int j = 1, x;
	cout << "������� ����� ������� ��� ����������:";
	cin >> x;
	system("cls");
	_li->item = x;
	if (k == 1) {
		_li->next = li->next;
		li->next = _li;
	}
	else if (k == (count + 1)) {
		list* _LI = new list;
		_LI = li->next;
		while (_LI->next != 0) {
			_LI = _LI->next;
		}
		_LI->next = _li;
		_li->next = 0;
	}
	else {
		list* _LI = new list;
		_LI = li->next;
		while (_LI != 0) {
			if (j == k - 1) {
				_li->next = _LI->next;
				_LI->next = _li;
				break;
			}
			j++;
			_LI = _LI->next;
		}
	}
	count++;
	cout << "������� " << x << " ������� ��������";
}

void add(list*& li, int& count) {
	bool f = true, f1 = true;
	int x, check;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|            ���� ����������:           |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|       1. ���������� �� �������        |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|  2. ���������� �� ���������� �������� |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|3. ���������� ����� ���������� ��������|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               4. �����                |" << endl;
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
				if (x <= 0 || x > (count + 1)) {
					cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f1 = false;
					f = false;
					push(li, x, count);
					cout << " � ������ = " << x << endl;
				}
			}
		}
		else if (x == 2) {
			if (count <= 0) {
				cout << "���� ����, ������ �������� �� ��� �����!!!" << endl;
			}
			else {
				while (f1) {
					cout << "������� �������� �������� �� �������� ��������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x, count);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						push(li, check, count);
						cout << " �� �������� " << x << endl;
					}
				}
			}
		}
		else if (x == 3) {
			if (count <= 0) {
				cout << "���� ����, ������ �������� �� ��� �����!!!" << endl;
			}
			else {
				while (f1) {
					cout << "������� �������� �������� ����� �������� ��������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x, count);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						push(li, (check + 1), count);
						cout << " ����� �������� " << x << endl;
					}
				}
			}
		}
		else if (x == 4) {
			f = false;
		}
		else {
			cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl;
		}
	}
}

void output(list* li, int& count) {
	if (count <= 0) {
		cout << "���� ����, ������ ��������!!!" << endl;
	}
	else {
		cout << "C����� � " << li->item << endl;
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

void pop(list*& li, int k, int& count) {
	list* _li = new list;
	int x;
	if (k == 1) {
		_li = li->next;
		li->next = _li->next;
		x = _li->item;
		cout << "������� " << _li->item << " ������� ������" << endl;
		delete _li;
	}
	else if (k == count) {
		list* _LI = new list;
		_LI = li;
		while (_LI->next != 0) {
			_li = _LI;
			_LI = _LI->next;
		}
		x = _LI->item;
		cout << "������� " << _LI->item << " ������� ������" << endl;
		delete _LI;
		_li->next = 0;
	}
	else {
		int j = 1;
		list* _LI = new list;
		_LI = li->next;
		while (_LI != 0) {
			if (j == k) {
				_li->next = _LI->next;
				x = _LI->item;
				cout << "������� " << _LI->item << " ������� ������" << endl;
				delete _LI;
				break;
			}
			j++;
			_li = _LI;
			_LI = _LI->next;
		}
	}
	count--;
	if (count == 0) {
		li->next = 0;
	}
}

void deleLI(list*& li, int& count) {
	if (count <= 0) {
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
			cout << "|   2. �������� �� ���������� ��������  |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "| 3. �������� ����� ���������� �������� |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|         4. �������� �� ��������       |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               5. �����                |" << endl;
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
					if (x <= 0 || x > (count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(li, x, count);
					}
				}
			}
			else if (x == 2) {
				while (f1) {
					cout << "������� �������� �������� �� �������� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x, count);
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
							pop(li, (check - 1), count);
						}
					}
				}
			}
			else if (x == 3) {
				while (f1) {
					cout << "������� �������� �������� ����� �������� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x, count);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						if (check == count) {
							cout << "������ ������� ����� " << x << " \n������ ��� ��� ������ ���!!!" << endl;
						}
						else {
							pop(li, (check + 1), count);
						}
					}
				}
			}
			else if (x == 4) {
				while (f1) {
					cout << "������� �������� �������� ������� ����� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x, count);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(li, check, count);
					}
				}
			}
			else if (x == 5) {
				f = false;
			}
			else {
				cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl;
			}
		}
	}
}

void searchByIndex(list* li, int& count) {
	if (count <= 0) {
		cout << "���� ����, ������ ������!!!" << endl;
	}
	else {
		int x, i = 1;
		bool f = true;
		list* _li = new list;
		while (f) {
			cout << "������� ������ ��������� ��������:";
			cin >> x;
			system("cls");
			if (x <= 0 || x > (count + 1)) {
				cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
			}
			else {
				f = false;
				_li = li->next;
				while (_li != 0) {
					if (i == x) {
						cout << "������� �������:" << endl;
						cout << x << "| " << _li->item << endl;
					}
					i++;
					_li = _li->next;
				}
			}
		}
	}
}

int searchByValue(list* li, int value, int& count) {
	int i = 1, j, kol = 0, k = 0, x;
	bool f = true;

	list* _li = new list;
	_li = li->next;

	while (_li != 0) {
		if (_li->item == value) {
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
				_li = li->next;
				while (_li != 0) {
					if (_li->item == value) {
						j = i;
						k++;
					}
					if (k == x) {
						break;
					}
					i++;
					_li = _li->next;
				}
				return j;
			}
		}
	}
	return 0;
}

void search(list*& li, int& count) {
	if (count <= 0) {
		cout << "���� ����, ������ ������!!!" << endl;
	}
	else {
		bool f1 = true;
		int search, x;
		while (f1) {
			cout << "������� �������� �������� ������� ����:";
			cin >> x;
			system("cls");
			search = searchByValue(li, x, count);
			if (search == 0) {
				cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
			}
			else {
				f1 = false;
				cout << "������� �������: " << endl << search << "| " << x << endl;
			}
		}
	}
}

void clear(list*& li, int& count) {
	if (count <= 0) {
		cout << "���� ����, ������ �������!!!" << endl;
	}
	else {
		list* _li = new list;
		_li = li->next;
		while (_li != 0) {
			list* _LI = new list;
			_LI = _li;
			_li = _li->next;
			delete _LI;
		}
		count = 0;
		li->next = 0;
		cout << "���� ������� ������!!!" << endl;
	}
}

void con2(list*& li1, list*& li2, int& count1, int& count2) {
	if (count1 == 0 && count2 == 0) {
		cout << "��� ������ �� ���������!!!" << endl;
	}
	else if (count1 == 0) {
		cout << li1->item << " �� ��������!!!" << endl;
	}
	else if (count2 == 0) {
		cout << li2->item << " �� ��������!!!" << endl;
	}
	else {
		cout << li2->item << "  ������ ����������� � " << li1->item << ", � " << li2->item << " ����!!!" << endl;
		list* _li = new list;
		_li = li1->next;
		while (_li->next != 0) {
			_li = _li->next;
		}
		_li->next = li2->next;
		li2->next = 0;
		count1 += count2;
		count2 = 0;
	}
}

void concon2(list* li1, list* li2, list* li3, int& count1, int& count2, int& count3) {
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|   ���� ������������ �� ���� �������:  |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               1. 1 + 2                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               2. 1 + 3                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               3. 2 + 1                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               4. 2 + 3                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               5. 3 + 1                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               6. 3 + 2                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               7. �����                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: con2(li1, li2, count1, count2); break;
		case 2: con2(li1, li3, count1, count3); break;
		case 3: con2(li2, li1, count2, count1); break;
		case 4: con2(li2, li3, count2, count3); break;
		case 5:	con2(li3, li1, count3, count1); break;
		case 6: con2(li3, li2, count3, count2); break;
		case 7: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}

void con3(list*& li1, list*& li2, list*& li3, int& count1, int& count2, int& count3) {
	if (count1 == 0 && count2 == 0 && count3 == 0) {
		cout << "��� ������ �� ���������!!!" << endl;
	}
	else if (count1 == 0) {
		cout << li1->item << " �� ��������!!!" << endl;
	}
	else if (count2 == 0) {
		cout << li2->item << " �� ��������!!!" << endl;
	}
	else if (count3 == 0) {
		cout << li3->item << " �� ��������!!!" << endl;
	}
	else {
		cout << li2->item << " � " << li3->item << "  ������ ����������� � " << li1->item << ", � " << li2->item << " � " << li3->item << " �����!!!" << endl;
		list* _li = new list;
		_li = li1->next;
		while (_li->next != 0) {
			_li = _li->next;
		}
		_li->next = li2->next;
		_li = li2->next;
		while (_li->next != NULL) {
			_li = _li->next;
		}
		_li->next = li3->next;
		count1 = count1 + count2 + count3;
		li2->next = 0;
		li3->next = 0;
		count2 = 0;
		count3 = 0;
	}
}

void concon3(list* li1, list* li2, list* li3, int& count1, int& count2, int& count3) {
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|   ���� ������������ �� ���� �������:  |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             1. 1 + 2 + 3              |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             2. 1 + 3 + 2              |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             3. 2 + 1 + 3              |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             4. 2 + 3 + 1              |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             5. 3 + 1 + 2              |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|             6. 3 + 2 + 1              |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               7. �����                |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: con3(li1, li2, li3, count1, count2, count3); break;
		case 2: con3(li1, li3, li2, count1, count3, count2); break;
		case 3: con3(li2, li1, li3, count2, count1, count3); break;
		case 4: con3(li2, li3, li1, count2, count3, count1); break;
		case 5: con3(li3, li1, li2, count3, count1, count2); break;
		case 6: con3(li3, li2, li1, count3, count2, count1); break;
		case 7: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
}