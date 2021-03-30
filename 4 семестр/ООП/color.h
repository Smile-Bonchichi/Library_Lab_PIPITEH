#pragma once

HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

void yellow(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void orange(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void white(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void dark_blue(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_BLUE);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void black(str temp) {
	SetConsoleTextAttribute(out, 0);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void gray(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void blue(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void magenta(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void green(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void red(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void cyan(str temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}