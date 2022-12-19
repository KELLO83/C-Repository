#include <iostream>
using namespace std;
class Circle;
class Circle_class_Manger {
public:  //public 까먹지말기
	void show(Circle& p); // 항상 Circle 클래스 밑에서 함수 본체 만들기
};
class Circle_function_Manger {
public: // Public 써주기
	void show(Circle& p); // Circle클래스 밑에허 함수 본체 정의
};
class Circle {
	int radious;
public:
	Circle() : Circle(1){};
	Circle(int r) {
		this->radious = r;
	};
	friend Circle_class_Manger;
	friend void Circle_function_Manger::show(Circle &p);
	friend void show(Circle& k);
};
void Circle_function_Manger::show(Circle& p) {
	cout << "Cirlce_function_Manger호출" << p.radious << endl;
}
void show(Circle& k) {
	cout << "일반 외부함수 호출" << k.radious << endl;
}
void Circle_class_Manger::show(Circle& p) {
	cout << "Circle_class_Manger호출" << p.radious << endl;
}

int main() {
	Circle* p = new Circle;
	Circle_class_Manger c1;
	Circle_function_Manger c2;

	show(*p);
	c1.show(*p);
	c2.show(*p);


}