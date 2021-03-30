#pragma once

double power(double n, int p = 2) {
	double temp = 1;
	for (int i = 0; i < p; i++)
		temp *= n;
	return temp;
}
short int power(short int n, int p = 2) {
	short int temp = 1;
	for (int i = 0; i < p; i++)
		temp *= n;
	return temp;
}
long int power(long int n, int p = 2) {
	long int temp = 1;
	for (int i = 0; i < p; i++)
		temp *= n;
	return temp;
}
float power(float n, int p = 2) {
	float temp = 1;
	for (int i = 0; i < p; i++)
		temp *= n;
	return temp;
}

struct infoFor0_3 {
	str name;
	int age = 0;
	str specialty;
	int salary = 0;
};
template <class T>
void output(T& value, int& valuePower, str s) {
	cout << "Введите число типа " << s << ": "; cin >> value;
	cout << "Введите степень в которую возвести: ";
	cin >> valuePower; system("cls");
	if (valuePower < 2) cout << "Вы ввели степень < 2, из за этого степень будет равна 2!!!\nЧисло " << value << " типа " << s << " в степени 2 равна: " << power(value) << "\n\n\n";
	else cout << "Число " << value << " типа " << s << " в степени " << valuePower << " равна: " << power(value, valuePower) << "\n\n\n";
}

void menu() {
	cout << "-----------------------------------------\n";
	cout << "|             Главное Меню:             |\n";
	cout << "-----------------------------------------\n";
	cout << "|             1. Short                  |\n";
	cout << "-----------------------------------------\n";
	cout << "|             2. Long                   |\n";
	cout << "-----------------------------------------\n";
	cout << "|             3. Double                 |\n";
	cout << "-----------------------------------------\n";
	cout << "|             4. Float                  |\n";
	cout << "-----------------------------------------\n";
	cout << "|             5. Выход.                 |\n";
	cout << "-----------------------------------------\n";
}

void lab1_1() {
	double value;
	int valuePower;
	cout << "Введите число: "; cin >> value;
	cout << "Введите степень в которую возвести: "; cin >> valuePower;
	if (valuePower < 2) cout << "Вы ввели степень < 2, из за этого степень будет равна 2!!!\nЧисло " << value << " в степени 2 равна " << power(value) << endl;
	else cout << "Число " << value << " в степени " << valuePower << " равна " << power(value, valuePower) << endl;
}

void lab1_2() {
	int Power, x;
	short int ShortValue;
	long int LongValue;
	double DoubleValue;
	float FloatValue;
	str s; bool f = true;

	while (f) {
		menu();
		cout << "\nВыберите тип данных: ";
		cin >> x; system("cls");
		switch (x) {
		case 1: s = "short"; output(ShortValue, Power, s); break;
		case 2: s = "long"; output(LongValue, Power, s); break;
		case 3: s = "double"; output(DoubleValue, Power, s); break;
		case 4: s = "float"; output(FloatValue, Power, s); break;
		case 5: f = false; break;
		}
	}
}

void lab1_3() {
	fstream sin;
	int n, countLocksmith = 0, countTurner = 0;
	sin.open("0\\Plant.txt"); sin >> n;
	infoFor0_3* arr = new infoFor0_3[n];
	for (int i = 0; i < n; i++) {
		sin.ignore(); getline(sin, arr[i].name);
		sin >> arr[i].age;
		sin.ignore(); getline(sin, arr[i].specialty);
		sin >> arr[i].salary;
	}
	sin.close();

	for (int i = 0; i < n; i++) {
		if (arr[i].specialty == "Locksmith") countLocksmith++;
		else if (arr[i].specialty == "Turner") countTurner++;
	}
	cout << "_____________________________________________________\n";
	for (int i = 0; i < n; i++) cout << "| " << i + 1 << " | " << setw(19) << arr[i].name << " | " << arr[i].age << " | " << setw(10) << arr[i].specialty << " | " << arr[i].salary << " |\n";
	cout << "\n\nКоличество Токарей = " << countTurner << "\nКоличество Слесарей = " << countLocksmith << endl;
	delete[]arr;
}