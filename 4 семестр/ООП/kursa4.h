#pragma once
void blue(char temp) {
	SetConsoleTextAttribute(out, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout << temp;
	SetConsoleTextAttribute(out, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void returnMenu(str Where, int choice) {
	str sCin;
	if (choice == 1) {
		yellow("������� ENTER ��� ����������� � " + Where + "\n");
		cin.ignore(); getline(cin, sCin); system("cls");
	}
	else {
		yellow("������� ENTER ��� ����������� � " + Where + "\n");
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
	red(" / \\              "); dark_blue("����� �����"); red("              \\.\n");
	red("|   |                                      |.\n");
	red(" \\_ |       "); dark_blue("1. ������ � ����������"); red("         |.\n");
	red("    |                                      |.\n");
	red("    |       "); dark_blue("2. ������ � �����"); red("              |.\n");
	red("    |                                      |.\n");
	red("    |       "); dark_blue("3. �����"); red("                       |.\n");
	red("    |   ___________________________________|___\n");
	red("    |  /                                      /.\n");
	red("    \\_/______________________________________/.\n");
}
void Main_Menu() {
	magenta("                     ,---.           ,---.   \n");
	magenta("                    / /^`.\\.--''''-./,'^\\ \\ \n");
	magenta("                    \\ \\    _       _    / /  "); red("\t\t\t\t\t\t������� ����:\n");
	magenta("                     `./  / __   __ \\  \\,'   \n");
	magenta("                      /    /_O)_(_O\\    \\     "); green("\t\t\t\t\t1. ������ �����\n");
	magenta("                      |  .-'  ___  `-.  |  \n");
	magenta("                   .--|       \\_/       |--.  "); green("\t\t\t\t\t2. ��������� � ������ �����\n");
	magenta("                 ,'    \\   \\   |   /   /    `.\n");
	magenta("                /       `.  `--^--'  ,'       \\"); green("\t\t\t\t\t3. ������� ������ ����� � �������\n");
	magenta("             .-^^^^^-.    `--.___.--'     .-^^^^^-.\n");
	magenta(".-----------/         \\------------------/         \\--------------."); green("\t\t4. �����\n");
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
	wcscat_s(buff, L"/Desktop/������");
	wcscat_s(input, L"/Desktop/������/input.txt");
	wcscat_s(output, L"/Desktop/������/output.txt");

	fstream sin; ofstream sout;

	str sWord, tempWord, sCin;
	bool f = true, f2 = true, checkInit = false, checkWord = false, checkTranslate = false;

	int n = 38, size;

	MorseCode* ABC = new MorseCode[n];

	ABC[0] = MorseCode('�', '�', "�-");
	ABC[1] = MorseCode('�', '�', "-���");
	ABC[2] = MorseCode('�', '�', "�---");
	ABC[3] = MorseCode('�', '�', "--�");
	ABC[4] = MorseCode('�', '�', "-��");
	ABC[5] = MorseCode('�', '�', "�");
	ABC[6] = MorseCode('�', '�', "�");
	ABC[7] = MorseCode('�', '�', "���-");
	ABC[8] = MorseCode('�', '�', "--��");
	ABC[9] = MorseCode('�', '�', "�-");
	ABC[10] = MorseCode('�', '�', "�---");
	ABC[11] = MorseCode('�', '�', "-�-");
	ABC[12] = MorseCode('�', '�', "�-��");
	ABC[13] = MorseCode('�', '�', "--");
	ABC[14] = MorseCode('�', '�', "-�");
	ABC[15] = MorseCode('�', '�', "---");
	ABC[16] = MorseCode('�', '�', "�--�");
	ABC[17] = MorseCode('�', '�', "�-�");
	ABC[18] = MorseCode('�', '�', "���");
	ABC[19] = MorseCode('�', '�', "-");
	ABC[20] = MorseCode('�', '�', "��-");
	ABC[21] = MorseCode('�', '�', "��-�");
	ABC[22] = MorseCode('�', '�', "����");
	ABC[23] = MorseCode('�', '�', "-�-�");
	ABC[24] = MorseCode('�', '�', "---�");
	ABC[25] = MorseCode('�', '�', "----");
	ABC[26] = MorseCode('�', '�', "--�-");
	ABC[27] = MorseCode('�', '�', "-��-");
	ABC[28] = MorseCode('�', '�', "-�--");
	ABC[29] = MorseCode('�', '�', "-��-");
	ABC[30] = MorseCode('�', '�', "��-�");
	ABC[31] = MorseCode('�', '�', "��--");
	ABC[32] = MorseCode('�', '�', "�-�-");
	ABC[33] = MorseCode('?', '?', "��--��");
	ABC[34] = MorseCode('!', '!', "--��--");
	ABC[35] = MorseCode('.', '.', "������");
	ABC[36] = MorseCode('-', '-', "-����-");
	ABC[37] = MorseCode(',', ',', "�-�-�-");

	while (f) {
		Main_Menu();
		yellow("\n������� ����� �������: "); cin >> sCin; system("cls");
		if (!check_number(sCin)) { red("�� ����� �� �����!!!\n"); returnMenu("������� ����", 1); }
		else
			switch (atoi(sCin.c_str())) {
			case 1:
				f2 = true;
				while (f2) {
					Choice(); yellow("\n������� ����� �������: ");
					cin >> sCin; system("cls");
					if (!check_number(sCin)) { red("�� ����� �� �����!!!\n"); returnMenu("���� ������", 1); }
					else
						switch (atoi(sCin.c_str())) {
						case 1:
							if (checkWord == true) {
								red("�� ��� �������� �����, ������ ��� ��������?\n1 - ��\t\t2 - ���\n");
								cin.ignore(); getline(cin, sCin); system("cls");
								if (sCin == "1") {
									tempWord.clear();
									checkTranslate = false; checkInit = true; checkWord = true;
									yellow("������� �����: "); getline(cin, sWord);
									size = sWord.length(); system("cls");
									yellow("�� ��������: "); cout << sWord << endl; f2 = false;
									returnMenu("������� ����", 2);
								}
								else if (sCin == "2") { f2 = false; system("cls"); }
								else { red("������ �����!!!\n"); returnMenu("���� ������", 1); }
							}
							else {
								checkInit = true; checkWord = true;
								yellow("������� �����: "); cin.ignore(); getline(cin, sWord);
								size = sWord.length(); system("cls");
								yellow("�� ��������: "); cout << sWord << endl; f2 = false;
								returnMenu("������� ����", 2);
							}
							break;
						case 2:
							if (checkWord == true) {
								red("�� ��� �������� �����, ������ ��� ��������?\n1 - ��\t\t2 - ���\n");
								cin.ignore(); getline(cin, sCin); system("cls");
								if (sCin == "1") {
									tempWord.clear();
									checkTranslate = false; checkInit = true; checkWord = true;
									sin.open(input);
									if (!sin) {
										red("���� �� ������, ������� � ����������, � ���������!!!\n");
										returnMenu("������� ����", 2); f2 = false;
									}
									else {
										while (!sin.eof()) { getline(sin, sWord); }
										sin.close(); size = sWord.length();
										yellow("�� ��������: "); cout << sWord << endl; f2 = false;
										returnMenu("������� ����", 2);
									}
								}
								else if (sCin == "2") { f2 = false; system("cls"); }
								else { red("������ �����!!!\n"); returnMenu("���� ������", 1); }
							}
							else {
								checkInit = true; checkWord = true;
								sin.open(input);
								if (!sin) {
									red("���� �� ������, ������� � ����������, � ��������� ��� ������!!!\n");
									returnMenu("������� ����", 2);
								}
								else {
									while (!sin.eof()) { getline(sin, sWord); }
									sin.close(); size = sWord.length();
									yellow("�� ��������: "); cout << sWord << endl; f2 = false;
									returnMenu("������� ����", 2);
								}
							}
							break;
						case 3: f2 = false; break;
						default:
							red("����� �������� �� ����������!!!\n������� ������.\n");
							returnMenu("������� ����", 1);
							break;
						}
				}
				break;
			case 2:
				if (!checkInit) { red("�� ��� �� ����� �����!!!\n"); returnMenu("������� ����", 1); }
				else {
					if (!checkTranslate) {
						checkTranslate = true;
						for (int i = 0; i < size; i++) {
							for (int j = 0; j < n; j++)
								if (sWord[i] == ABC[j].getSymbolBigCode() || sWord[i] == ABC[j].getSymbolSmallCode())
									tempWord += ABC[j].getMorseCode();
							if (sWord[i] == ' ') tempWord += " ";
						}
						yellow("�����������: "); cout << sWord; yellow(" ����������!\n");
						returnMenu("������� ����", 1);
					}
					else { red("�� ��� �������� �����������!!!\n"); returnMenu("������� ����", 1); }
				}
				break;
			case 3:
				if (!checkInit) { red("�� ��� �� ����� �����!!!\n"); returnMenu("������� ����", 1); }
				else {
					if (checkTranslate) {
						ABCMorse(ABC);
						yellow("\n���� �����������: "); cout << sWord;
						yellow("\n��� �������: "); cout << tempWord << endl;
						returnMenu("������� ����", 1);
					}
					else { red("�� ��� �� �������� �����!!!\n"); returnMenu("������� ����", 1); }
				}
				break;
			case 4: f = false; break;
			default:
				red("����� �������� �� ����������!!!\n������� ������.\n"); returnMenu("������� ����", 1);
				break;
			}
	}
	f = true;
	while (f) {
		yellow("����� �������� � �����, ����������� � �������?\n");
		red("1 - ��\t2 - ���\n"); cin >> sCin; system("cls");
		if (!check_number(sCin)) { red("�� ����� �� �����!!!\n"); returnMenu("��������� ������", 1); }
		else {
			f = false;
			if (sCin == "1") {
				CreateDirectoryW(buff, NULL);
				sout.open(input); sout << sWord; sout.close();
				sout.open(output); sout << tempWord; sout.close();

				yellow("��� �������� � ����� TXT � ��� �� ������� �����:\n");
				yellow("����������� - input\t������� - output\n");
				yellow("�� ��������!!!\n");
			}
			else if (sCin == "2") { f = false; yellow("�� ��������!!!\n"); }
			else red("�� ��������� ����!!!\n");
		}
	}

	delete[]ABC;
}