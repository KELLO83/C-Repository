#include <iostream>
#include <format>
#include "Adder.h"
using namespace std;

int Adder::Add(int a, int b) {
	n1 = a;
	n2 = b;
	cout << format("{} + {} = {} ", n1, n2, n1 + n2);
	return n1 + n2;
}