#pragma once

struct infoFor5_1 {
    str name = " ";
    int bonus = 0;
    str car = " ";
    int option = 0;
    int salary = 0;
};

struct infoFor5_2 {
    str name, type, processor;
    int count = 0, x = 0, y = 0, ram = 0, hard_disk = 0;
    double speed = 0;
};

class Employee {
    str name;
    str position;
    int salary;
private:
    void Wages() { blue("      " + to_string(salary * 12)); gray(" | "); }
public:
    Employee() { salary = 0; }
    Employee(str name, str pos, int salary) { this->name = name; this->position = pos; this->salary = salary; }
    void outputBase() { gray("| "); cout << "  "; blue(name); gray(" | "); cout << "  "; blue(position); gray(" | "); Wages(); }
};

class Manager : private Employee {
    double annual_bonus;
    str company_car;
    int stock_options;
public:
    Manager() : Employee() { annual_bonus = 0.0; stock_options = 0; }
    Manager(str name, int bonus, str car, int options, int salary) : Employee(name, "Manager", salary) {
        this->annual_bonus = bonus; this->company_car = car; this->stock_options = options;
    }
    void output() {
        outputBase(); blue("     " + to_string(annual_bonus) + " %"); gray(" | ");
        cout << setw(15); blue(company_car); gray(" | "); cout << setw(16); blue(to_string(stock_options)); gray(" |\n");
    }
	Employee::outputBase;
};

class Display {
	str type;
	int count_colors;
	int x_resolution, y_resolution;
public:
	Display() { count_colors = x_resolution = y_resolution = 0; }
	Display(str type, int count, int x, int y) {
		this->type = type; this->count_colors = count;
		this->x_resolution = x; this->y_resolution = y;
	}
	void outputDisplay() {
		cout << setw(12); dark_blue(type); blue(" | ");
		cout << setw(13); dark_blue(to_string(count_colors)); blue(" | ");
		cout << setw(10); dark_blue(to_string(x_resolution)); blue(" | ");
		cout << setw(10); dark_blue(to_string(y_resolution)); blue(" | ");
	}
};

class MotherBoard {
	str processor;
	double speed;
	int ram;
public:
	MotherBoard() { speed = ram = 0; }
	MotherBoard(str processor, double speed, int ram) {
		this->processor = processor; this->speed = speed; this->ram = ram;
	}
	void outputMotherBoard() {
		cout << setw(14); dark_blue(processor); blue(" | ");
		cout << setw(12); dark_blue(to_string(speed)); blue(" | ");
		cout << setw(5); dark_blue(to_string(ram) + " гб"); blue(" |\n");
	}
};

class Computer : public Display, MotherBoard {
	str name;
	int hard_disk;
public:
	Computer() : Display(), MotherBoard() { hard_disk = 0; }
	Computer(infoFor5_2 a) : Display(a.type, a.count, a.x, a.y), MotherBoard(a.processor, a.speed, a.ram) {
		this->name = a.name; this->hard_disk = a.hard_disk;
	}
	void show() {
		blue("| "); cout << setw(12); dark_blue(name); blue(" | "); cout << setw(9); dark_blue(to_string(hard_disk) + " гб"); blue(" | ");
		outputDisplay(); outputMotherBoard();
	}
};

void addM(Manager*& manager, int& n, infoFor5_1 tempInfo) {
    Manager* temp = new Manager[n];

    for (int i = 0; i < n; i++)
        temp[i] = manager[i];

    n++; manager = new Manager[n];
    manager[n - 1] = Manager(tempInfo.name, tempInfo.bonus, tempInfo.car, tempInfo.option, tempInfo.salary);

    for (int i = 0; i < n - 1; i++)
        manager[i] = temp[i];

    delete[]temp;
}

void addC(Computer*& comp, int& n, infoFor5_2 tempInfo) {
    Computer* temp = new Computer[n];

    for (int i = 0; i < n; i++)
        temp[i] = comp[i];

    n++; comp = new Computer[n];
    comp[n - 1] = Computer(tempInfo);

    for (int i = 0; i < n - 1; i++)
        comp[i] = temp[i];

    delete[]temp;
    time_t start, end;
    double dif = 0;
    while (true) {
        start = clock();
        system("color 01");
        system("color 11");
        system("color 21");
        system("color 31");
        system("color 41");
        system("color 51");
        end = clock(); dif += difftime(end, start);
        if ((dif / 1000.0) >= 1)
            break;
    }
}

void lab6_1() {
    infoFor5_1 temp; fstream sin; int n;
    sin.open("5\\manager.txt"); sin >> n;
    Manager* manager = new Manager[n];

    for (int i = 0; i < n; i++) {
        sin.ignore(); getline(sin, temp.name);
        sin >> temp.bonus >> temp.car >> temp.option >> temp.salary;
        manager[i] = Manager(temp.name, temp.bonus, temp.car, temp.option, temp.salary);
    }
    sin.close();

    bool f = true; str s;
    while (f) {
        Main_Menu("Добавить нового менеждера", "Вывести список менеджеров", "Удалить последнего менеджера");
        cin >> s; system("cls");
        if (!check_number(s)) cout << "Вы ввели не число!!!\n";
        else
            switch (atoi(s.c_str())) {
            case 1:
                cout << "Введите "; red("имя"); cout << " нового Менеджера: "; cin.ignore();
                getline(cin, temp.name);
                cout << "Введите "; red("ежегодный бонус"); cout << " нового Менеджера: "; cin >> temp.bonus;
                cout << "Введите "; red("машину"); cout << " нового Менеджера: "; cin >> temp.car;
                cout << "Введите "; red("опционы на акции"); cout << "нового Менеджера : "; cin >> temp.option;
                cout << "Введите "; red("З / П"); cout << " нового Менеджера : "; cin >> temp.salary;
                system("cls"); addM(manager, n, temp); break;
            case 2:
                gray("_____________________________________________________________________________________________________\n");
                gray("|       ФИО       | Должность | З/П за месяц | Ежегодный бонус | Машина компании | Опционы на акции |\n");
                gray("|-----------------|-----------|--------------|-----------------|-----------------|------------------|\n");
                for (int i = 0; i < n; i++)
                    manager[i].output();
                gray("-----------------------------------------------------------------------------------------------------\n");
                cin.ignore(); getline(cin, s); system("cls"); break;
            case 3: n--; break;
            case 4: f = false; break;
            default: yellow("Такой операции не существует!!!\nВведите заново.\n"); break;
            }
    }
    delete[]manager;
}

void lab6_2() {
    infoFor5_2 temp; fstream sin; int n;
    sin.open("5\\computer.txt"); sin >> n;
    Computer* PC = new Computer[n];
    for (int i = 0; i < n; i++) {
        sin.ignore(); getline(sin, temp.name);
        sin >> temp.hard_disk >> temp.type >> temp.count;
        sin >> temp.x >> temp.y;
        sin.ignore(); getline(sin, temp.processor);
        sin >> temp.speed >> temp.ram;
        PC[i] = Computer(temp);
    }
    sin.close();

    bool f = true; str s;
    while (f) {
        Main_Menu("Добавить новый компьютер", "Вывести список компьютеров", "Удалить компьютер");
        cin >> s; system("cls");
        if (!check_number(s)) cout << "Вы ввели не число!!!" << endl;
        else
            switch (atoi(s.c_str())) {
            case 1:
                cout << "Введите "; red("название"); cout << " нового компьютера : "; cin.ignore(); getline(cin, temp.name);
                cout << "Введите "; red("объем жесткого диска"); cout << " : "; cin >> temp.hard_disk;
                cout << "Введите "; red("тип монитора"); cout << " : "; cin >> temp.type;
                cout << "Введите "; red("количество цветов монитора"); cout << " : "; cin >> temp.count;
                cout << "Введите "; red("X и Y монитора"); cout << " : "; cin >> temp.x >> temp.y;
                cout << "Введите "; red("название процессора"); cout << " : "; cin.ignore(); getline(cin, temp.processor);
                cout << "Введите "; red("скорость процессора"); cout << " : "; cin >> temp.speed;
                cout << "Введите "; red("объем оперативной памяти"); cout << " : "; cin >> temp.ram;
                system("cls"); addC(PC, n, temp); break;
            case 2:
                blue("_____________________________________________________________________________________________________________________________\n");
                blue("|   Название   | Hard Disk | Тип монитора | Кол-во цветов | Разр. по Х | Разр. по У | Название проц. | Частота проц |  RAM  |\n");
                blue("|--------------|-----------|--------------|---------------|------------|------------|----------------|--------------|-------|\n");
                for (int i = 0; i < n; i++)
                    PC[i].show();
                cin.ignore(); getline(cin, s); system("cls"); break;
            case 3:	n--; break;
            case 4: f = false; break;
            default: yellow("Такой операции не существует!!!\nВведите заново.\n"); break;
            }
    }

    delete[]PC;
}