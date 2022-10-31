#include "circle.h"

Circle::Circle():Circle(10){}

Circle::Circle(int data) {
	this->rad = data;
}
double Circle::get_area() {
	return 3.14 * this->rad * this->rad;
}