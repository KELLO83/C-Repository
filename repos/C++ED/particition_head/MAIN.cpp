#include <iostream>
#include <format>
#include "Circle.h"
using namespace std;

int main() {
	Circle c1;
	Circle c2(5);
	cout << format("c1넓이 {} c2넓이 {}", c1.getArea(), c2.getArea());
}