#include <iostream>
using namespace std;
class Circle {
	int radious;
public:
	Circle() { radious = 1; }
	Circle(int r) { radious = r; }
	Circle(const Circle& c); //클래스에대한 참조매개변수를 가진다
	void show__() {
		cout << "반지름" << this->radious << endl;
	}
};
Circle::Circle(const Circle& c) { //복사 생성자 구현
	this->radious = c.radious;
}
int main() {
	Circle src(30);
	Circle dest(src);
	src.show__();
	dest.show__();

}