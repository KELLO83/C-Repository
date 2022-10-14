#include <iostream>
#include <format>
using namespace std;
class Circle {
	int radious;
public:
	Circle();
	Circle(int r);
	double getArea() { return 3.14 * radious * radious; }
};

Circle::Circle() :Circle(25) {}//기본 생성자를 호출시 그대신 r=25인 Circle(int r)생성자를 호출한다
// Circle() 생성자 호출=> Circle(25) 호출
Circle::Circle(int r) {
	this->radious = r;
	cout << format("반지름 {}인 원 {}생성", this->radious, this->getArea())<<endl;


}
class calc {
	int n1=1, n2=2;
	//클래스 선언부에서 바로 직접초기화 생성자 호출시 바로 초기화가된다
public:
	calc();//매개변수가 없는 기본생성자
	calc(int, int);//매개변수 int 2개를 받는 생성자
	int add() { return n1 + n2; }

};

calc::calc() :calc(10, 10) {} //위임생성자
calc::calc(int a, int b) { //타겟 생성자
	n1 = a;
	n2 = b;
	cout << format("n1={} n2={} ", n1, n2)<<endl;
	cout << format("res={}", this->add())<<endl;
}

class point {
	int x, y;
public:
	point();
	point(int, int);
	void get_elem();
	~point() { cout << format("deleted")<<endl; }
};

point::point() :x(10), y(10) {} //생성자를 정의할떄는 {}를 써준다 
point::point(int a, int b) :x(a), y(b) {}
void point::get_elem() {
	cout << format("x={} y={}",x,y) << endl;
}
int main() {
	Circle c1;
	Circle c2(5);

	calc t1;
	calc t2(3, 5);

	point Alpha;
	point delta(20, 30);

	point* s = &Alpha;
	(*s).get_elem();

	point* i = &delta;

	i->get_elem();



}