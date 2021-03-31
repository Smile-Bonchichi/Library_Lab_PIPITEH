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

int _count = 0, p = 0;

void inition(list*& li);
void output(list* li);
void searchByIndex(list* li);
int searchByValue(list* li, int value);
void search(list*& li);
void clear(list*& li);
void push(list*& li, int k);
void pop(list*& li, int k);
void add(list*& li);
void deleLI(list*& li);
void sort1(list*& li);
void sort2(list*& li);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	list* _List = new list;
	bool f = true;
	int choice;
	_List->next = 0;
	inition(_List);
	while (f) {
		p = 0;
		cout << "-----------------------------------------" << endl;
		cout << "|             ������� ����:             |" << endl;
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
		cout << "|       7. ������������� ������(1)      |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|       8. ������������� ������(2)      |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|                9. �����               |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "������� ����� ��������:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: add(_List); break;
		case 2:	output(_List); break;
		case 3: deleLI(_List); break;
		case 4: searchByIndex(_List); break;
		case 5: search(_List); break;
		case 6:	clear(_List); break;
		case 7:
			for (int i = 0; i < _count; i++) {
				sort1(_List);
			}; break;
		case 8: sort2(_List); break;
		case 9: f = false; break;
		default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
		}
	}
	return 0;
}

void inition(list*& li) {
	int x;
	cout << "��������������� ������ ������� ��� ������:";
	cin >> x;
	system("cls");
	list* _li = new list;
	_li->item = x;
	li->next = _li;
	li->next->next = NULL;
	cout << "������ ������� �� ��������� = " << x << " ���������������\n" << endl;
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

void searchByIndex(list* li) {
	if (_count <= 0) {
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
			if (x <= 0 || x > (_count + 1)) {
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

int searchByValue(list* li, int value) {
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

void search(list*& li) {
	if (_count <= 0) {
		cout << "���� ����, ������ ������!!!" << endl;
	}
	else {
		bool f1 = true;
		int search, x;
		while (f1) {
			cout << "������� �������� �������� ������� ����:";
			cin >> x;
			system("cls");
			search = searchByValue(li, x);
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

void clear(list*& li) {
	if (_count <= 0) {
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
		_count = 0;
		li->next = 0;
		cout << "���� ������� ������!!!" << endl;
	}
}

void push(list*& li, int k) {
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
	else if (k == (_count + 1)) {
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
	_count++;
	cout << "������� " << x << " ������� ��������";
}

void pop(list*& li, int k) {
	list* _li = new list;
	int x;
	if (k == 1) {
		_li = li->next;
		li->next = _li->next;
		x = _li->item;
		delete _li;
	}
	else if (k == _count) {
		list* _LI = new list;
		_LI = li;
		while (_LI->next != 0) {
			_li = _LI;
			_LI = _LI->next;
		}
		x = _LI->item;
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
				delete _LI;
				break;
			}
			j++;
			_li = _LI;
			_LI = _LI->next;
		}
	}
	_count--;
	if (_count == 0) {
		li->next = 0;
	}
}

void add(list*& li) {
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
				if (x <= 0 || x > (_count + 1)) {
					cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
				}
				else {
					f1 = false;
					f = false;
					push(li, x);
					cout << " � ������ = " << x << endl;
				}
			}
		}
		else if (x == 2) {
			if (_count <= 0) {
				cout << "���� ����, ������ �������� �� ��� �����!!!" << endl;
			}
			else {
				while (f1) {
					cout << "������� �������� �������� �� �������� ��������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						push(li, check);
						cout << " �� �������� " << x << endl;
					}
				}
			}
		}
		else if (x == 3) {
			if (_count <= 0) {
				cout << "���� ����, ������ �������� �� ��� �����!!!" << endl;
			}
			else {
				while (f1) {
					cout << "������� �������� �������� ����� �������� ��������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						push(li, (check + 1));
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

void deleLI(list*& li) {
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
					if (x <= 0 || x > (_count + 1)) {
						cout << "�� ����� �� ������� ������!!!" << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(li, x);
					}
				}
			}
			else if (x == 2) {
				while (f1) {
					cout << "������� �������� �������� �� �������� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x);
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
							pop(li, check - 1);
						}
					}
				}
			}
			else if (x == 3) {
				while (f1) {
					cout << "������� �������� �������� ����� �������� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x);
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
							pop(li, check + 1);
						}
					}
				}
			}
			else if (x == 4) {
				while (f1) {
					cout << "������� �������� �������� ������� ����� �������:";
					cin >> x;
					system("cls");
					check = searchByValue(li, x);
					if (check == 0) {
						cout << "���������� �������� �� ����������." << endl << "��������� ������ ����!!!" << endl;
					}
					else {
						f1 = false;
						f = false;
						pop(li, check);
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

void pushe(list*& li, int x) {
	list* _li = new list;
	_li->item = x;
	list* _LI = new list;
	_LI = li->next;
	while (_LI->next != 0) {
		_LI = _LI->next;
	}
	_LI->next = _li;
	_li->next = 0;
	_count++;
}

void sort1(list*& li) {
	list* _li = new list;
	_li = li->next;
	int min = _li->item, j = 1, i = 1;
	int l = _count - p;
	while (_li != 0) {
		if (_li->item <= min) {
			min = _li->item;
			j = i;
		}
		i++;
		_li = _li->next;
		if (i == (l + 1)) {
			break;
		}
	}
	pop(li, j);
	pushe(li, min);
	p++;
}

void sort2(list*& li) {
	int temp = 0;
	list* index = li;
	list* i = li;
	while (i->next != 0) {
		index = li;
		while (index->next != 0) {
			if (index->item > index->next->item) {
				temp = index->item;
				index->item = index->next->item;
				index->next->item = temp;
			}
			index = index->next;
		}
		i = i->next;
	}
}