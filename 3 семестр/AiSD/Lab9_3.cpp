#include <iostream>
#include <ctime>
#include <fstream>
#include "Windows.h"
#include <time.h>

using namespace std;

struct list {
	int item;
	list* next, * prev;
};


list* push(list*& head, int x) {
	list* pv = new list;
	pv->item = x;
	pv->next = NULL;
	list* ad = new list;
	ad = head;

	while (ad->next != NULL) {
		ad = ad->next;
	}
	ad->next = pv;
	pv->prev = ad;
}

void output(list* head) {
	list* _pv = head;
	while (_pv != NULL) {
		cout << _pv->item << endl;
		_pv = _pv->next;
	}
}

void insert(list*& head, int n) {
	long long k = 0, p = 0;
	time_t start, end;

	list* pv;
	int x;

	start = clock();
	pv = head->next;
	while (pv) {
		x = pv->item;
		list* ad = pv->prev;
		while (ad != NULL && x < ad->item) {
			ad->next->item = ad->item;
			ad = ad->prev;
			k++;
		}
		if (ad == NULL) {
			head->item = x;
			p++;
		}
		else {
			ad->next->item = x;
		}
		pv = pv->next;
	}
	end = clock();
	double dif = difftime(end, start);
	cout << "??????? ??????" << endl;
	cout << n << " ????????? ??????????????? ?? " << dif / 1000.0 << " ??????" << endl;
	cout << "??? - ?? ?????????: " << k << endl;
	cout << "??? - ?? ????????????: " << p << endl << endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 10;

	list* _LIST = new list;
	_LIST->item = n;
	_LIST->next = NULL;
	_LIST->prev = NULL;
	for (int i = n - 1; i > 0; i--) {
		push(_LIST, i);
	}
	output(_LIST);
	cout << endl;
	bubble(_LIST, n);

	output(_LIST);

	delete _LIST;
	return 0;
}