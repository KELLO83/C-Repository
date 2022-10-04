#include <iostream>
#include <format>
using namespace std;
class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	~Point();
	void show() {
		cout << format("x= {} y= {}\n", x, y);
	}
};

Point::Point() :Point(0, 0) {} //위임생성자
Point::Point(int a, int b)//타겟 생성자
	:x(a) ,y(b) {}// x=a y=b
Point::~Point() {
	cout << format("deleted\n");
}
int main() {
	Point c1;
	Point c2(5, 3);
	c1.show();
	c2.show();
}