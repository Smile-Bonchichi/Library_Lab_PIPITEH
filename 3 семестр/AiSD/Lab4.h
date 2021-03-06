#pragma once

struct Stack {
	int _item;
	Stack* _next;
};

int x = 0, i = 0;
int _count = 0;

void inition(Stack*& top) {
	_count++;
	Stack* _stack = new Stack;
	cin >> x;
	_stack->_item = x;
	_stack->_next = top;
	top = _stack;
	x = 0;
}

void push(Stack*& top) {
	_count++;
	Stack* _stack = new Stack;
	cout << "??????? ????? ???????:";
	cin >> x;
	_stack->_item = x;
	_stack->_next = top;
	top = _stack;
	x = 0;
}

void output(Stack* top) {
	if (_count <= 0)
		cout << "???? ????!!!" << endl;
	else {
		Stack* _stack;
		i = 1;
		while (top != NULL) {
			x = top->_item;
			_stack = top;
			top = top->_next;
			cout << "st[" << i << "] = " << x << endl;
			i++;
		}
		x = 0;
	}
}

void pop(Stack*& top) {
	if (_count <= 0)
		cout << "???? ????!!!" << endl;
	else {
		Stack* _stack = top;
		cout << "?????? ????????? ??????? = " << top->_item << endl;
		top = top->_next;
		delete _stack;
		_count--;
	}
}

void searchIndex(Stack* top) {
	if (_count <= 0)
		cout << "???? ????!!!" << endl;
	else {
		int s;
		Stack* _stack;
		cout << "??????? ?????? ????????? ????????:";
		cin >> x;
		system("cls");
		if (x > _count || x <= 0)
			cout << "?????? ??????? ????!!!" << endl;
		else {
			i = 1;
			while (top != NULL) {
				s = top->_item;
				_stack = top;
				top = top->_next;
				if (i == x)
					cout << "st[" << i << "] = " << x << endl;
				i++;
			}
		}
		x = 0;
	}
}

void searchValue(Stack* top) {
	if (_count <= 0)
		cout << "???? ????!!!" << endl;
	else {
		int s, k = 0;
		Stack* _stack;
		cout << "??????? ???????? ???????:";
		cin >> x;
		system("cls");
		i = 1;
		while (top != NULL) {
			s = top->_item;
			_stack = top;
			top = top->_next;
			if (s == x) {
				k++;
				cout << "st[" << i << "] = " << x << endl;
			}
			i++;
		}
		if (k == 0)
			cout << "????????? ??????? ?? ??????!" << endl;
	}
}

void searchMax(Stack* top) {
	if (_count <= 0)
		cout << "???? ????!!!" << endl;
	else {
		Stack* top2 = top;
		int s, max = top->_item;
		i = 1;
		max = top->_item;
		while (top != NULL) {
			s = top->_item;
			if (s > max)
				max = s;
			top = top->_next;
			i++;
		}
		cout << "???????????? ??????? ????? " << endl;
		i = 1;
		while (top2 != NULL) {
			if (max == top2->_item)
				cout << "st[" << i << "] = " << max << endl;
			top2 = top2->_next;
			i++;
		}
	}
}

void StCount() {
	if (_count <= 0)
		cout << "???? ????!!!" << endl;
	else
		cout << "???????? ???-?? ????????? ? ????? ?????:" << _count << endl;
}

void delSt(Stack* top) {
	if (_count <= 0)
		cout << "???? ????!!!" << endl;
	else {
		Stack* _stack;
		while (top != NULL) {
			_stack = top;
			top = top->_next;
			delete _stack;
		}
		cout << "???? ??????!!!" << endl;
		_count = 0;
	}
}

void lab4() {
	Stack* _Top = NULL;
	cout << "??????????????? ?????? ???????:";
	inition(_Top);
	system("cls");
	bool f = true;
	int choice;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|             ??????? ????:             |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|         1.?????????? ????????         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|           2.????? ?????????           |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          3.???????? ????????          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|     4.?????? ???????? ?? ???????      |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|      5.????? ??????? ?? ????????      |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|        6.????? ?????????????          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|        7.?????????? ?????????         |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|          8.??????? ?????????          |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|               9.?????                 |" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "??????? ????? ????????:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1:	push(_Top);  break;
		case 2: output(_Top); break;
		case 3: pop(_Top); break;
		case 4: searchIndex(_Top); break;
		case 5: searchValue(_Top); break;
		case 6: searchMax(_Top); break;
		case 7: StCount(); break;
		case 8: delSt(_Top); _Top = 0; break;
		case 9: f = false; break;
		default: cout << "????? ???????? ?? ??????????!!!" << endl << "??????? ??????." << endl; break;
		}
	}
}