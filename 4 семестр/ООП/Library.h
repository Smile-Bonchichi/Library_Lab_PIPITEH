#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define str string

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <ctime>
#include "conio.h"
#include "Windows.h"
#include <algorithm>

using namespace std;
const double PI = 3.14;

bool check_number(str s) {
	if (atoi(s.c_str()) || s == "0") return true;
	else return false;
}