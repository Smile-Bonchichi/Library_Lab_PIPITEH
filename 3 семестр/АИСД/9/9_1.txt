#include <iostream>
#include <ctime>
#include <fstream>
#include "Windows.h"
#include <time.h>

using namespace std;

void best_case(int*& arr, int n) {
	ofstream sout;
	sout.open("qq.txt");
	for (int i = 0; i < n; i++) {
		sout << i << endl;
		arr[i] = i;
	}
	sout.close();
}
void worst_case(int*& arr, int n) {
	ofstream sout;
	sout.open("qq.txt");
	int j = 0;
	for (int i = n - 1; i >= 0; i--) {
		sout << i << endl;
		arr[j] = i;
		j++;
	}
	sout.close();
}
void random_case(int*& arr, int n) {
	ofstream sout;
	sout.open("qq.txt");
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % n;
		sout << arr[i] << endl;
	}
	sout.close();
}

void inition_elem(int*& arr, int n, string& s) {
	bool f = true;
	int x;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|\t\tМеню добавления:\t|\t" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t1. Лучший случай\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t2. Худший случай\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t3. Рандомный случай\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t4. Назад\t\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl << "Введите номер операции:"; cin >> x;
		system("cls");
		switch (x) {
		case 1: f = false; best_case(arr, n); s = """best"""; break;
		case 2: f = false; worst_case(arr, n); s = """worst"""; break;
		case 3: f = false; random_case(arr, n); s = """random"""; break;
		case 4: f = false; break;
		default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
		}
	}
}
void output(int*& arr, int n) {
	cout << "   ________________________________________" << endl;
	cout << " / \\                                       \\." << endl;
	cout << "|   |   Массив из " << n << " элементов\t\t   |." << endl;
	cout << " \\_ |                                      |." << endl;
	for (int i = 0; i < n; i++) {
		cout << "    |              " << arr[i] << "                       |." << endl;
	}
	cout << "    |   ___________________________________|___" << endl;
	cout << "    |  /                                      /." << endl;
	cout << "    \\_/______________________________________/." << endl;
}

void selection_sort(int*& arr, int n, string s) {
	long int min, p = 0, k = 0;
	time_t start, end;
	start = clock();
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
			k++;
		}
		if (min != i) {
			p++;
			swap(arr[i], arr[min]);
		}
	}
	end = clock();
	double dif = difftime(end, start);
	cout << n << " элементов случая " << s << " отсортировалось за " << dif / 1000.0 << " секунд" << endl;
	cout << "Методом выбора" << endl;
	cout << "Кол - во перестановок: " << p << endl;
	cout << "Кол - во сравнений: " << k << endl << endl;
}
void by_inserts_sort(int*& arr, int n, string s) {
	long int temp, j, p = 0, k = 0;
	time_t start, end;
	start = clock();
	for (int i = 1; i < n; i++) {
		temp = arr[i];
		j = i - 1;
		k++;
		while (j >= 0 && arr[j] > temp) {
			arr[j + 1] = arr[j];
			j = j - 1;
			p++;
			k++;
		}
		arr[j + 1] = temp;
	}
	end = clock();
	double dif = difftime(end, start);
	cout << n << " элементов случая " << s << " отсортировалось за " << dif / 1000.0 << " секунд" << endl;
	cout << "Методом вставки" << endl;
	cout << "Кол - во перестановок: " << p << endl;
	cout << "Кол - во сравнений: " << k << endl << endl;
}
void buble_sort(int*& arr, int n, string s) {
	time_t start, end;
	long int k = 0, p = 0;
	start = clock();
	for (int j = 1; j < n; j++) {
		for (int i = 0; i < n - j; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				p++;
			}
			k++;
		}
	}
	end = clock();
	double dif = difftime(end, start);
	cout << n << " элементов случая " << s << " отсортировалось за " << dif / 1000.0 << " секунд" << endl;
	cout << "Методом пузырька" << endl;
	cout << "Кол - во перестановок: " << p << endl;
	cout << "Кол - во сравнений: " << k << endl << endl;
}
void shaker_sort(int*& arr, int n, string s) {
	time_t start, end;
	long int k = 0, p = 0;
	start = clock();
	int Left = 1, Right = n - 1, i;
	while (Left <= Right) {
		for (i = Right; i >= Left; i--) {
			k++;
			if (arr[i - 1] > arr[i]) {
				swap(arr[i], arr[i - 1]);
				p++;
			}
		}
		Left++;
		for (i = Left; i <= Right; i++) {
			k++;
			if (arr[i - 1] > arr[i]) {
				swap(arr[i], arr[i - 1]);
				p++;
			}
		}
		Right--;
	}
	end = clock();
	double dif = difftime(end, start);
	cout << n << " элементов случая " << s << " отсортировалось за " << dif / 1000.0 << " секунд" << endl;
	cout << "Методом Шейкера" << endl;
	cout << "Кол - во перестановок: " << p << endl;
	cout << "Кол - во сравнений: " << k << endl << endl;
}

void sort(int*& arr, int n, string s) {
	bool f = true;
	int x;
	while (f) {
		cout << "-----------------------------------------" << endl;
		cout << "|\t\tМеню сортировки:\t|\t" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t1. Сортировка выбором\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t2. Сортировка вставками\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t3. Сортировка обменом\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t4. Шейкерная сортировка\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t5. Назад\t\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl << "Введите номер операции:"; cin >> x;
		system("cls");
		switch (x) {
		case 1: f = false; selection_sort(arr, n, s); break;
		case 2: f = false; by_inserts_sort(arr, n, s); break;
		case 3: f = false; buble_sort(arr, n, s); break;
		case 4: f = false; shaker_sort(arr, n, s); break;
		case 5: f = false; break;
		default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
		}
	}
}

void main_menu() {
	cout << "                     ,---.           ,---.   " << endl;
	cout << "                    / /^`.\\.--''''-./,'^\\ \\	" << endl;
	cout << "                    \\ \\    _       _    / /	" << "\t\t\t\t\t\tГлавное Меню:\t\t" << endl;
	cout << "                     `./  / __   __ \\  \\,'	" << endl;
	cout << "                      /    /_O)_(_O\\    \\	" << "\t\t\t\t\t1. Ввести значения массива\t" << endl;
	cout << "                      |  .-'  ___  `-.  |	" << endl;
	cout << "                   .--|       \\_/       |--.	" << "\t\t\t\t\t2. Вывести значения массива\t" << endl;
	cout << "                 ,'    \\   \\   |   /   /    `." << endl;
	cout << "                /       `.  `--^--'  ,'       \\" << "\t\t\t\t\t\t3. Отсортировать массив\t\t" << endl;
	cout << "             .-^^^^^-.    `--.___.--'     .-^^^^^-." << endl;
	cout << ".-----------/         \\------------------/         \\--------------." << "\t\t\t4. Переписать n\t\t\t" << endl;
	cout << "| .---------\\         /----------------- \\         /------------. |" << endl;
	cout << "| |          `-`--`--'                    `--'--'-'             | |" << endl;
	cout << "| |__      __   ___  | |   ___    ___    _ __ ___     ___       | |" << endl;
	cout << "| |\\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\      | |" << endl;
	cout << "| | \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/      | |" << endl;
	cout << "| |  \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|      | |" << endl;
	cout << "| |_____________________________________________________________| |" << endl;
	cout << "|_________________________________________________________________|" << endl;
	cout << "                   )__________|__|__________(" << endl;
	cout << "                  |            ||            |" << endl;
	cout << "                  |____________||____________|" << endl;
	cout << "                    ),-----.(      ),-----.(" << endl;
	cout << "                  ,'   ==.   \\    /  .==    `." << endl;
	cout << "                 /            )  (            \\" << endl;
	cout << "                 `==========='    `==========='  " << endl;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool f = true;
	int choice, n;
	string s;
	cout << "Введите кол - во элементов: ";
	cin >> n;
	system("cls");
	int* arr = new int[n];
	while (f) {
		main_menu();
		cout << "\t\t\t\t\t\t\t\t\t\t\tВведите номер операции:"; cin >> choice;
		system("cls");
		switch (choice) {
		case 1: inition_elem(arr, n, s); break;
		case 2: output(arr, n); break;
		case 3: sort(arr, n, s); break;
		case 4: cout << "Введите новое n: "; cin >> n; arr = new int[n]; break;
		default: delete[]arr; f = false; break;
			//default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
		}
	}
	return 0;
}