#include "Circle.h"

void Circle::setradious(int radious) {
	this->radious = radious;
}

double Circle::getArea() {
	return 3.14 * this->radious * this->radious;
}
int Circle::getARadious() {
	return this->radious;
}