#include <iostream>
using namespace std;

class Circle;
class Circle_set;
class Circle {
	int radious;
public:
	Circle() { this->radious = radious; }
	friend void set_radious(Circle* p, int r); //�ܺ��Լ� ����ϱ�
	void show_radious() {
		cout << "������" << this->radious << endl;
	}
	friend Circle_set; // Ŭ������ü�� ������� �����ϱ� 
};
void set_radious(Circle* p, int r) {
	p->radious = r;

}

class Circle_set {
public:
	void set_radious(Circle q , int r);
};
void Circle_set::set_radious(Circle q , int r) {
	q.radious = r;

}

int main() {
	Circle* p = new Circle[3];
	set_radious(&p[0], 5);
	p[0].show_radious();

	Circle_set admin;
	admin.set_radious(p[1], 10);
	p[1].show_radious();





}