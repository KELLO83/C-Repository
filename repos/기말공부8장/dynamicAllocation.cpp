#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--"<<endl;
	}
	virtual ~Shape() {
		cout << "Shape 소멸" << endl;
	}
};

class Circle : public Shape {
public:
	virtual void draw() {
		Shape::draw(); 
		cout << "Circle" << endl;
	}
	virtual ~Circle() {
		cout << "Circle 소멸" << endl;
	}
};

int main() {
	//동적바인딩 조건 1) 업캐스팅이되어야한다
	Circle* C = new Circle;
	Shape* p = C; // 업캐스팅

	p->Shape::draw(); // 정적바인딩 
	cout << "동적바인딩 실행" << endl;
	p->draw(); // 기본클래스의 draw실행후 파생클래스의 draw 실행

	delete p; // 동적바인디으로인한 circle소멸 출력후 shape소멸 출력한다
	
	cout << endl;

	delete C;


}
