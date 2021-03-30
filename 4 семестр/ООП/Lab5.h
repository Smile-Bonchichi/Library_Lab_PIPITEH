#pragma once

class Int {
	long number;
	const char* check() {
		try {
			if (this->number >= 2147483648 || this->number <= -2147483648) throw "Ошибка :(";
			else throw "Все хорошо :)";
		} catch (const char* ex) { return ex; }
	}
public:
	Int() { this->number = 0; }
	Int(long x) { this->number = x; }
	void output() { cout << this->number << " " << check() << endl; }
	Int operator+ (Int variable) { return (this->number + variable.number); }
	Int operator- (Int variable) { return (this->number - variable.number); }
	Int operator* (Int variable) { return (this->number * variable.number); }
	Int operator/ (Int variable) { return (this->number / variable.number); }
	Int operator+= (Int variable) { return (this->number += variable.number); }
	Int operator-= (Int variable) { return (this->number -= variable.number); }
	Int operator++ (int) { return this->number++; }
	Int operator-- (int) { return (this->number--); }
	Int operator++ () { return (++this->number); }
	Int operator-- () { return (--this->number); }
	bool operator== (Int variable) { return (this->number == variable.number); }
	bool operator> (Int variable) { return (this->number > variable.number); }
	bool operator< (Int variable) { return (this->number < variable.number); }
	bool operator!= (Int variable) { return (this->number != variable.number); }
	bool operator>= (Int variable) { return (this->number >= variable.number); }
	bool operator<= (Int variable) { return (this->number <= variable.number); }
};

class Fraction {
	double chislo;
public:
	Fraction(double x) { this->chislo = x; }
	Fraction operator+ (Fraction a) { return (this->chislo + a.chislo); }
	Fraction operator- (Fraction a) { return (this->chislo - a.chislo); }
	Fraction operator* (Fraction a) { return (this->chislo * a.chislo); }
	Fraction operator/ (Fraction a) { return (this->chislo / a.chislo); }
	Fraction operator++ (int) { return (this->chislo += 0.1); }
	Fraction operator-- (int) { return (this->chislo -= 0.1); }
	Fraction operator++ () { return (++this->chislo); }
	Fraction operator-- () { return (--this->chislo); }
	void output() { cout << chislo << endl; }
};

class Rect {
	double length;
	double width;
public:
	Rect(double l, double w) { this->length = l; this->width = w; }
	Rect(double square) { this->length = this->width = square; }
	void output() { cout << "Length = " << length << "\tWidth = " << width << endl; }
	double rect_area() { return (length * width); }
};

void lab5_1() {
	Int a = 5;
	a.output(); a++;
	a.output(); a += 6;
	a.output(); a = a - 5;
	a.output();
}

void lab5_2() {
	Fraction a(5), b(10), d(3);
	Fraction c = ((a + b) / (d * 5));
	c.output(); c++; c.output();
}

void lab5_3() {
	Rect a(5), b(1, 4);
	a.output(); b.output();
	Rect c = a.rect_area();
	cout << "a.rect_area = " << a.rect_area() << endl;
	c.output();
}