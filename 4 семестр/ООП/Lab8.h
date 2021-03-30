#pragma once

template<class T>
T searchMax(T* arr, const int& n) {
	T max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}

template<class T>
void sort(T*& arr, const int& n) {
	for (int j = 0; j < n - 1; j++) for (int i = 0; i < n - 1; i++)
			if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
}

template <class T> class Mass {
	int n;
	T* arr1, * arr2;
public:
	Mass() { this->n = 0; arr1 = new T[n]; arr2 = new T[n]; }
	Mass(int count) {
		this->n = count; arr1 = new T[n]; arr2 = new T[n];
		for (int i = 0; i < n; i++) {
			arr1[i] = rand() % 101 - 50; arr2[i] = rand() % 1001 - 500;
		}
	}
	T amount() {
		T sum = 0;
		for (int i = 0; i < n; i++)
			sum += (arr1[i] + arr2[i]);
		return sum;
	}
	void output() {
		red("#1\t\t #2\n");
		for (int i = 0; i < n; i++) cout << arr1[i] << "\t\t" << arr2[i] << endl;
	}
	~Mass() { delete[]arr1; delete[]arr2; }
};

template<class T> struct infoFor7_3 { T item; infoFor7_3* next; };

template<class T> class Stack_class {
	infoFor7_3 <T>* S;
	int count;
private:
	void d(int& k1, int& k2) {
		infoFor7_3<T>* pv = S;
		while (pv != NULL) {
			if (pv->item % 2 == 0) k1++;
			else k2++;
			
			pv = pv->next;
		}
	}
public:
	Stack_class() { S = NULL; count = 0; }
	void push(int s) {
		infoFor7_3<T>* pv = new infoFor7_3<T>;
		pv->item = s; pv->next = S;
		S = pv; count++;
	}
	void pop() {
		if (count == 0) cout << "Стек пуст!!!\nНечего удалять!!!\n";
		else {
			infoFor7_3<T>* pv = S; S = S->next;
			cout << "Элемент " << pv->item << " удален!!!\n";
			delete pv; count--;
		}
	}
	void output() {
		if (count == 0) cout << "Стек пуст!!!\nНечего показывать!!!\n";
		else {
			infoFor7_3<T>* pv = S;
			int i = count;
			cout << "_____________________\n";
			cout << "| Элементы | Индекс |\n";
			while (pv != NULL) {
				cout << "| " << setw(8) << pv->item << " | " << setw(6) << i << " |\n";
				pv = pv->next; i--;
			}
		}
	}
	int getCount() { return count; }
	void divide() {
		if (count == 0) cout << "Стек пуст!!!\nНечего разделять!!!\n";
		else {
			int countE = 0, countO = 0;
			int i = 0, j = 0, min, max;
			d(countE, countO);
			T* arrEven = new T[countE + 1];
			T* arrOdd = new T[countO + 1];
			for (int i = 0; i < countE; i++) arrEven[i] = T(0);
			for (int i = 0; i < countO; i++) arrOdd[i] = T(0);
			infoFor7_3<T>* pv = S;
			while (pv != NULL) {
				if (pv->item % 2 == 0) {
					arrEven[i] = pv->item; i++;
				} else {
					arrOdd[j] = pv->item; j++;
				}
				pv = pv->next;
			}
			cout << "_____________________\n";
			cout << "| Четные | Нечетные |\n";
			if (countE > countO) { max = countE; min = countO; }
			else { min = countE; max = countO; }
			for (int i = 0; i < min; i++) cout << "| " << setw(6) << arrEven[i] << " | " << setw(8) << arrOdd[i] << " |\n";
			if (max == countE) for (int i = min; i < max; i++) cout << "| " << setw(6) << arrEven[i] << endl;
			else for (int i = min; i < max; i++) cout << "| " << setw(9) << " | " << setw(8) << arrOdd[i] << " |\n";
			
			delete[]arrEven; delete[]arrOdd;
		}
	}
	~Stack_class() { delete S; }
};

void lab8_1() {
	int n, j = 0; 
	cin >> n; system("cls");

	char* arr = new char[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << searchMax(arr, n) << "\n\n";
	sort(arr, n);
	
	//int* arr = new int[n];
	//for (int i = n - 1; i >= 0; i--)
	//	arr[j++] = i + 10;

	//for (int i = 0; i < n; i++)
	//	cout << arr[i] << endl;

	//cout << "\nMax = " << searchMax(arr, n) << "\n\n";
	//sort(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;

	delete[]arr;
}

void lab8_2() {
	Mass <int> a(5);
	a.output();
	cout << endl;
	cout << a.amount() << endl;
}

void lab8_3() {
	Stack_class <int> S;
	str s; int x, n;
	bool f = true;
	cout << "Хотите прочитать с файла данные?\n 1 - yes\t 2 - no\n";
	cin >> s; system("cls");
	if (!check_number(s)) cout << "Вы ввели не число!!!\n";
	else
		if (atoi(s.c_str()) == 1) {
			fstream sin; sin.open("1\\Stack.txt");
			sin >> n;
			for (int i = 0; i < n; i++) { sin >> x; S.push(x); }
			sin.close();
		}
	while (f) {
		Main_Menu("Добавить новый элемент в stack", "Вывести элементы stack'a", "Удалить элемент stack'a", "Вывести кол - во элементов stack'a", "Разделить и вывести stack");
		cin >> s; system("cls");
		if (!check_number(s)) cout << "Вы ввели не число!!!\n";
		else
			switch (atoi(s.c_str())) {
			case 1:
				cout << "Введите новый элемент:";
				cin >> s; system("cls");
				if (!check_number(s)) cout << "Вы ввели не число!!!\n";
				else S.push(atoi(s.c_str())); break;
			case 2: S.output(); break;
			case 3: S.pop(); break;
			case 4: cout << "В стеке: " << S.getCount() << " элементов\n"; break;
			case 5: S.divide(); break;
			case 6: f = false; break;
			default: cout << "Такой операции не существует!!!\nВведите заново.\n"; break;
			}
	}
}