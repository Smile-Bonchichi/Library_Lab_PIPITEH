#pragma once

int i, j;
int Check1, Check2, Check = 0;

void initialization(int* arr, int n) {
	for (i = 0; i < n; i++)
		cin >> arr[i];
}

void output(int* arr, int n) {
	for (i = 0; i < n; i++)
		cout << arr[i] << endl;
}

int* add(int* arr, int n) {
	int x, a;
	n++;
	int* arr2 = new int[n];
	while (Check2 == 0) {
		cout << "������� ������ ���� ��������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > n)
			cout << "������ �� ����� ���� <= 0 ��� > ���������� ������� � ������ !!!" << endl;
		else {
			Check2++;
			j = 0;
			cout << "������� �������:";
			cin >> a;
			for (i = 0; i < n; i++) {
				if (i != (x - 1))
					arr2[i] = arr[j++];
				else
					arr2[i] = a;
			}
		}
	}
	delete[] arr;
	return arr2;
}

int* add_bef_aft(int* arr, int n, int num) {
	int a = 0, k = 0, x = 0, x1 = 0;
	int* arr2 = new int[n + 1];
	j = 0;
	if (num == 2) {
		n++;
		cout << "������� �������:";
		cin >> a;
		for (i = 0; i < n; i++) {
			if (i != (n - 1))
				arr2[i] = arr[j++];
			else
				arr2[i] = a;
		}
		for (j = 0; j < n; j++)
			for (i = 0; i < n - 1; i++)
				if (arr2[i] > arr2[i + 1])
					swap(arr2[i], arr2[i + 1]);
	}
	else if (num == 3) {
		while (Check2 == 0) {
			cout << "������� ������� ����� �������� ��������:";
			cin >> x;
			system("cls");
			for (i = 0; i < n; i++) {
				if (arr[i] == x)
					x1 = (i + 1);
				else
					k++;
			}
			if (k > (n - 1))
				cout << "������ �������� �� ����������" << endl;
			else {
				n++;
				Check2++;
				cout << "������� �������:";
				cin >> a;
				for (i = 0; i < n; i++) {
					if (i != x1)
						arr2[i] = arr[j++];
					else
						arr2[i] = a;
				}
			}
		}
	}
	else {
		while (Check2 == 0) {
			cout << "������� ������� �� �������� ��������:";
			cin >> x;
			system("cls");
			for (i = 0; i < n; i++) {
				if (arr[i] == x)
					x1 = (i - 1);
				else
					k++;
			}
			if (k > (n - 1))
				cout << "������ �������� �� ����������" << endl;
			else {
				n++;
				Check2++;
				cout << "������� �������:";
				cin >> a;
				for (i = 0; i < n; i++) {
					if (i != x1)
						arr2[i] = arr[j++];
					else
						arr2[i] = a;
				}
				for (j = 0; j < n; j++)
					for (i = 0; i < n - 1; i++)
						if (arr2[i] > arr2[i + 1])
							swap(arr2[i], arr2[i + 1]);
			}
		}
		arr2[0] = a;
	}
	delete arr;
	return arr2;
}

int* del(int* arr, int n) {
	int x;
	n--;
	int* arr2 = new int[n];
	while (Check2 == 0) {
		cout << "������� ������ ������ �������:";
		cin >> x;
		system("cls");
		if (x <= 0 || x > n)
			cout << "������ �� ����� ���� <= 0 ��� > ���������� ������� � ������ !!!" << endl;
		else {
			Check2++;
			arr[x - 1] = 0;
			for (j = 0; j < n + 1; j++)
				for (i = 0; i < n; i++)
					if (arr[i] == 0)
						swap(arr[i], arr[i + 1]);
			for (i = 0; i < n; i++)
				arr2[i] = arr[i];
		}
	}
	delete arr;
	return arr2;
}

int* del_bef_aft(int* arr, int n, int num) {
	int x1 = 0, x, k = 0;
	if (num == 2) {
		while (Check2 == 0) {
			cout << "������� ������� ����� �������� �������:";
			cin >> x;
			system("cls");
			for (i = 0; i < n; i++) {
				if (arr[i] == x && x != n)
					x1 = (i + 1);
				else
					k++;
			}
			if (k > (n - 1)) {
				cout << "������ �������� �� ����������" << endl;
				k = 0;
			} else {
				Check2++;
				k = 0;
				arr[x1] = 0;
				for (j = 0; j < n; j++)
					for (i = 0; i < n - 1; i++)
						if (arr[i] == 0)
							swap(arr[i], arr[i + 1]);
			}
		}
	} else if (num == 3) {
		while (Check2 == 0) {
			cout << "������� ������� �� �������� �������:";
			cin >> x;
			system("cls");
			for (i = 0; i < n; i++) {
				if (arr[i] == x && x != 1)
					x1 = (i - 1);
				else
					k++;
			}
			if (k > (n - 1)) {
				cout << "������ �������� �� ����������" << endl;
				k = 0;
			} else {
				Check2++;
				k = 0;
				arr[x1] = 0;
				for (j = 0; j < n; j++)
					for (i = 0; i < n - 1; i++)
						if (arr[i] == 0)
							swap(arr[i], arr[i + 1]);
			}
		}
	}
	n--;
	int* arr2 = new int[n];
	for (i = 0; i < n; i++)
		arr2[i] = arr[i];
	delete arr;
	return arr2;
}

int* del_znam(int* arr, int n, int x) {
	int k = 0, q = 0;
	while (Check2 == 0) {
		system("cls");
		for (i = 0; i < n; i++) {
			if (arr[i] == x) {
				arr[i] = 0;
				q++;
			} else
				k++;
		}
		if (k > (n - 1)) {
			cout << "������ �������� �� ����������" << endl;
			k = 0;
		} else {
			Check2++;
			for (j = 0; j < n; j++)
				for (i = 0; i < n - 1; i++)
					if (arr[i] == 0)
						swap(arr[i], arr[i + 1]);
		}
	}
	for (i = 0; i < q; i++)
		n--;
	int* arr2 = new int[n];
	for (i = 0; i < n; i++)
		arr2[i] = arr[i];
	delete arr;
	return arr2;
}

int* search(int* arr, int n, int number) {
	int x;
	if (number == 1) {
		while (Check2 == 0) {
			cout << "������� ������ ��������: ";
			cin >> x;
			x = x - 1;
			system("cls");
			if (x >= n || x < 0)
				cout << "������ ������� ��� !!!" << endl << "������� ������." << endl;
			else {
				Check2++;
				cout << "������� �:" << arr[x] << " ���������� �� " << x + 1 << " �������" << endl;
			}
		}
		return&arr[x];
	} else if (number == 2) {
		int k = 0, x1 = 0;
		while (Check2 == 0) {
			cout << "������� �������� ��������: ";
			cin >> x;
			system("cls");
			for (i = 0; i < n; i++) {
				if (arr[i] == x) {
					cout << "������� �:" << arr[i] << " ���������� �� " << i + 1 << " �������" << endl;
					cout << "� ���������� �� ������ " << &arr[i] << endl;
					return&arr[i];
				} else
					k++;
			}
			if (k > (n - 1))
				cout << "������ �������� ��� !!!" << endl << "������� ������." << endl;
		}
	}
}

int* search_min(int* arr, int n) {
	int imin = 0, min = arr[0];
	for (i = 0; i < n; i++)
		if (arr[i] < min) {
			min = arr[i];
			imin = i;
		}
	cout << "������� �:" << min << " ���������� �� " << imin + 1 << " �������" << endl;
	for (i = 0; i < n; i++)
		if (arr[i] == min) {
			return&arr[i];
		}
}

void sort(int* arr, int n) {
	for (j = 0; j < n; j++)
		for (i = 0; i < n - 1; i++)
			if (arr[i] > arr[1 + i])
				swap(arr[i], arr[i + 1]);
}

void DelMas(int* arr) { delete arr; }

struct list {
	int size;
	int* mas;
};

void lab3() {
	list Matrix;
	cout << "������� ������ �������: ";
	cin >> Matrix.size;
	system("cls");
	if (Matrix.size <= 0)
		cout << "������ ������� �� ����� ���� <= 0 !!!" << endl;
	else {
		int* accept = NULL;
		int number = 0, a, x = 0, x1 = 0, q = 0, k = 0;
		Matrix.mas = new int[Matrix.size];
		while (Check == 0) {
			Check1 = 0, Check2 = 0;
			cout << "-----------------------------------------" << endl;
			cout << "|             ������� ����:             |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|             1.���� ������             |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|            2.����� ������             |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|         3.���������� ��������         |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|          4.�������� ��������          |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|           5.����� ��������            |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|         6.����������� ������          |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|           7.������� ������            |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|               8.�����.                |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "������� ����� ��������:";
			cin >> a;
			system("cls");
			switch (a) {
			case 1: initialization(Matrix.mas, Matrix.size); break;
			case 2: output(Matrix.mas, Matrix.size); break;
			case 3:	while (Check1 == 0) {
				cout << "-----------------------------------------" << endl;
				cout << "|          ���������� ��������:         |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|              1.�� �������             |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|             2.�� ��������             |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|       3.����� ��������� ��������      |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|       4.����� �������� ���������      |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << endl;
				cout << "������� ����� ��������:";
				cin >> number;
				system("cls");
				switch (number) {
				case 1:
					Check1++;
					Matrix.mas = add(Matrix.mas, Matrix.size);
					Matrix.size++; break;
				case 2:
					Check1++;
					Matrix.mas = add_bef_aft(Matrix.mas, Matrix.size, number);
					Matrix.size++; break;
				case 3:
					Check1++;
					Matrix.mas = add_bef_aft(Matrix.mas, Matrix.size, number);
					Matrix.size++; break;
				case 4:
					Check1++;
					Matrix.mas = add_bef_aft(Matrix.mas, Matrix.size, number);
					Matrix.size++; break;
				default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
				}
			}; break;
			case 4:	while (Check1 == 0) {
				cout << "-----------------------------------------" << endl;
				cout << "|            �������� ��������:         |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|              1.�� �������             |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|       2.����� ��������� ��������      |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|       3.����� �������� ���������      |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "|             4.�� ��������             |" << endl;
				cout << "-----------------------------------------" << endl;
				cout << endl;
				cout << "������� ����� ��������:";
				cin >> number;
				system("cls");
				switch (number) {
				case 1:
					Check1++;
					Matrix.mas = del(Matrix.mas, Matrix.size);
					Matrix.size--; break;
				case 2:
					Check1++;
					Matrix.mas = del_bef_aft(Matrix.mas, Matrix.size, number);
					Matrix.size--; break;
				case 3:
					Check1++;
					Matrix.mas = del_bef_aft(Matrix.mas, Matrix.size, number);
					Matrix.size--; break;
				case 4:
					Check1++;
					cout << "������� ������� ������� �������:";
					cin >> x;
					system("cls");
					for (i = 0; i < Matrix.size; i++) {
						if (Matrix.mas[i] == x) {
							q++;
						}
					}
					Matrix.mas = del_znam(Matrix.mas, Matrix.size, x);
					for (i = 0; i < q; i++)
						Matrix.size--;
					break;
				default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
				}
			}; break;
			case 5:
				while (Check1 == 0) {
					cout << "-----------------------------------------" << endl;
					cout << "|            ����� ��������:            |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|             1.�� �������              |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|            2.�� ��������              |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << "|         3.����������� �������         |" << endl;
					cout << "-----------------------------------------" << endl;
					cout << endl;
					cout << "������� ����� ��������:";
					cin >> number;
					system("cls");
					switch (number) {
					case 1:
						Check1++;
						accept = search(Matrix.mas, Matrix.size, number);
						cout << "� ���������� �� ������ " << accept << endl; break;
					case 2:
						Check1++;
						accept = search(Matrix.mas, Matrix.size, number);
						break;
					case 3:
						Check1++;
						accept = search_min(Matrix.mas, Matrix.size);
						cout << "� ���������� �� ������ " << accept << endl; break;
					default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
					}
				}; break;
			case 6: sort(Matrix.mas, Matrix.size); break;
			case 7: DelMas(Matrix.mas); Matrix.size = 0; break;
			case 8: Check++; break;
			default: cout << "����� �������� �� ����������!!!" << endl << "������� ������." << endl; break;
			}
		}
	}
}