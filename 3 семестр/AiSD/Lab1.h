#pragma once

void lab1_1() {
	const int n = 10;
	int A[n], check = 0;
	double average, sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
		sum += A[i];
	}

	average = sum / n;
	cout << "\n��������� �������������� = " << average << endl;

	for (int i = 0; i < n; i++)
		if (A[i] > average) {
			check++;
			if (check > 0)
				break;
		}

	if (check != 0) {
		cout << "\n�������� ������ ������� ��������������" << endl;
		for (int i = 0; i < n; i++)
			if (A[i] > average)
				cout << "A[" << i + 1 << "] = " << A[i] << endl;
	}
	else
		cout << "\n��������� ������ ������� �������������� ���" << endl;
}

void lab1_2() {
	const int n = 10;
	int arr[n], kol = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int min = arr[0];
	int imin = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] < min) {
			min = arr[i];
			imin = i;
		}
	cout << "\n����������� ������� = " << min << endl;
	cout << "\n������ ������������ �������� = " << (imin + 1) << endl;
	if (imin == n - 1)
		cout << "\n��������� ����� ������������ �������� ���" << endl;
	else {
		cout << "\n�������� ����� ������������ ��������: " << endl;
		for (int i = (imin + 1); i < n; i++) {
			cout << "A[" << i + 1 << "] = " << arr[i] << endl;
			kol++;
		}
	}
	cout << "���������� ��������� ������� ����������� ����� ����������� �������� �����: " << kol << "\n\n\n";
}

void lab1_3() {
	const int n = 3;
	int arr[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	system("cls");
	cout << "��������� ������:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << "A[" << i + 1 << "][" << j + 1 << "]=" << arr[i][j] << "\t";
		cout << endl;
	}
	int min = arr[0][0], max = arr[0][0];
	int imin = 0, imax = 0;
	int jmin = 0, jmax = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				imax = i;
				jmax = j;
			}
			if (arr[i][j] < min) {
				min = arr[i][j];
				imin = i;
				jmin = j;
			}
		}
	cout << "\n\n";
	cout << "����������� ������� ������� � ������� � " << (jmin + 1) << " ������ � " << (imin + 1) << " = " << min << endl;
	cout << "������������ ������� ������� � ������� � " << (jmax + 1) << " ������ � " << (imax + 1) << " = " << max << endl;
	int t = 0;
	for (int i = 0; i < n; i++) {
		t = arr[imin][i];
		arr[imin][i] = arr[imax][i];
		arr[imax][i] = t;
	}
	cout << "\n\n���������� ������:" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "A[" << i + 1 << "][" << j + 1 << "]=" << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void lab1_4() {
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	system("cls");
	cout << "��������� ������: " << endl;
	for (int i = 0; i < n; i++)
		cout << "A[" << i << "] = " << arr[i] << "\n";
	int temp;
	for (int j = 0; j < n; j++)
		for (int i = 0; i < n - 1; i++)
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
	cout << "\n\n��������������� ������\n\n" << endl;
	for (int i = 0; i < n; i++)
		cout << "A[" << i << "] = " << arr[i] << "\n";
}