#include <iostream>
#include <string>
#include <iomanip>
#include "Windows.h"

using namespace std;

struct Tree {
	int item;
	Tree* left, * right, * parent;
};

bool _count = true, checkSearch, checkPop;

void inition(Tree*& Btree);

void add(Tree*& Btree);

void output_menu(Tree*& Btree);

void del(Tree*& Btree);

void Search(Tree*& Btree);

int Count_leaves(Tree*& Btree);
void Count_tops(Tree*& Btree, int& count);

void delete_tree(Tree*& Btree);

void output_inor(Tree*& Btree);
void output_preo(Tree*& Btree);
void output_post(Tree*& Btree);
void output(Tree*& Btree, int j, int x);

void push(Tree*& Btree, int x);
Tree* pop(Tree* Btree, int x);
int Search_By_Pop(Tree* Btree, int x);

int Search_By_El(Tree* Btree, int x, int j);
int Search_By_Parent(Tree* Btree, int x);
int Search_By_Chield(Tree* Btree, int x);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Tree* binary_tree = NULL;
	bool f = true;
	int choice;
	inition(binary_tree);
	while (f) {
		int _count_tops = 0;
		cout << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t\tГлавное Меню:\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t1. Добавление элемента\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t2. Вывод дерева\t\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t3. Удаление элемента\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t4. Поиск вершины дерева\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t5. Подсчет вершин дерева\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t6. Подсчет листьев дерева\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t7. Удалить дерево\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << "|\t8. Выход\t\t\t|" << endl;
		cout << "-----------------------------------------" << endl;
		cout << endl;
		cout << "Введите номер операции:";
		cin >> choice;
		system("cls");
		switch (choice) {
		case 1: add(binary_tree); break;
		case 2:	output_menu(binary_tree); break;
		case 3: del(binary_tree); break;
		case 4: Search(binary_tree); break;
		case 5: Count_tops(binary_tree, _count_tops); cout << "Кол - во вершин: " << _count_tops << endl; break;
		case 6: cout << "Кол - во листьев: " << Count_leaves(binary_tree) << endl; break;
		case 7: delete_tree(binary_tree); _count = 0; break;
		case 8: f = false; break;
		default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
		}
	}
	return 0;
}

void inition(Tree*& Btree) {
	_count = true;
	int x;
	cout << "Инициализируйте корень:";
	cin >> x;
	system("cls");
	cout << "Элемент " << x << " инициализирован" << endl;
	Btree = new Tree;
	Btree->item = x;
	Btree->left = Btree->right = Btree->parent = NULL;
}

void add(Tree*& Btree) {
	if (Btree == NULL) {
		cout << "Дерева не существует" << endl << "ИНИЦИАЛИЗИРУЕМ...\n" << endl;
		inition(Btree);
	}
	else {
		int x;
		cout << "Введите новый элемент:";
		cin >> x;
		system("cls");
		push(Btree, x);
		cout << "Элемент " << x << " добавлен в дерево" << endl;
	}
}

void output_menu(Tree*& Btree) {
	if (Btree == NULL) {
		cout << "Дерева не существует" << endl << "ИНИЦИАЛИЗИРУЕМ...\n" << endl;
		inition(Btree);
	}
	else {
		bool f = true;
		int x;
		while (f) {
			cout << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|\t\tМеню вывода:\t\t|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|\t1. Inorder\t\t\t|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|\t2. Preorder\t\t\t|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|\t3. Postorder\t\t\t|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|\t4. В виде дерева\t\t|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "|\t5. Назад\t\t\t|" << endl;
			cout << "-----------------------------------------" << endl;
			cout << endl;
			cout << "Введите номер операции:";
			cin >> x;
			system("cls");
			switch (x) {
			case 1: f = false; output_inor(Btree); break;
			case 2: f = false; output_preo(Btree); break;
			case 3: f = false; output_post(Btree); break;
			case 4: f = false; output(Btree, 0, 1); break;
			case 5: f = false; break;
			default: cout << "Такой операции не существует!!!" << endl << "Введите заново." << endl; break;
			}
		}
	}
}
void output_inor(Tree*& Btree) {
	if (Btree != NULL) {
		output_inor(Btree->left);
		cout << Btree->item << "\t";
		output_inor(Btree->right);
	}
}
void output_preo(Tree*& Btree) {
	if (Btree != NULL) {
		cout << Btree->item << "\t";
		output_inor(Btree->left);
		output_inor(Btree->right);
	}
}
void output_post(Tree*& Btree) {
	if (Btree != NULL) {
		output_inor(Btree->left);
		output_inor(Btree->right);
		cout << Btree->item << "\t";
	}
}
void output(Tree*& Btree, int j, int x) {
	if (Btree != NULL) {
		output(Btree->right, j + 3, x + 1);
		for (int i = 0; i < j; i++) {
			cout << "\t";
		}
		cout << "info=(" << Btree->item << ")-lvl(" << x << ")";
		if (j != 0) {
			cout << "-p(" << Btree->parent->item << ")";
		}
		else {
			cout << "-Корень";
		}
		cout << endl;
		output(Btree->left, j + 3, x + 1);
	}
}

void del(Tree*& Btree) {
	if (Btree == NULL) {
		cout << "Дерева не существует" << endl << "ИНИЦИАЛИЗИРУЕМ...\n" << endl;
		inition(Btree);
	}
	else {
		int x;
		cout << "Введите удаляемый элемент:";
		cin >> x;
		system("cls");
		Search_By_Pop(Btree, x);
		if (checkPop == false) {
			cout << "Элемента " << x << " не существует!!!" << endl;
		}
		else {
			cout << "Элемент " << x << " удален из дерева" << endl;
			Btree = pop(Btree, x);
		}
	}
}

void Search(Tree*& Btree) {
	if (Btree == NULL) {
		cout << "Дерева не существует" << endl << "ИНИЦИАЛИЗИРУЕМ...\n" << endl;
		inition(Btree);
	}
	else {
		int x, Elcheck;
		cout << "Введите искоемый элемент:";
		cin >> x;
		Elcheck = Search_By_El(Btree, x, 1);
		system("cls");
		cout << "Элемент " << x;
		if (checkSearch == false) {
			cout << " не существует!!!" << endl;
		}
		else {
			cout << " находиться на уровне: " << Search_By_El(Btree, x, 1) << endl;
			if (Elcheck == 1) {
				cout << "Левый потомок: ";
				if (Btree->left != nullptr) {
					cout << Btree->left->item << "\t";
				}
				else {
					cout << "Отсустствует!!!\t";
				}
				cout << "Правый потомок: ";
				if (Btree->right != nullptr) {
					cout << Btree->right->item << endl;
				}
				else {
					cout << "Отсустствует!!!\n";
				}
				cout << "\t\tОн корень!!!" << endl;
			}
			else {
				Search_By_Chield(Btree, x);
				cout << "\t\tЕго родитель: " << Search_By_Parent(Btree, x) << endl;
			}
		}
	}
}

int Count_leaves(Tree*& Btree) {
	if (_count == false) {
		cout << "Дерева не существует" << endl << "ИНИЦИАЛИЗИРУЕМ...\n" << endl;
		inition(Btree);
	}
	else {
		int count;
		if ((Btree->left == NULL) && (Btree->right == NULL)) {
			count = 1;
		}
		else {
			count = 0;
		}
		if (Btree->left) {
			count += Count_leaves(Btree->left);
		}
		if (Btree->right) {
			count += Count_leaves(Btree->right);
		}
		return count;
	}
	return 0;
}
void Count_tops(Tree*& Btree, int& count) {
	if (_count == false) {
		cout << "Дерева не существует" << endl << "ИНИЦИАЛИЗИРУЕМ...\n" << endl;
		inition(Btree);
	}
	else {
		if (Btree != NULL) {
			Count_tops(Btree->left, count);
			if (Btree->left != NULL || Btree->right != NULL) {
				count++;
			}
			Count_tops(Btree->right, count);
		}
	}
}

void delete_tree(Tree*& Btree) {
	if (_count == false) {
		cout << "Дерева не существует" << endl << "ИНИЦИАЛИЗИРУЕМ...\n" << endl;
		inition(Btree);
	}
	else {
		if (Btree != NULL) {
			delete_tree(Btree->left);
			delete_tree(Btree->right);
			delete Btree;
			Btree = NULL;
		}
	}
}

int Search_By_El(Tree* Btree, int x, int j) {
	if (Btree != NULL) {
		if (x == Btree->item) {
			checkSearch = true;
			return j;
		}
		else {
			checkSearch = false;
			if ((Btree->item % 2) != 0) {
				return Search_By_El(Btree->left, x, j + 1);
			}
			else if ((Btree->item % 2) == 0) {
				return Search_By_El(Btree->right, x, j + 1);
			}
		}
	}
	return 0;
}
int Search_By_Parent(Tree* Btree, int x) {
	if (x == Btree->item) {
		return Btree->parent->item;
	}
	if ((Btree->item % 2) != 0) {
		return Search_By_Parent(Btree->left, x);
	}
	else if ((Btree->item % 2) == 0) {
		return Search_By_Parent(Btree->right, x);
	}
	return 0;
}
int Search_By_Chield(Tree* Btree, int x) {
	if (Btree != NULL) {
		if (x == Btree->item) {
			cout << "Левый потомок: ";
			if (Btree->left != nullptr) {
				cout << Btree->left->item << "\t";
			}
			else {
				cout << "Отсустствует!!!\t";
			}
			cout << "Правый потомок: ";
			if (Btree->right != nullptr) {
				cout << Btree->right->item << "\n";
			}
			else {
				cout << "Отсустствует!!!\n";
			}
			return Btree->item;
		}
		else {
			if ((Btree->item % 2) != 0) {
				return Search_By_Chield(Btree->left, x);
			}
			else if ((Btree->item % 2) == 0) {
				return Search_By_Chield(Btree->right, x);
			}
		}
	}
	return 0;
}
int Search_By_Pop(Tree* Btree, int x) {
	if (Btree != NULL) {
		if (x == Btree->item) {
			checkPop = true;
			return Btree->item;
		}
		else {
			checkPop = false;
			if ((Btree->item % 2) != 0) {
				return Search_By_Pop(Btree->left, x);
			}
			else {
				return Search_By_Pop(Btree->right, x);
			}
		}
	}
	return 0;
}

void push(Tree*& Btree, int x) {
	if (x == Btree->item) {
		cout << "Такой элемент уже существует!!!" << endl;
	}
	else if (Btree->left != NULL) {
		push(Btree->left, x);
	}
	else if (Btree->right != NULL) {
		push(Btree->right, x);
	}
	else if ((Btree->item % 2) != 0) {
		Btree->left = new Tree;
		Btree->left->parent = Btree;
		Btree->left->left = Btree->left->right = NULL;
		Btree->left->item = x;
	}
	else if ((Btree->item % 2) == 0) {
		Btree->right = new Tree;
		Btree->right->parent = Btree;
		Btree->right->left = Btree->right->right = NULL;
		Btree->right->item = x;
	}
}
Tree* pop(Tree* Btree, int x) {
	if (Btree == NULL) {
		return Btree;
	}
	if (x == Btree->item) {
		Tree* tree = new Tree;
		if (x == Btree->item && Btree->left == nullptr && Btree->right == nullptr) {
			delete Btree;
			Btree = NULL;
			return 0;
		}
		else if (x == Btree->item && Btree->left != nullptr && Btree->right == nullptr) {
			tree = Btree->left;
			tree->parent = Btree->parent;
		}
		else if (x == Btree->item && Btree->right != nullptr && Btree->left == nullptr) {
			tree = Btree->right;
			tree->parent = Btree->parent;
		}
		else if (x == Btree->item && Btree->right != nullptr && Btree->left != nullptr) {
			tree = Btree->right;
			tree->left = Btree->left;
			tree->parent = Btree->parent;
			tree->left->parent = tree;
		}
		delete Btree;
		return tree;
	}
	else if ((Btree->item % 2) != 0) {
		Btree->left = pop(Btree->left, x);
	}
	else if ((Btree->item % 2) == 0) {
		Btree->right = pop(Btree->right, x);
	}
	return Btree;
}