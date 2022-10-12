#include <iostream>
#include <format>
using namespace std;
class Circle {
private:
	int radious;
public:
	Circle() { this->radious = 1; }
	Circle(int r) { this->radious = r; }
	double getArea();
	~Circle();
};

double Circle::getArea() {
	return 3.14 * radious * radious;
}
Circle::~Circle()
{
	cout << format("deleted object")<<endl;
}
int main() {
	Circle c1;
	Circle c2(5);
	//객체 포인터로 맴버 접근
	Circle* point_c1 = &c1;
	Circle* point_c2 = &c2;
	//포인터는 메모리의 주소를 저장한다
	cout << format("c1 getArea {:.2f}", (*point_c1).getArea()) << endl;
	cout << format("c2 getArea {:.2f}", point_c2->getArea())<<endl;



}