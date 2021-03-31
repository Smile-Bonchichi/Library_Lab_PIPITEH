#include <iostream>
#include <ctime>
#include <fstream>
#include <string>
#include "Windows.h"
#include <time.h>

using namespace std;

void Mas_shell(int* arr, int n, long long& p, long long& s) {
	int temp, step, i, j;
	for (step = n / 2; step > 0; step /= 2) {
		for (i = step; i < n; i++) {
			temp = arr[i];
			for (j = i; j >= step; j -= step) {
				if (temp < arr[j - step]) {
					arr[j] = arr[j - step];
					p++;
					s++;
				}
				else {
					s++;
					break;
				}
			}
			arr[j] = temp;
		}
	}
}

void Mas_quick(int* arr, int n, long long& p, long long& s) {
	int left = 0, right = n - 1, prop;
	prop = arr[(left + right) / 2];

	while (left <= right) {
		while (arr[left] < prop) {
			left++;
			s++;
		}
		while (arr[right] > prop) {
			right--;
			s++;
		}
		s++;
		if (left <= right) {
			swap(arr[left++], arr[right--]);
			p++;
		}
	}

	if (right > 0) {
		Mas_quick(arr, right, p, s);
	}
	if (left < n) {
		Mas_quick(arr, n - left, p, s);
	}
}

void heapify(int* arr, int n, int i, long long& p, long long& s) {
	int largest = i;
	int left = 2 * i + 1, rigth = 2 * i + 2;
	if ((left < n) && (arr[left] > arr[largest])) {
		largest = left;
		s += 2;
	}
	if ((rigth < n) && (arr[rigth] > arr[largest])) {
		largest = rigth;
		s += 2;
	}
	if (largest != i) {
		swap(arr[i], arr[largest]);
		p++; s++;
		heapify(arr, n, largest, p, s);
	}
}
void Mas_heap(int* arr, int n, long long& p, long long& s) {
	for (int i = (n / 2 - 1); i >= 0; i--) {
		heapify(arr, n, i, p, s);
	}
	for (int i = (n - 1); i >= 0; i--) {
		swap(arr[0], arr[i]);
		p++;
		heapify(arr, i, 0, p, s);
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t start, end;

	ifstream sin;

	long long peres, sravn;
	double dif;
	int n = 100000000;
	string s = to_string(n);

	int* arr1 = new int[n];
	int* arr2 = new int[n];
	int* arr3 = new int[n];

	sin.open(s + "\\" + s + "N.txt");
	for (int i = 0; i < n; i++) {
		sin >> arr1[i];
	}
	sin.close();

	sin.open(s + "\\" + s + "N.txt");
	for (int i = 0; i < n; i++) {
		sin >> arr2[i];
	}
	sin.close();

	sin.open(s + "\\" + s + "N.txt");
	for (int i = 0; i < n; i++) {
		sin >> arr3[i];
	}
	sin.close();
	peres = 0, sravn = 0;
	start = clock();
	Mas_shell(arr1, n, peres, sravn);

	end = clock();
	dif = difftime(end, start);
	cout << n << " элементов отсортировалось за " << (dif / 1000.0) << " секунд" << endl;
	cout << "Кол - во сравнений: " << sravn << endl;
	cout << "Кол - во перестановок: " << peres << endl << endl;

	peres = 0, sravn = 0;
	start = clock();
	Mas_quick(arr2, n, peres, sravn);

	end = clock();
	dif = difftime(end, start);
	cout << n << " элементов отсортировалось за " << (dif / 1000.0) << " секунд" << endl;
	cout << "Кол - во сравнений: " << sravn << endl;
	cout << "Кол - во перестановок: " << peres << endl << endl;

	peres = 0, sravn = 0;
	start = clock();
	Mas_heap(arr3, n, peres, sravn);

	end = clock();
	dif = difftime(end, start);
	cout << n << " элементов отсортировалось за " << (dif / 1000.0) << " секунд" << endl;
	cout << "Кол - во сравнений: " << sravn << endl;
	cout << "Кол - во перестановок: " << peres << endl << endl;

	delete[]arr1;
	delete[]arr2;
	delete[]arr3;
	return 0;
}