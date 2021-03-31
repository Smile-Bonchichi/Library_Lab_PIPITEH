#pragma once

void lab4_1() {
	const int N = 7;
	int temp[N];
	double sum = 0, nul = 0;
	for (int i = 0; i < N; i++) {
		temp[i] = rand() % 16 + (-5);//от -5 до 10
		cout << "Температура воздуха в " << i + 1 << " день: " << temp[i] << endl;
	}
	for (int i = 0; i < N; i++) {
		if (temp[i] <= 0)
			nul++;
		sum += temp[i];
	}
	sum = sum / N;
	cout << "\n";
	cout << "Температура ниже 0 градуса опускалась " << nul << " раз(a)." << endl;
	cout << "Средняя температура воздуха за неделю равна " << sum << "." << endl;
}

void lab4_2() {
	const int N = 10;
	int A[N], kolvo = 0;
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 11;
		cout << "A[" << i << "]=" << A[i] << endl;
	}
	for (int i = 0; i < N; i++)
		if (A[i] % 2 != 0 && i % 2 == 0) {
			cout << "----------> A[" << i << "]=" << A[i] << endl;
			kolvo++;
		}
	cout << "\n";
	cout << "Количество членов последовательности имеющих четные порядковые номера и являющися нечетными числами равно " << kolvo << endl;
}

void lab4_3() {
	const int N = 11;
	int a[N];
	bool pr = true;
	cout << "Введите последоватеьность чисел:" << endl;
	for (int i = 0; i < N; i++) {
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	for (int i = 1; i < N; i++)
		if (a[i] >= a[i - 1]) {
			pr = false;
			cout << "Последовательность не является убывающей." << endl;
			break;
		}
	if (pr)
		cout << "Убывающая последовательность." << endl;
}

void lab4_4() {
	const int N = 7;
	int A[N];
	int Sum = 0;
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 31;
		cout << "Осадки в " << i << " день равны: " << A[i] << " мм." << endl;
	}
	for (int i = 0; i < N; i++)
		Sum += A[i];
	cout << "\n";
	cout << "Общее количество осадков за неделю равно: " << Sum << " мм." << endl;
}

void lab4_5() {
	const int N = 30;
	int A[N];
	int nul = 0;
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 61 + (-20);//от -20 до 40 градусов
		cout << "Температура воздуха в " << i << " день равна: " << A[i] << "°C." << endl;
	}
	for (int i = 0; i < N; i++)
		if (A[i] <= 0)
			nul++;
	cout << "\n";
	cout << "Температура ниже 0 градуса опускалась " << nul << " раз(a)." << endl;
}

void lab4_6() {
	const int N = 10;
	int A[N];
	int par = 0;
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 11;
		cout << "A[" << i << "]=" << A[i] << endl;
	}
	for (int i = 1; i < N; i++)
		if (A[i] == A[i - 1])
			par++;
	cout << "Количество одинаковых соседних элементов равно " << par << endl;
}

void lab4_7() {
	const int N = 10;
	int A[N], max, temp, index;
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 101 - 50;
		cout << "A[" << i << "]=" << A[i] << endl;
	}
	max = A[0]; index = 0;
	for (int i = 1; i <= N; i++)
		if (A[i] > max) {
			max = A[i];
			index = i;
		}
	cout << "Наибольший элемент равен " << max << ",a его индекс равен " << index << endl;
	cout << "\n";
	temp = A[0];
	A[0] = max;
	A[index] = temp;
	cout << "После перестановки массив выглядит так" << endl;
	for (int i = 0; i < N; i++)
		cout << "A[" << i << "]=" << A[i] << endl;
}

void lab4_8() {
	const int N = 10;
	int A[N], p, temp, f;
	for (int i = 0; i < N; i++) {
		A[i] = rand() % 100 + 1;
		cout << A[i] << "\t";
	}
	cout << "Процесс сортировки выглядит так..." << "\n";
	for (p = 1; p <= N; p++) {
		f = 1;
		for (int i = 0; i < N - 1; i++)
			if (A[i] > A[i + 1]) {
				f = 0;
				temp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = temp;
			}
		if (f)
			break;
		cout << "Проход номер-" << p << endl;
		for (int i = 0; i < N; i++)
			cout << A[i] << "\t";
	}
	cout << "\n\n";
}