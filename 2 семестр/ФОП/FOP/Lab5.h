#pragma once

struct Student {
	char name[30];
	char group[10];
	int ses[5];
};

void input(Student* stud1, int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "\n\t������� �" << i + 1 << endl << "\t���: ";
		cin >> stud1[i].name;
		cout << "������: ";
		cin >> stud1[i].group;
		for (int j = 0; j < m; j++) {
		res:
			cout << "������� �� �������� �" << j + 1 << ": ";
			cin >> stud1[i].ses[j];
			if (stud1[i].ses[j] < 2 || stud1[i].ses[j] > 5) {
				cout << "����� ������ ���! ������� ������." << endl;
				goto res;
			}
		}
		cout << endl;
	}
}

void output(Student* stud1, int n, int m) {
	cout << "\n\t�\t���\t������\t\t������\n";
	for (int i = 0; i < n; i++) {
		cout << "\t" << i + 1 << "\t" << stud1[i].name << "\t" << stud1[i].group << "\t\t";
		for (int j = 0; j < m; j++)
			cout << stud1[i].ses[j] << " ";
		cout << endl;
	}
	cout << endl;
}

void sort(Student* stud1, int n, int m) {
	Student temp;
	for (int i = 1; i < n; i++)
		for (int j = 0; j < n - 1; j++)
			if (strcmp(stud1[j].name, stud1[j + 1].name) > 0) {
				temp = stud1[j];
				stud1[j] = stud1[j + 1];
				stud1[j + 1] = temp;
			}
}

void best(Student* stud1, int n, int m) {
	int temp, temp1 = 0;
	cout << "\n\t���������!\n" << "\t�\t���\t������\t\t������\n" << endl;
	for (int i = 0; i < n; i++) {
		temp = 0;
		for (int j = 0; j < m; j++)
			if (stud1[i].ses[j] == 5)
				temp++;
		if (temp == 5) {
			cout << "\t" << i + 1 << "\t" << stud1[i].name << "\t" << stud1[i].group << "\t\t";
			for (int j = 0; j < m; j++)
				cout << stud1[i].ses[j] << " ";
			cout << endl;
			temp1++;
		}
	}
	if (temp1 == 0)
		cout << "��������� �� �������!\n\n";
}

void good(Student* stud1, int n, int m) {
	int temp1, temp2, temp3;
	temp2 = 0;
	cout << "\n\t��������" << "\t�\t���\t������\t\t������\n" << endl;
	for (int i = 0; i < n; i++) {
		temp1 = temp3 = 0;
		for (int j = 0; j < m; j++) {
			if (stud1[i].ses[j] == 4)
				temp1++;
			if (stud1[i].ses[j] == 5)
				temp3++;
		}
		if (temp1 + temp3 == 5 && temp1 != 0) {
			cout << "\t" << i + 1 << "\t" << stud1[i].name << "\t" << stud1[i].group << "\t\t";
			for (int j = 0; j < m; j++)
				cout << stud1[i].ses[j] << " ";
			cout << endl;
			temp2++;
		}
	}
	if (temp2 == 0)
		cout << "�������� �� �������!\n\n";
}

void lab5_1() {
	int x, n;
	cout << "������� ���-�� ��������� : ";
	cin >> n;
	const int m = 5;
	Student* stud1 = new Student[n];

restart:
	cout << "-----------------------------------------" << endl;
	cout << "|            ������� ����:              |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|          1.���� ���������.            |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|           2.����� ������.             |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|            3.����������.              |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|          4.����� ����������.          |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|          5.����� ���������.           |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|              6.�����.                 |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;

	cout << "������� �������� : ";
	cin >> x;
	cout << endl;
	switch (x) {
	case 1: input(stud1, n, m); break;
	case 2: output(stud1, n, m); break;
	case 3: sort(stud1, n, m); break;
	case 4: best(stud1, n, m); break;
	case 5: good(stud1, n, m); break;
	case 6: exit(1);
	default: cout << "\t�������� �� �������!\n"; break;
	}
	goto restart;
}

struct Train {
	string nazn;
	int num;
	struct Vr {
		int h;
		int m;
	} time;
};

void input(Train* train, int n) {
	for (int i = 0; i < n; i++) {
		cout << "����� ����������: ";
		cin >> train[i].nazn;
		cout << "����� � : ";
		cin >> train[i].num;
	t:
		cout << "�������� ����(0:23):";
		cin >> train[i].time.h;
		if (train[i].time.h < 0 || train[i].time.h > 23) {
			cout << "������������ ������ �������.������� ������." << endl;
			goto t;
		}
		cout << "�������� ������(0:59):";
		cin >> train[i].time.m;
		if (train[i].time.m < 0 || train[i].time.m > 59) {
			cout << "������������ ������ �������.������� ������." << endl;
			goto t;
		}
	}
}

void output(Train* train, int n) {
	cout << "-----------------------------------------" << endl;
	cout << "| " << "����� ����������" << "   " << "����� �" << "   " << "�����" << "      |" << endl;
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < n; i++) {
		cout << "       " << train[i].nazn << "              " << train[i].num << "         " << train[i].time.h << ":" << train[i].time.m;
		cout << endl;
	}
	cout << endl;
}
void sort(Train* train, int n) {
	Train temp;
	for (int i = 0; i < n; i++)
		for (int i = 0; i < n - 1; i++)
			if (train[i].num > train[i + 1].num)
			{
				temp = train[i];
				train[i] = train[i + 1];
				train[i + 1] = temp;
			}
}

void och(Train* train, int n) {
	int p;
	cout << "������� ����� ������:";
	cin >> p;
	bool f = false;
	for (int i = 0; i < n; i++) {
		if (train[i].num == p) {
			f = true;
			cout << "-----------------------------------------" << endl;
			cout << "| " << "����� ����������" << "   " << "����� �" << "   " << "�����" << "      |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "       " << train[i].nazn << "              " << train[i].num << "         " << train[i].time.h << ":" << train[i].time.m << endl;
			break;
		}
		if (f = false) cout << "��� ������ ������ ������";
		cout << endl;
	}
}

void lab5_2() {
	int n, x;

	cout << "������� ���������� �������:";
	cin >> n;
	Train* tr1 = new Train[n];

metka:
	cout << "-----------------------------------------" << endl;
	cout << "|            ������� ����:              |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|          1.���� �������.              |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|           2.����� ������.             |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|            3.����������.              |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|        4.����� ���������� ������.     |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|              5.�����.                 |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;
	cout << "������� ����� ��������:";
	cin >> x;
	switch (x)
	{
	case 1: input(tr1, n); goto metka; break;
	case 2: output(tr1, n); goto metka; break;
	case 3: sort(tr1, n); goto metka; break;
	case 4: och(tr1, n); goto metka; break;
	case 5: exit; break;
	default: cout << "�������� �� �������." << endl; goto metka; break;
	}
}

struct Worker {
	string name;
	string pos;
	int year;
};

void input(Worker* worker, int n) {
	for (int i = 0; i < n; i++) {
		cout << "�������� �" << i + 1 << ":";
		cin >> worker[i].name;
		cout << "���������:";
		cin >> worker[i].pos;
	t:
		cout << "���:";
		cin >> worker[i].year;
		if (worker[i].year < 1950 || worker[i].year >2020) {
			cout << "������� ���������� ���." << endl;
			goto t;
		}
		cout << endl;
	}
}

void output(Worker* worker, int n) {
	cout << "-----------------------------------------" << endl;
	cout << "| " << "���:" << "     " << "���������:" << "       " << "���:" << "      |" << endl;
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < n; i++)
		cout << "|" << worker[i].name << "       " << worker[i].pos << "       " << worker[i].year << "     |" << endl;
	cout << "-----------------------------------------" << endl;
}

void sort(Worker* worker, int n) {
	Worker temp;
	for (int i = 0; i < n; i++)
		for (int i = 0; i < n - 1; i++)
			if (worker[i].year > worker[i + 1].year) {
				temp = worker[i];
				worker[i] = worker[i + 1];
				worker[i + 1] = temp;
			}
}

void vyvod(Worker* worker, int n) {
	int p, g;
	cout << "������� ���� ������ :";
	cin >> p;
	for (int i = 0; i < n; i++) {
		g = 2020 - worker[i].year;
		if (g >= p) {
			cout << "-----------------------------------------" << endl;
			cout << "| " << "���:" << "     " << "���������:" << "       " << "���:" << "      |" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|" << worker[i].name << "        " << worker[i].pos << "      " << worker[i].year << "       |" << endl;
		}
	}
}

void lab5_3() {
	int n, x;

	cout << "������� ���������� ����������:";
	cin >> n;
	Worker* w = new Worker[n];

metka:
	cout << "-----------------------------------------" << endl;
	cout << "|            ������� ����:              |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|          1.���� ����������.           |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|           2.����� ������.             |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|            3.����������.              |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|       4.����� �� ����� ������.        |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "|              5.�����.                 |" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;
	cout << "������� ����� ��������:";
	cin >> x;
	switch (x) {
	case 1: input(w, n); goto metka; break;
	case 2: output(w, n); goto metka; break;
	case 3: sort(w, n); goto metka; break;
	case 4: vyvod(w, n); goto metka; break;
	case 5: exit; break;
	default: cout << "�������� �� �������." << endl; goto metka; break;
	}
}

struct Time {
	int hours;
	int minutes;
	int seconds;
};

int s(Time time) { return (time.hours * 60 * 60) + (time.minutes * 60) + time.seconds; }

void lab5_4() {
	Time t;
	int total;
h:
	cout << "������� ���� (0:23) :";
	cin >> t.hours;
	if (t.hours < 0 || t.hours > 23) {
		cout << "������������ ������ �����.������� ������." << endl;
		goto h;
	}
m:
	cout << "������� ������ (0:59) :";
	cin >> t.minutes;
	if (t.minutes < 0 || t.minutes > 59) {
		cout << "������������ ������ �����.������� ������." << endl;
		goto m;
	}
s:
	cout << "������� ������� (0:23) :";
	cin >> t.seconds;
	if (t.seconds < 0 || t.seconds > 59) {
		cout << "������������ ������ ������.������� ������." << endl;
		goto s;
	}
	cout << "� �������� ������� " << s(t) << " ������" << endl;
}