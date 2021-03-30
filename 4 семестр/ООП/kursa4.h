#pragma once
void blue(char temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void returnMenu(str Where, int choice) {
	str sCin;
	if (choice == 1) {
		yellow("Нажмите ENTER для возвращения в " + Where + "\n");
		cin.ignore(); getline(cin, sCin); system("cls");
	}
	else {
		yellow("Нажмите ENTER для возвращения в " + Where + "\n");
		getline(cin, sCin); system("cls");
	}
}

class MorseCode {
	char symbolBigCode;
	char symbolSmallCode;
	str morseCode;
public:
	MorseCode() { }
	MorseCode(char sB, char sS, str cC) { this->symbolBigCode = sB; this->symbolSmallCode = sS; this->morseCode = cC; }
	char getSymbolBigCode() { return symbolBigCode; }
	char getSymbolSmallCode() { return symbolSmallCode; }
	str getMorseCode() { return morseCode; }
};

void ABCMorse(MorseCode*& temp) {
	int j = 0;
	red("-----------------------------------------------------------------\n| ");
	for (int i = 0; i < 38; i++) {
		blue(temp[i].getSymbolBigCode()); cout << ", ";
		blue(temp[i].getSymbolSmallCode()); red(" | ");
		cout << setw(6); dark_blue(temp[i].getMorseCode());

		j++;

		if (j != 4) red(" | ");
		else if (j == 4) {
			j = 0;
			red(" |\n-----------------------------------------------------------------\n| ");
		}
		if (i == 37) { cout << setw(31); red(" |"); }
	}
	red("\n-----------------------------------------------------------------\n");
}

void Choice() {
	red("   ________________________________________\n");
	red(" / \\              "); dark_blue("Выбор ввода"); red("              \\.\n");
	red("|   |                                      |.\n");
	red(" \\_ |       "); dark_blue("1. Ввести с клавиатуры"); red("         |.\n");
	red("    |                                      |.\n");
	red("    |       "); dark_blue("2. Ввести с файла"); red("              |.\n");
	red("    |                                      |.\n");
	red("    |       "); dark_blue("3. Назад"); red("                       |.\n");
	red("    |   ___________________________________|___\n");
	red("    |  /                                      /.\n");
	red("    \\_/______________________________________/.\n");
}
void Main_Menu() {
	magenta("                     ,---.           ,---.   \n");
	magenta("                    / /^`.\\.--''''-./,'^\\ \\ \n");
	magenta("                    \\ \\    _       _    / /  "); red("\t\t\t\t\t\tГлавное Меню:\n");
	magenta("                     `./  / __   __ \\  \\,'   \n");
	magenta("                      /    /_O)_(_O\\    \\     "); green("\t\t\t\t\t1. Ввести текст\n");
	magenta("                      |  .-'  ___  `-.  |  \n");
	magenta("                   .--|       \\_/       |--.  "); green("\t\t\t\t\t2. Перевести в Азбуку Морза\n");
	magenta("                 ,'    \\   \\   |   /   /    `.\n");
	magenta("                /       `.  `--^--'  ,'       \\"); green("\t\t\t\t\t3. Вывести Азбуку Морза и перевод\n");
	magenta("             .-^^^^^-.    `--.___.--'     .-^^^^^-.\n");
	magenta(".-----------/         \\------------------/         \\--------------."); green("\t\t4. Выход\n");
	magenta("| .---------\\         /----------------- \\         /------------. |\n");
	magenta("| |          `-`--`--'                    `--'--'-'             | |\n");
	magenta("| |   "); cyan("__      __   ___  | |   ___    ___    _ __ ___     ___"); magenta("    | |\n");
	magenta("| |   "); cyan("\\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\"); magenta("   | |\n");
	magenta("| |    "); cyan("\\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/"); magenta("   | |\n");
	magenta("| |     "); cyan("\\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|"); magenta("   | |\n");
	magenta("| |_____________________________________________________________| |\n");
	magenta("|_________________________________________________________________|\n");
	magenta("                   )__________|__|__________(\n");
	magenta("                  |            ||            |\n");
	magenta("                  |____________||____________|\n");
	magenta("                    ),-----.(      ),-----.(\n");
	magenta("                  ,'   ==.   \\    /  .==    `.\n");
	magenta("                 /            )  (            \\\n");
	magenta("                 `==========='    `==========='  \n");
}

void kursa4() {
	wchar_t buff[MAX_PATH]{ 0 }, input[MAX_PATH]{ 0 }, output[MAX_PATH]{ 0 };
	GetEnvironmentVariableW(L"USERPROFILE", buff, MAX_PATH);
	GetEnvironmentVariableW(L"USERPROFILE", input, MAX_PATH);
	GetEnvironmentVariableW(L"USERPROFILE", output, MAX_PATH);
	wcscat_s(buff, L"/Desktop/Выводы");
	wcscat_s(input, L"/Desktop/Выводы/input.txt");
	wcscat_s(output, L"/Desktop/Выводы/output.txt");

	fstream sin; ofstream sout;

	str sWord, tempWord, sCin;
	bool f = true, f2 = true, checkInit = false, checkWord = false, checkTranslate = false;

	int n = 38, size;

	MorseCode* ABC = new MorseCode[n];

	ABC[0] = MorseCode('А', 'а', "•-");
	ABC[1] = MorseCode('Б', 'б', "-•••");
	ABC[2] = MorseCode('В', 'в', "•---");
	ABC[3] = MorseCode('Г', 'г', "--•");
	ABC[4] = MorseCode('Д', 'д', "-••");
	ABC[5] = MorseCode('Е', 'е', "•");
	ABC[6] = MorseCode('Ё', 'ё', "•");
	ABC[7] = MorseCode('Ж', 'ж', "•••-");
	ABC[8] = MorseCode('З', 'з', "--••");
	ABC[9] = MorseCode('И', 'и', "•-");
	ABC[10] = MorseCode('Й', 'й', "•---");
	ABC[11] = MorseCode('К', 'к', "-•-");
	ABC[12] = MorseCode('Л', 'л', "•-••");
	ABC[13] = MorseCode('М', 'м', "--");
	ABC[14] = MorseCode('Н', 'н', "-•");
	ABC[15] = MorseCode('О', 'о', "---");
	ABC[16] = MorseCode('П', 'П', "•--•");
	ABC[17] = MorseCode('Р', 'Р', "•-•");
	ABC[18] = MorseCode('С', 'С', "•••");
	ABC[19] = MorseCode('Т', 'Т', "-");
	ABC[20] = MorseCode('У', 'у', "••-");
	ABC[21] = MorseCode('Ф', 'ф', "••-•");
	ABC[22] = MorseCode('Х', 'х', "••••");
	ABC[23] = MorseCode('Ц', 'ц', "-•-•");
	ABC[24] = MorseCode('Ч', 'ч', "---•");
	ABC[25] = MorseCode('Ш', 'ш', "----");
	ABC[26] = MorseCode('Щ', 'щ', "--•-");
	ABC[27] = MorseCode('Ъ', 'ъ', "-••-");
	ABC[28] = MorseCode('Ы', 'ы', "-•--");
	ABC[29] = MorseCode('Ь', 'ь', "-••-");
	ABC[30] = MorseCode('Э', 'э', "••-•");
	ABC[31] = MorseCode('Ю', 'ю', "••--");
	ABC[32] = MorseCode('Я', 'я', "•-•-");
	ABC[33] = MorseCode('?', '?', "••--••");
	ABC[34] = MorseCode('!', '!', "--••--");
	ABC[35] = MorseCode('.', '.', "••••••");
	ABC[36] = MorseCode('-', '-', "-••••-");
	ABC[37] = MorseCode(',', ',', "•-•-•-");

	while (f) {
		Main_Menu();
		yellow("\nВведите номер дейсвия: "); cin >> sCin; system("cls");
		if (!check_number(sCin)) { red("Вы ввели не число!!!\n"); returnMenu("главное меню", 1); }
		else
			switch (atoi(sCin.c_str())) {
			case 1:
				f2 = true;
				while (f2) {
					Choice(); yellow("\nВведите номер дейсвия: ");
					cin >> sCin; system("cls");
					if (!check_number(sCin)) { red("Вы ввели не число!!!\n"); returnMenu("меню выбора", 1); }
					else
						switch (atoi(sCin.c_str())) {
						case 1:
							if (checkWord == true) {
								red("Вы уже записали слово, хотите его поменять?\n1 - ДА\t\t2 - НЕТ\n");
								cin.ignore(); getline(cin, sCin); system("cls");
								if (sCin == "1") {
									tempWord.clear();
									checkTranslate = false; checkInit = true; checkWord = true;
									yellow("Введите слово: "); getline(cin, sWord);
									size = sWord.length(); system("cls");
									yellow("Вы записали: "); cout << sWord << endl; f2 = false;
									returnMenu("главное меню", 2);
								}
								else if (sCin == "2") { f2 = false; system("cls"); }
								else { red("Ошибка ввода!!!\n"); returnMenu("меню выбора", 1); }
							}
							else {
								checkInit = true; checkWord = true;
								yellow("Введите слово: "); cin.ignore(); getline(cin, sWord);
								size = sWord.length(); system("cls");
								yellow("Вы записали: "); cout << sWord << endl; f2 = false;
								returnMenu("главное меню", 2);
							}
							break;
						case 2:
							if (checkWord == true) {
								red("Вы уже записали слово, хотите его поменять?\n1 - ДА\t\t2 - НЕТ\n");
								cin.ignore(); getline(cin, sCin); system("cls");
								if (sCin == "1") {
									tempWord.clear();
									checkTranslate = false; checkInit = true; checkWord = true;
									sin.open(input);
									if (!sin) {
										red("Файл не найден, введите с клавиатуры, и сохраните!!!\n");
										returnMenu("главное меню", 2); f2 = false;
									}
									else {
										while (!sin.eof()) { getline(sin, sWord); }
										sin.close(); size = sWord.length();
										yellow("Вы записали: "); cout << sWord << endl; f2 = false;
										returnMenu("главное меню", 2);
									}
								}
								else if (sCin == "2") { f2 = false; system("cls"); }
								else { red("Ошибка ввода!!!\n"); returnMenu("меню выбора", 1); }
							}
							else {
								checkInit = true; checkWord = true;
								sin.open(input);
								if (!sin) {
									red("Файл не найден, введите с клавиатуры, и сохраните при выходе!!!\n");
									returnMenu("главное меню", 2);
								}
								else {
									while (!sin.eof()) { getline(sin, sWord); }
									sin.close(); size = sWord.length();
									yellow("Вы записали: "); cout << sWord << endl; f2 = false;
									returnMenu("главное меню", 2);
								}
							}
							break;
						case 3: f2 = false; break;
						default:
							red("Такой операции не существует!!!\nВведите заново.\n");
							returnMenu("главное меню", 1);
							break;
						}
				}
				break;
			case 2:
				if (!checkInit) { red("Вы еще не ввели слово!!!\n"); returnMenu("главное меню", 1); }
				else {
					if (!checkTranslate) {
						checkTranslate = true;
						for (int i = 0; i < size; i++) {
							for (int j = 0; j < n; j++)
								if (sWord[i] == ABC[j].getSymbolBigCode() || sWord[i] == ABC[j].getSymbolSmallCode())
									tempWord += ABC[j].getMorseCode();
							if (sWord[i] == ' ') tempWord += " ";
						}
						yellow("Предложение: "); cout << sWord; yellow(" переведено!\n");
						returnMenu("главное меню", 1);
					}
					else { red("Вы уже перевели предложение!!!\n"); returnMenu("главное меню", 1); }
				}
				break;
			case 3:
				if (!checkInit) { red("Вы еще не ввели слово!!!\n"); returnMenu("главное меню", 1); }
				else {
					if (checkTranslate) {
						ABCMorse(ABC);
						yellow("\nВаше предложение: "); cout << sWord;
						yellow("\nЕго перевод: "); cout << tempWord << endl;
						returnMenu("главное меню", 1);
					}
					else { red("Вы еще не перевели слово!!!\n"); returnMenu("главное меню", 1); }
				}
				break;
			case 4: f = false; break;
			default:
				red("Такой операции не существует!!!\nВведите заново.\n"); returnMenu("главное меню", 1);
				break;
			}
	}
	f = true;
	while (f) {
		yellow("Будем выводить в файлы, предложение и перевод?\n");
		red("1 - ДА\t2 - НЕТ\n"); cin >> sCin; system("cls");
		if (!check_number(sCin)) { red("Вы ввели не число!!!\n"); returnMenu("категорию выбора", 1); }
		else {
			f = false;
			if (sCin == "1") {
				CreateDirectoryW(buff, NULL);
				sout.open(input); sout << sWord; sout.close();
				sout.open(output); sout << tempWord; sout.close();

				yellow("Все записано в файлы TXT у вас на рабочем столе:\n");
				yellow("Предложение - input\tПеревод - output\n");
				yellow("До свидания!!!\n");
			}
			else if (sCin == "2") { f = false; yellow("До свидания!!!\n"); }
			else red("Не коректный ввод!!!\n");
		}
	}

	delete[]ABC;
}