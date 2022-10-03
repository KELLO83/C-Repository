#include <iostream>
#include <format>
using namespace std;
class Circle {
public:
	int radious;
	Circle(); //위임생성자
	Circle(int r); //타겟 생성자
	double getArea();
};

Circle::Circle() :Circle(1) {} //위임생성자

Circle::Circle(int r) { //타겟 생성자 호출 r에 1전달
	radious = r;
	cout << format("반지름 {} 원 {:.3f} 생성\n", this->radious, this->getArea());

}
double Circle::getArea() {
	return this->radious * this->radious*3.141592;
}

int main() {
	Circle c1;
	Circle c5(5);


}