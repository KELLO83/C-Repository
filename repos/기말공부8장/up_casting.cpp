#include <iostream>
#include <cstring>
using namespace std;

class Point {
protected:
	int x=0, y=0;
public:
	void set(int x, int y) {
		this->x = x;
		this->y = y;

	}
	virtual void showPoint() {
		cout << "x= " << x << endl;
		cout << "y= " << y << endl;
		cout << endl;
	}
};

class ColorPoint : public Point {
	string color = "Unknown";
public:
	void setColor(string color="Unknown") {
		this->color = color;
	}
	virtual void showPoint() { // overriding
		Point::showPoint(); // 동적바인딩 해제
		cout << "x= " << this->x <<endl;
		cout << "y=" << this->y << endl;
		cout << "color= " << this->color << endl;
		cout << endl;
	}
	
};
int main() {
	Point p;
	ColorPoint cp;
	cp.set(10, 20);
	cp.showPoint();
	cp.setColor("red");
	cp.showPoint();

	ColorPoint* up_convert = &cp; //업캐스팅
	Point* pbase = up_convert; //업캐스팅

	pbase->set(50, 100);
	pbase->Point::showPoint();

	// 다운캐스팅구현 더 구체화

	ColorPoint* down_convert = (ColorPoint*)pbase; // 다운캐스팅
	down_convert->set(200, 300);
	down_convert->setColor("black");
	down_convert->showPoint();


}