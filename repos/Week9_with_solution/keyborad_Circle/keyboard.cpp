#include <iostream>

using namespace std;
class Circle {
	int rad;
public:
	Circle(int&);
	void readRadious(int& rad) {
		this->rad = rad;
	}
	int get_rad() {
		return rad;
	}
	double get_area() {
		return 3.14 * rad * rad;
	}
};
Circle::Circle(int& r) {
	rad = r;
}
int main() {
	cout << "반지름을 입력하세요" << endl;
	int input;
	cin >> input;
	
	Circle c1=Circle(input);
	cout << "초기 반지름" << c1.get_rad() <<
		"초기 원넓이"<<c1.get_area() << endl;
	
	int chagne;
	cout << "변경하고자하는 반지름입력" << endl;
	cin >> chagne;
	c1.readRadious(chagne);
	cout << "참조를통한 반지름 변환" << c1.get_rad() << 
		"변경된 원넓이"<<c1.get_area()<<endl;
}