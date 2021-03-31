#pragma once
#define str string

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <iterator>
#include "conio.h"
#include "Windows.h"

using namespace std;
const double PI = 3.14;

bool check_number(str s) {
	if (atoi(s.c_str()) || s == "0") return true;
	else return false;
}