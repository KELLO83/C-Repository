#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point(): x(0),y(0) { //매개변수를 주지않을시 x=0 y=0으로 초기화

}
Point::Point(int a, int b) : x(a), y(b) { //매개변수 a,b를받을시 x=a,y=b로 초기화

}

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}