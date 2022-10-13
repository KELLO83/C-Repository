#include <iostream>
#include <format>
#include "Subtract.h"

using namespace std;
int Subtract::Sub(int n1, int n2) {
	this->n1 = n1;
	this->n2 = n2;
	cout << format("{} - {} = {}", n1, n2, n1 - n2);

	return n1 - n2;

}