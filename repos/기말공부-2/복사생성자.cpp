#include <iostream>
using namespace std;
class Circle {
	int radious;
public:
	Circle() { radious = 1; }
	Circle(int r) { radious = r; }
	Circle(const Circle& c); //Ŭ���������� �����Ű������� ������
	void show__() {
		cout << "������" << this->radious << endl;
	}
};
Circle::Circle(const Circle& c) { //���� ������ ����
	this->radious = c.radious;
}
int main() {
	Circle src(30);
	Circle dest(src);
	src.show__();
	dest.show__();

}