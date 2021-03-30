#pragma once

struct infoFor2_2 {
	str product_name;
	int wholesale_price = 0;
	int retail_price = 0;
	int count_product = 0;
};

struct infoFor2_3 { str name, dev, date; double memory = 0; };

class Timer {
	int t;
public:
	Timer(int sec) { this->t = sec; }
	Timer(str sec) { t = (atoi(sec.c_str())); }
	Timer(int sec, int min) { t = (min * 60) + sec; }
	void run() { for (int i = 0; i < t; i++, Sleep(1000)) cout << t - i << " секунд осталось до конца!!!\n"; }
};

class Nomenclature {
	infoFor2_2 N;
public:
	Nomenclature(infoFor2_2 temp) { N = temp; }
	void output() {
		cout << "| " << setw(17) << N.product_name << " | ";
		cout << setw(12) << N.wholesale_price << " | ";
		cout << setw(14) << N.retail_price << " | ";
		cout << setw(18) << N.count_product << " |\n";
	}
	int Estimation() { return ((N.retail_price - N.wholesale_price) * N.count_product); }
	str getName() { return N.product_name; }
};

class Soft {
	str name;
	str developer;
	double memory;
	str end_date;
public:
	Soft(str name, str dev, double memory, str date) {
		this->name = name; this->developer = dev;
		this->memory = memory; this->end_date = date;
	}
	void output() {
		cout << "| " << setw(11) << name << " | ";
		cout << setw(11) << developer << " | ";
		cout << setw(20) << memory << " gb | ";
		cout << setw(24) << end_date << " |\n";
	}
	void check() {
		time_t now = time(NULL);
		tm* ltm = localtime(&now);
		str tempday, tempmonth, tempyear;
		
		for (int i = 0; i < 2; i++) tempday.push_back(end_date[i]);
		for (int i = 3; i < 5; i++) tempmonth.push_back(end_date[i]);
		for (int i = 6; i < 10; i++) tempyear.push_back(end_date[i]);
		
		int temp1 = (((1900 + ltm->tm_year) * 365) + ((1 + ltm->tm_mon) * 30) + (ltm->tm_mday));
		int temp2 = ((atoi(tempyear.c_str()) * 365) + (atoi(tempmonth.c_str()) * 30) + atoi(tempday.c_str()));
		
		cout << "До конца лицензии " << name << " осталось " << temp2 - temp1 << " дней\n";
	}
};

void lab3_1() {
	int sec, min;
	str s; bool f = true;
	
	while (f) {
		cout << "Введите секунды и минуты через пробел: ";
		cin >> sec >> min; system("cls");
		
		Timer t1(sec);
		Timer t2(s = to_string(sec));
		Timer t3(sec, min);

		cout << "Объект с конструктором: int\n";
		t1.run(); system("cls");
		cout << "Объект с конструктором: string\n";
		t2.run(); system("cls");
		cout << "Объект с конструктором: int, int\n";
		t3.run(); system("cls");
	}
}

void lab3_2() {
	fstream sin; infoFor2_2 temp;

	sin.open("2\\Product.txt");
	sin >> temp.product_name >> temp.wholesale_price;
	sin >> temp.retail_price >> temp.count_product;
	Nomenclature apple(temp);
	sin >> temp.product_name >> temp.wholesale_price;
	sin >> temp.retail_price >> temp.count_product;
	Nomenclature banana(temp);
	sin >> temp.product_name >> temp.wholesale_price;
	sin >> temp.retail_price >> temp.count_product;
	Nomenclature cherry(temp);
	sin.close();

	cout << "__________________________________________________________________________\n";
	cout << "| Название продукта | Оптовая цена | Розничная цена | Кол - во на складе |\n";
	apple.output(); banana.output(); cherry.output();
	cout << "+------------------------------------------------------------------------+\n\n";
	cout << "Максимальная прибыль от " << apple.getName() << " составляет: " << apple.Estimation() << endl;
	cout << "Максимальная прибыль от " << banana.getName() << " составляет: " << banana.Estimation() << endl;
	cout << "Максимальная прибыль от " << cherry.getName() << " составляет: " << cherry.Estimation() << endl;
}

void lab3_3() {
	fstream sin; infoFor2_3 softinfo;
	sin.open("2\\Soft.txt");

	getline(sin, softinfo.name); getline(sin, softinfo.dev);
	sin >> softinfo.memory; sin.ignore();
	getline(sin, softinfo.date);
	Soft Microsoft(softinfo.name, softinfo.dev, softinfo.memory, softinfo.date);

	getline(sin, softinfo.name); getline(sin, softinfo.dev);
	sin >> softinfo.memory; sin.ignore();
	getline(sin, softinfo.date);
	Soft Linux(softinfo.name, softinfo.dev, softinfo.memory, softinfo.date);

	getline(sin, softinfo.name); getline(sin, softinfo.dev);
	sin >> softinfo.memory; sin.ignore();
	getline(sin, softinfo.date);
	Soft Mac(softinfo.name, softinfo.dev, softinfo.memory, softinfo.date);

	cout << "__________________________________________________________________________________\n";
	cout << "| Название ОС | Разработчик | Занимаемый объем памяти | Дата завершения лицензии |\n";
	Microsoft.output(); Linux.output(); Mac.output();

	cout << endl;

	Microsoft.check(); Linux.check(); Mac.check();
}