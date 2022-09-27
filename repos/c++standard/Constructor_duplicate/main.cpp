#include <format>
#include <iostream>

using namespace std;

class Circle {
	int radious;
	Circle();//위임생성자:
	Circle(int r);//타겟 생성자
	double getArea();
};
Circle::Circle() : Circle(1) {} //위임생성자

Circle::Circle(int r) {
	radious = r;
	cout << format("반지름{}인 원{}생성",radious, getArea());

}
double Circle::getArea() {
	return 3.14 * radious * radious;
}

int main() {
	Circle c1();
	Circle c2();

}