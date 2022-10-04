#include <iostream>
#include <format>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	Circle(int r);
	Circle();
};

Circle::Circle(int r) {
	radius = r;
}
Circle::Circle() {
	radius = 1;
}

int main() {
	Circle pizza(30);
	Circle donut;
}
