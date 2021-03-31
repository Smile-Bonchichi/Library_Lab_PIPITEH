#pragma once

void lab6_1() {
	char a[100];
	cin.get(a, 100);
	int len = strlen(a);
	int t = 0;
	for (int i = 0; i < len; i++) {
		if (isalpha(a[i]) || a[i] == ' ')
			continue;
		else {
			t++;
			break;
		}
	}
	if (t == 1)
		cout << "Строка содержит символы, отличные от букв и пробелов" << endl;
	else
		cout << "Строка не содержит символы, отличные от букв и пробелов" << endl;
}

void lab6_2() {
	char a[100];
	cin.get(a, 100);
	int len = strlen(a);
	int t = 0;
	for (int i = 0; i < len; i++) {
		if (int(a[i]) >= 65 && int(a[i]) <= 90) {
			a[i] = int(a[i]) + 32;
			t++;
		} else if (int(a[i]) >= 97 && int(a[i]) <= 122) {
			a[i] = int(a[i]) - 32;
			t++;
		}
	}
	cout << a << endl;
	cout << "Количество изменений = " << t << endl;
}

void lab6_3() {
	char a[1000];
	char c[] = "three";
	cin.get(a, 1000);
	int len = strlen(a);
	int t = 0, x = 0;
	for (int i = 0; i < 1000; i++) {
		x = i;
		if (a[i] == 'o' && a[i + 1] == 'n' && a[i + 2] == 'e') {
			for (int j = len + 2; j > i + 2; j--)
				a[j] = a[j - 2];
			for (int k = 0; k < 5; k++) {
				a[x] = c[k];
				x++;
			}
			i += 4;
		}
		len = strlen(a);
	}
	len = strlen(a);
	for (int i = 0; i < len; i++)
		cout << a[i];
}

void lab6_4() {
	char a[1000];
	char c[] = "three";
	cin.get(a, 1000);
	int len = strlen(a);
	int t = 0, x = 0;
	for (int i = 0; i < 1000; i++) {
		x = i;
		if (a[i] == 'o' && a[i + 1] == 'n' && a[i + 2] == 'e') {
			for (int j = len + 2; j > i + 2; j--)
				a[j] = a[j - 2];
			for (int k = 0; k < 5; k++) {
				a[x] = c[k];
				x++;
			}
			i += 4;
			len = strlen(a);
			break;
		}
	}
	for (int i = 0; i < len; i++)
		cout << a[i];
}

void lab6_5() {
	char a[1000];
	cin.get(a, 1000);
	int len = strlen(a);
	int t = 0, x = 0;
	for (int i = 0; i < 1000; i++) {
		if (a[i] == '.' && a[i + 1] != ' ') {
			for (int j = len + 1; j > i + 1; j--)
				a[j] = a[j - 1];
			a[i + 1] = ' ';
			i += 1;
			len = strlen(a);
		}
	}
	for (int i = 0; i < len; i++)
		cout << a[i];
}

void lab6_6() {
	char a[1000];
	cin.get(a, 1000);
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (isdigit(a[i])) {
			for (int j = i; j < len; j++)
				a[j] = a[j + 1];
			i -= 1;
		}
		len = strlen(a);
	}
	for (int i = 0; i < len; i++)
		cout << a[i];
}

void lab6_7() {
	char a[1000];
	cin.get(a, 1000);
	int len = strlen(a);
	int i = 0, k = 0;
	while (a[i] != ' ') {
		if (int(a[i]) == 65 || int(a[i]) == 97) {
			k++;
			break;
		}
		i++;
		if (a[i] == '\0')
			break;
	}
	if (k > 0)
		cout << "Первое слово текста содержит букву А" << endl;
	else
		cout << "Первое слово текста не содержит букву А" << endl;
}

void lab6_8() {
	char a[1000];
	cout << "Введите текст:" << endl;
	cin.get(a, 1000);
	char s;
	cout << "Введите символ:" << endl;
	cin >> s;
	int len = strlen(a);
	int k = 0;
	for (int i = 0; i < len; i++)
		if (a[i] == s && a[i + 1] == ' ')
			k++;
	cout << "На символ " << s << " заканчивается " << k << " слов!" << endl;
}

void lab6_9() {
	char a[1000];
	char c[] = "ing";
	cin.get(a, 1000);
	int len = strlen(a);
	int t = 0, x = 0, i = 0;
	for (int i = 0; i < len; i++) {
		x = i;
		if (a[i] == 'e' && a[i + 1] == 'd' && (a[i + 2] == ' ' || a[i + 2] == '\0')) {
			for (int j = len + 1; j > i + 1; j--)
				a[j] = a[j - 1];
			for (int k = 0; k < 3; k++) {
				a[x] = c[k];
				x++;
			}
			i += 2;
		}
		len = strlen(a);
	}
	len = strlen(a);
	for (int i = 0; i < len; i++)
		cout << a[i];
}

void lab6_10() {
	char a[1000];
	cin.get(a, 1000);
	int len = strlen(a);
	int i = 0, k = 0;
	if (a[i] == ' ')
		while (!isalpha(a[i]))
			i++;
	while (a[i] != ' ') {
		k++;
		i++;
		if (a[i] == '\0')
			break;
	}
	cout << "Число символов первого слова: " << k << endl;
}

void lab6_11() {
	char a[1000];
	cout << "Введите текст:" << endl;
	cin.get(a, 1000);
	char s;
	cout << "Введите символ:" << endl;
	cin >> s;
	int len = strlen(a);
	int k = 0, i = 0, x = 0;
	if (a[i] == ' ')
		while (!isalpha(a[i]))
			i++;
	x = i;
	if (a[i] == s)
		while (a[i] != ' ') {
			k++;
			i++;
			if (a[i] == '\0')
				break;
		}
	for (int j = x; j < x + k; j++)
		cout << a[j];
	cout << endl;
}
