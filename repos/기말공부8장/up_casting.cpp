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
		Point::showPoint(); // �������ε� ����
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

	ColorPoint* up_convert = &cp; //��ĳ����
	Point* pbase = up_convert; //��ĳ����

	pbase->set(50, 100);
	pbase->Point::showPoint();

	// �ٿ�ĳ���ñ��� �� ��üȭ

	ColorPoint* down_convert = (ColorPoint*)pbase; // �ٿ�ĳ����
	down_convert->set(200, 300);
	down_convert->setColor("black");
	down_convert->showPoint();


}