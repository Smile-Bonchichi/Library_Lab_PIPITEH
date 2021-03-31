#pragma once

void input(int* A, int M) {
	for (int i = 0; i < M; i++)
		A[i] = rand() % 100 + 1;
}
void output(int* A, int M) {
	for (int i = 0; i < M; i++)
		cout << "A[" << i << "]=" << A[i] << endl;
}
void result(int* A, int M, int& mx, int& mn, double& sr) {
	mx = A[0]; mn = A[0];
	for (int i = 1; i < M; i++) {
		if (A[i] > mx) mx = A[i];
		if (A[i] < mn) mn = A[i];
	}
	sr = (mx + mn) / 2.;
}
void del(int* A, int M) { delete[] A; }

void lab3_1() {
	int* Mass;
	int N, max, min;
	double sr;
	cout << "������� ������ �������: ";
	cin >> N;
	Mass = new int[N];
	input(Mass, N);
	output(Mass, N);
	result(Mass, N, max, min, sr);
	cout << endl;
	cout << "���������:" << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "������� �������� : " << sr << endl;

	del(Mass, N);
}

void input(int** A, int a, int b) {
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			A[i][j] = rand() % 10;
}
void output(int** A, int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			cout << "A[" << i << "][" << j << "]=" << A[i][j] << "\t";
		cout << endl;
	}
}
void result(int** A, int** B, int** C, int a, int b, int c) {
	for (int i = 0; i < a; i++)
		for (int k = 0; k < c; k++) {
			C[i][k] = 0;
			for (int j = 0; j < b; j++)
				C[i][k] += A[i][j] * B[j][k];
		}
}
void del(int** A, int n) {
	for (int i = 0; i < n; i++)
		delete A[i];
	delete[] A;
}

void lab3_2() {
	int** A, ** B, ** C;
	int n, m, l;

	cout << "������� ���������� ����� ������� 1 : ";
	cin >> n;
	cout << "������� ���������� �������� ������� 1 : ";
	cin >> m;
	cout << "������� ���������� �������� ������� 2 : ";
	cin >> l;
	cout << endl;

	A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[m];

	B = new int* [m];
	for (int i = 0; i < m; i++)
		B[i] = new int[l];

	C = new int* [n];
	for (int i = 0; i < n; i++)
		C[i] = new int[l];
	cout << endl;

	input(A, n, m);
	output(A, n, m);
	cout << endl;

	input(B, m, l);
	output(B, m, l);
	cout << endl;

	result(A, B, C, n, m, l);
	output(C, n, l);
	cout << endl;

	del(A, n);
	del(B, m);
	del(C, n);
}

void input(int** A, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i][j] = rand() % 50;
}
void output(int** A, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << "A[" << i << "][" << j << "]=" << A[i][j] << "\t";
		cout << endl;
	}
}

void result(int** A, int* x, int n) {
	int sum;
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < n; j++)
			sum += A[i][j];
		x[i] = sum;
	}

}
void del(int** A, int n) {
	for (int i = 0; i < n; i++)
		delete A[i];
	delete[] A;
}
void output2(int* x, int b) {
	int max;
	for (int i = 0; i < b; i++)
		cout << i << "-������ -> " << x[i] << " " << endl;
	max = x[0];
	for (int i = 1; i < b; i++)
		if (x[i] > max)
			max = x[i];
	cout << "���������� �������� ����: " << max << endl;
}

void del2(int* x, int) { delete[]x; }

void lab3_3() {
	int** A, * x;
	const int n = 5;
	cout << "���������� ������� 5 �� 5: ";
	A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[n];
	x = new int[n];
	cout << endl;

	input(A, n);
	output(A, n);
	cout << endl;

	result(A, x, n);
	cout << endl;
	cout << "����� �������: " << endl;
	output2(x, n);

	del(A, n);
}

void input(int** A, int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			A[i][j] = rand() % 100 + 1;
}

void output(int** A, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "A[" << i << "][" << j << "]=" << A[i][j] << "\t";
		cout << "\n";
	}
}

void result(int** A, int n, int m, int& max, int& min, double& sr) {
	max = A[0][0];
	min = A[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (A[i][j] > max)
				max = A[i][j];
			if (A[i][j] < min)
				min = A[i][j];
		}
	sr = (max + min) / 2.;

}
void del(int** A, int n) {
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}

void lab3_4() {
	const int n = 4, m = 5;
	int max, min;
	double sr;
	int** A;
	A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[m];

	input(A, n, m);
	output(A, n, m);
	result(A, n, m, max, min, sr);
	cout << "���������� ������� �����: " << max << ",a ���������� ������� �����: " << min << endl;
	cout << endl;
	cout << "C������ �������������� ����������� � ����������� ��������� �����: " << sr << endl;
	del(A, n);
}

void input(int** A, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % 100 - 50;
		}
	}
}

void output(int** A, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << "A[" << i << "][" << j << "]=" << A[i][j] << "\t";
		cout << "\n";
	}
}

void result(int** A, int m, int n, int& max, int& index1, int& index2) {
	max = abs(A[0][0]);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (abs(A[i][j]) > max) {
				max = abs(A[i][j]);
				index1 = i;
				index2 = j;
			}
}

void del(int** A, int n, int m) {
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}

void lab3_5() {
	int n, m, max, index1 = 0, index2 = 0;
	cout << "������� ���������� ����� ������� : ";
	cin >> n;
	cout << "������� ���������� �������� ������� : ";
	cin >> m;
	cout << endl;
	int** A;
	A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[m];

	input(A, n, m);
	output(A, n, m);
	result(A, n, m, max, index1, index2);

	cout << "���������� ������� �����: " << max << " � ���������:[" << index1 << "][" << index2 << "]" << endl;
	del(A, n, m);
}

void input(int** A, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i][j] = rand() % 100 + 1;
}

void output(int** A, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << "A[" << i << "][" << j << "]=" << A[i][j] << "\t";
		cout << "\n";
	}
}

void result(int** A, int n, int& min, int& index1, int& index2) {
	min = A[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (A[i][j] <= min) {
				min = A[i][j];
				index1 = i;
				index2 = j;
			}
}

void summa(int** A, int n, int& index1, int& index2, int& sum) {
	for (int i = 0; i < n; i++)
		sum += A[index1][i];
}

void del(int** A, int n) {
	for (int i = 0; i < n; i++)
		delete[] A[i];
	delete[] A;
}

void lab3_6() {
	int n, sum = 0, index1, min, index2;
	cout << "������� ����������� ����������  ������� : ";
	cin >> n;
	cout << endl;
	int** A;
	A = new int* [n];
	for (int i = 0; i < n; i++)
		A[i] = new int[n];

	input(A, n);
	output(A, n);
	result(A, n, min, index1, index2);
	cout << "���������� ������� -> " << "A[" << index1 << "]" << "[" << index2 << "]= " << A[index1][index2] << endl;
	cout << "C����� � " << index1 << endl;
	summa(A, n, index1, index2, sum);
	cout << "�����: " << sum << endl;
	del(A, n);
}

void input(double* A, int n) {
	for (int i = 0; i < n; i++) {
		cout << "������� " << i << "-�� ������� ������� = ";
		cin >> A[i];
	}
}

void output(double* A, int n) {
	for (int i = 0; i < n; i++)
		cout << "A[" << i << "]=" << A[i] << endl;
}
void result_a(double* A, int n, int c, int& kol) {
	for (int i = 0; i < n; i++)
		if (A[i] < c)
			kol++;
}
void result_b(double* A, int n, double& sum) {
	int pol = 0;
	for (int i = 0; i < n; i++)
		if (A[i] > 0) {
			pol = i;
			break;
		}
	for (int i = pol + 1; i < n; i++)
		if (A[i] > 0)
			sum += A[i];
}
void result_c(double* A, int n, int& a, int& b) {
	int k = 0, temp;
	for (int i = 0; i < n; i++)
		if (trunc(A[i]) >= a && trunc(A[i]) <= b) {
			for (int j = i; j > k; j--) {
				temp = A[j];
				A[j] = A[j - 1];
				A[j - 1] = temp;
			}
			k++;
		}
}
void del(double* A, int M) { delete[] A; }


void lab3_7() {
	double* A;
	int n, c, kol = 0, a, b;
	double  sum = 0;
	cout << "������� ������ �������: ";
	cin >> n;
	A = new double[n];
	input(A, n);
	cout << endl;

	cout << "������� ����� C: ";
	cin >> c;

	result_a(A, n, c, kol);
	cout << "���������� ���������� ������ � �����: " << kol << endl;

	result_b(A, n, sum);
	cout << "����� ������������� ��������� �����: " << sum << endl;

	cout << "������� ������ ���������:";
	cin >> a;
	cout << "������� ����� ���������:";
	cin >> b;

	result_c(A, n, a, b);

	cout << "�������������� ������ �������� ���: " << endl;
	output(A, n);

	del(A, n);
}