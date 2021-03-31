#include <iostream>
#include <ctime>
#include <fstream>
#include "Windows.h"
#include <time.h>

using namespace std;

struct list {
	int item;
	list* next;
};

void push(list*& _li, int x) {
	list* pv = new list;
	pv->item = x;
	list* ad = new list;
	ad = _li;
	while (ad->next != NULL) {
		ad = ad->next;
	}
	ad->next = pv;
	pv->next = NULL;
}

void select(list*& li, int n) {
	list* a, * b;
	list* p1, * p2, * r1, * r2;
	long long k = 0, p = 0;
	time_t start, end;
	start = clock();
	for (p1 = r1 = li; p1 != NULL; p1 = p1->next) {
		a = p2 = r2 = p1;
		for (b = p1->next; b != NULL; b = b->next) {
			if (b->item < p2->item) {
				r2 = a;
				p2 = b;
				p++;
			}
			k++;
			a = b;
		}
		if (p1 != p2) {
			if (p1 == li) {
				li = p2;
			}
			else {
				r1->next = p2;
			}
			b = p2->next;
			if (p1 == r2) {
				p2->next = p1;
				p1->next = b;
			}
			else {
				a = p1->next;
				r1->next = p2;
				r2->next = p1;
				p1->next = b;
				p2->next = a;
			}
			p1 = p2;
		}
		r1 = p1;
	}
	end = clock();
	double dif = difftime(end, start);
	cout << "Методом выбора" << endl;
	cout << n << " элементов отсортировалось за " << dif / 1000.0 << " секунд" << endl;
	cout << "Кол - во сравнений: " << k << endl;
	cout << "Кол - во перестановок: " << p << endl << endl;
}

void insert(list*& li, int n) {
	list* curElem = li->next, * curSortedElem, * elemBeforeCurSorted, * elemBeforeCurElem = li;
	int swapped;
	long long k = 0, p = 0;
	time_t start, end;
	start = clock();
	while (curElem != NULL) {
		swapped = 0;
		curSortedElem = li;
		elemBeforeCurSorted = NULL;
		while (curSortedElem != curElem) {
			k++;
			if (curElem->item <= curSortedElem->item) {
				elemBeforeCurElem->next = curElem->next;
				curElem->next = curSortedElem;
				if (elemBeforeCurSorted != NULL) {
					elemBeforeCurSorted->next = curElem;
				}
				else {
					li = curElem;
				}
				curElem = elemBeforeCurElem->next;
				elemBeforeCurSorted = NULL;
				swapped = 1;
				p++;
				break;
			}
			else {
				elemBeforeCurSorted = curSortedElem;
				curSortedElem = curSortedElem->next;
			}
		}
		if (swapped == 0) {
			elemBeforeCurElem = curElem;
			curElem = curElem->next;
		}
	}
	end = clock();
	double dif = difftime(end, start);
	cout << "Методом вставками" << endl;
	cout << n << " элементов отсортировалось за " << dif / 1000.0 << " секунд" << endl;
	cout << "Кол - во сравнений: " << k << endl;
	cout << "Кол - во перестановок: " << p << endl << endl;
}

void buble(list*& li, int n) {
	long long k = 0, p = 0;
	time_t start, end;
	start = clock();

	list* i = li, * j = li;

	while (j->next != NULL) {
		i = li;
		while (i->next != NULL) {
			if (i->item > i->next->item) {
				swap(i->item, i->next->item);
				p++;
			}
			i = i->next;
			k++;
		}
		j = j->next;
	}

	end = clock();
	double dif = difftime(end, start);
	cout << "Методом обменом" << endl;
	cout << n << " элементов отсортировалось за " << dif / 1000.0 << " секунд" << endl;
	cout << "Кол - во сравнений: " << k << endl;
	cout << "Кол - во перестановок: " << p << endl << endl;
}

void shecker(list*& li, int n) {
	long long k = 0, p = 0;

}

void output(list* li) {
	int i = 1;
	list* _li = li;
	cout << "------------------------------------" << endl;
	cout << "|\tЭлементы\t:   Индекс |\n";
	cout << "------------------------------------" << endl;
	while (_li != 0) {
		cout << "|\t" << _li->item << "\t\t:     " << i << "\t   |" << endl;
		cout << "------------------------------------" << endl;
		_li = _li->next;
		i++;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 100000;
	string s = "100000.txt";
	ifstream sin;
	list* _LIST1 = new list;
	list* _LIST2 = new list;
	list* _LIST3 = new list;

	int* arr1 = new int[n - 1];
	int* arr2 = new int[n - 1];
	int* arr3 = new int[n - 1];

	sin.open(s);
	sin >> _LIST1->item;
	_LIST1->next = NULL;
	for (int i = 0; i < n; i++) {
		sin >> arr1[i];
	}
	for (int i = 1; i < n - 1; i++) {
		push(_LIST1, arr1[i]);
	}
	select(_LIST1, n);
	sin.close();
	delete _LIST1;

	sin.open(s);
	sin >> _LIST2->item;
	_LIST2->next = NULL;
	for (int i = 0; i < n; i++) {
		sin >> arr2[i];
	}
	for (int i = 1; i < n - 1; i++) {
		push(_LIST2, arr2[i]);
	}
	insert(_LIST2, n);
	sin.close();
	delete _LIST2;

	sin.open(s);
	sin >> _LIST3->item;
	_LIST3->next = NULL;
	for (int i = 0; i < n; i++) {
		sin >> arr3[i];
	}
	for (int i = 1; i < n - 1; i++) {
		push(_LIST3, arr3[i]);
	}
	buble(_LIST3, n);
	sin.close();
	delete _LIST3;

	delete[]arr1;
	delete[]arr2;
	delete[]arr3;
	return 0;
}