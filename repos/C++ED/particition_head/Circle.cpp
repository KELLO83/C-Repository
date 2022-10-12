#include <iostream>
#include <format>
#include "Circle.h"
using namespace std;
Circle::Circle() {
	radious = 1;
	cout << format("반지름 {}인 원생성", radious,getArea())<<endl;

}
Circle::Circle(int r) {
	radious = r;
	cout << format("반지름 {}인 넓이 {}원생성", radious,this->getArea()) << endl;

}
double Circle::getArea() {
	return 3.14 * radious * radious;
}