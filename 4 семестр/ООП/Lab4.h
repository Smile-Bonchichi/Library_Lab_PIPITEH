#pragma once

struct infoFor3__1_2_3 { int plain = 0; int mountain = 0; int desert = 0; };

class Kamaz_1 {
	str name;
	infoFor3__1_2_3 S;
public:
	void init(str name, infoFor3__1_2_3 s) { this->name = name; this->S = s; }
	int getSpeed(int choice) {
		if (choice == 1) return this->S.plain;
		else if (choice == 2) return this->S.mountain;
		else return this->S.desert;
	}
	void output() {
		cout << "Название Камаза: " << name << endl;
		cout << "Скорость в равнинах: " << S.plain << endl;
		cout << "Скорость в горах: " << S.mountain << endl;
		cout << "Скорость в пустыне: " << S.desert << endl;
	}
};

class Tatra_1 { 
	str name;
	infoFor3__1_2_3 S;
public:
	void init(str name, infoFor3__1_2_3 s) { this->name = name; this->S = s; }
	int getSpeed(int choice) {
		if (choice == 1) return this->S.plain;
		else if (choice == 2) return this->S.mountain;
		else return this->S.desert;
	}
	void output() {
		cout << "Название Татры: " << name << endl;
		cout << "Скорость в равнинах: " << S.plain << endl;
		cout << "Скорость в горах: " << S.mountain << endl;
		cout << "Скорость в пустыне: " << S.desert << endl;
	}
};

int FrCreater(int K, int T) {
	if (K > T) return 1;
	else if (K == T) return 0;
	else if (K < T) return -1;
	
	return 0;
}

class Kamaz_2 {
	str name;
	infoFor3__1_2_3 S;
public:
	void init(str name, infoFor3__1_2_3 s) { this->name = name; this->S = s; }
	void output() {
		cout << "Название Камаза: " << name << endl;
		cout << "Скорость в равнинах: " << S.plain << endl;
		cout << "Скорость в горах: " << S.mountain << endl;
		cout << "Скорость в пустыне: " << S.desert << endl;
	}
	friend int FrCreater(Kamaz_2& K, Tatra_2& T, int choice);
};

class Tatra_2 {
	str name;
	infoFor3__1_2_3 S;
public:
	void init(str name, infoFor3__1_2_3 s) { this->name = name; this->S = s; }
	void output() {
		cout << "Название Татры: " << name << endl;
		cout << "Скорость в равнинах: " << S.plain << endl;
		cout << "Скорость в горах: " << S.mountain << endl;
		cout << "Скорость в пустыне: " << S.desert << endl;
	}
	friend int FrCreater(Kamaz_2& K, Tatra_2& T, int choice);
};

int FrCreater(Kamaz_2& K, Tatra_2& T, int choice) {
	if (choice == 1) {
		if (K.S.plain > T.S.plain) return 1;
		else if (K.S.plain == T.S.plain) return 0;
		else if (K.S.plain < T.S.plain) return -1;
	} else if (choice == 2) {
		if (K.S.mountain > T.S.mountain) return 1;
		else if (K.S.mountain == T.S.mountain) return 0;
		else if (K.S.mountain < T.S.mountain) return -1;
	} else if (choice == 3) {
		if (K.S.desert > T.S.desert) return 1;
		else if (K.S.desert == T.S.desert) return 0;
		else if (K.S.desert < T.S.desert) return -1;
	}
	return 0;
}

class Kamaz_3 {
	str name;
	infoFor3__1_2_3 S;
public:
	void init(str name, infoFor3__1_2_3 s) { this->name = name; this->S = s; }
	void output() {
		cout << "Название Камаза: " << name << endl;
		cout << "Скорость в равнинах: " << S.plain << endl;
		cout << "Скорость в горах: " << S.mountain << endl;
		cout << "Скорость в пустыне: " << S.desert << endl;
	}
	friend class Tatra_3;
};

class Tatra_3 {
	str name;
	infoFor3__1_2_3 S;
public:
	void init(str name, infoFor3__1_2_3 s) { this->name = name; this->S = s; }
	void output() {
		cout << "Название Татры: " << name << endl;
		cout << "Скорость в равнинах: " << S.plain << endl;
		cout << "Скорость в горах: " << S.mountain << endl;
		cout << "Скорость в пустыне: " << S.desert << endl;
	}
	int FrCreater(Kamaz_3& K, int choice) {
		if (choice == 1) {
			if (K.S.plain > this->S.plain) return 1;
			else if (K.S.plain == this->S.plain) return 0;
			else if (K.S.plain < this->S.plain) return -1;
		} else if (choice == 2) {
			if (K.S.mountain > this->S.mountain) return 1;
			else if (K.S.mountain == this->S.mountain) return 0;
			else if (K.S.mountain < this->S.mountain) return -1;
		} else if (choice == 3) {
			if (K.S.desert > this->S.desert) return 1;
			else if (K.S.desert == this->S.desert) return 0;
			else if (K.S.desert < this->S.desert) return -1;
		}
		return 0;
	}
};

void lab4_1() {
	Kamaz_1 K1; infoFor3__1_2_3 K1S;
	K1S.plain = 250; K1S.mountain = 230; K1S.desert = 240;

	Tatra_1 T1; infoFor3__1_2_3 T1S;
	T1S.plain = 230; T1S.mountain = 250; T1S.desert = 240;

	K1.init("K1", K1S); T1.init("T1", T1S);

	K1.output(); cout << "\n\n"; T1.output();
				 cout << "\n\n";

	if (FrCreater(K1.getSpeed(1), T1.getSpeed(1)) == 1) cout << "Камаз быстрее Татры на равнинах!!!\n";
	else if (FrCreater(K1.getSpeed(1), T1.getSpeed(1)) == 0) cout << "Камаз и Татра равны по скорости на равнинах!!!\n";
	else cout << "Татра быстрее Kамаза на равнинах!!!\n\n";

	if (FrCreater(K1.getSpeed(2), T1.getSpeed(2)) == 1) cout << "Камаз быстрее Татры в горах!!!\n";
	else if (FrCreater(K1.getSpeed(2), T1.getSpeed(2)) == 0) cout << "Камаз и Татра равны по скорости в горах!!!\n";
	else cout << "Татра быстрее Kамаза в горах!!!\n\n";

	if (FrCreater(K1.getSpeed(3), T1.getSpeed(3)) == 1) cout << "Камаз быстрее Татры в пустыне!!!\n";
	else if (FrCreater(K1.getSpeed(3), T1.getSpeed(3)) == 0) cout << "Камаз и Татра равны по скорости в пустыне!!!\n";
	else cout << "Татра быстрее Kамаза в пустыне!!!\n";
}

void lab4_2() {
	Kamaz_2 K1; infoFor3__1_2_3 K1S;
	K1S.plain = 250; K1S.mountain = 230; K1S.desert = 240;

	Tatra_2 T1; infoFor3__1_2_3 T1S;
	T1S.plain = 230; T1S.mountain = 250; T1S.desert = 240;

	K1.init("K1", K1S); T1.init("T1", T1S);

	K1.output(); cout << "\n\n"; T1.output();
				 cout << "\n\n";

	if (FrCreater(K1, T1, 1) == 1) cout << "Камаз быстрее Татры на равнинах!!!\n";
	else if (FrCreater(K1, T1, 1) == 0) cout << "Камаз и Татра равны по скорости на равнинах!!!\n";
	else cout << "Татра быстрее Kамаза на равнинах!!!\n\n";

	if (FrCreater(K1, T1, 2) == 1) cout << "Камаз быстрее Татры в горах!!!\n";
	else if (FrCreater(K1, T1, 2) == 0) cout << "Камаз и Татра равны по скорости в горах!!!\n";
	else cout << "Татра быстрее Kамаза в горах!!!\n\n";
				
	if (FrCreater(K1, T1, 3) == 1) cout << "Камаз быстрее Татры в пустыне!!!\n";
	else if (FrCreater(K1, T1, 3) == 0) cout << "Камаз и Татра равны по скорости в пустыне!!!\n";
	else cout << "Татра быстрее Kамаза в пустыне!!!\n";
}

void lab4_3() {
	Kamaz_3 K1; infoFor3__1_2_3 K1S;
	K1S.plain = 250; K1S.mountain = 230; K1S.desert = 240;

	Tatra_3 T1; infoFor3__1_2_3 T1S;
	T1S.plain = 230; T1S.mountain = 250; T1S.desert = 240;

	K1.init("K1", K1S); T1.init("T1", T1S);

	K1.output(); cout << "\n\n"; T1.output();
				 cout << "\n\n";

	if (T1.FrCreater(K1, 1) == 1) cout << "Камаз быстрее Татры на равнинах!!!\n";
	else if (T1.FrCreater(K1, 1) == 0) cout << "Камаз и Татра равны по скорости на равнинах!!!\n";
	else cout << "Татра быстрее Kамаза на равнинах!!!\n\n";

	if (T1.FrCreater(K1, 2) == 1) cout << "Камаз быстрее Татры в горах!!!\n";
	else if (T1.FrCreater(K1, 2) == 0) cout << "Камаз и Татра равны по скорости в горах!!!\n";
	else cout << "Татра быстрее Kамаза в горах!!!\n\n";

	if (T1.FrCreater(K1, 3) == 1) cout << "Камаз быстрее Татры в пустыне!!!\n";
	else if (T1.FrCreater(K1, 3) == 0) cout << "Камаз и Татра равны по скорости в пустыне!!!\n";
	else cout << "Татра быстрее Kамаза в пустыне!!!\n";
}