#include <iostream>
#include <string.h>
using namespace std;
class Circle; // 전방선언
class Manger {
public:
	void get_area(Circle *q);
};


class Circle {
	int radious;
	string name;
public:
	Circle() { this->radious = 1; this->name = "Unknown"; }
	Circle(int r,string name) { this->radious = r;
	this->name = name;
	}
	~Circle();
	void show() {
		cout << "반지름" << this->radious << endl;
	}
	friend void Manger::get_area(Circle* q);
	friend void get_name(Circle *ke);
};

void Manger::get_area(Circle* q) {
	cout << "넓이" << q->radious * (*q).radious * 3.14 << endl;
};

void get_name(Circle *ke) {
	cout << "이름" << ke->name << endl;
}

Circle::~Circle() {
	cout << "소멸합니다" << endl;
}
int main() {
	// T* pointer = new T;
	Circle* p = new Circle; // 기본생성자
	Circle* q = new Circle(5,"kello"); // 매개변수를 가지는생성자
	Manger testing;
	p->show();
	(*q).show();
	testing.get_area(p);
	get_name(p);
	get_name(q);


	
	delete p;
	delete q;

	cout << "프로그램을 종료합니다" << endl;
	return 0;



}