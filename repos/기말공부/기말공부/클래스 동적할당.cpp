#include <iostream>
#include <string.h>
using namespace std;
class Circle; // ���漱��
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
		cout << "������" << this->radious << endl;
	}
	friend void Manger::get_area(Circle* q);
	friend void get_name(Circle *ke);
};

void Manger::get_area(Circle* q) {
	cout << "����" << q->radious * (*q).radious * 3.14 << endl;
};

void get_name(Circle *ke) {
	cout << "�̸�" << ke->name << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��մϴ�" << endl;
}
int main() {
	// T* pointer = new T;
	Circle* p = new Circle; // �⺻������
	Circle* q = new Circle(5,"kello"); // �Ű������� �����»�����
	Manger testing;
	p->show();
	(*q).show();
	testing.get_area(p);
	get_name(p);
	get_name(q);


	
	delete p;
	delete q;

	cout << "���α׷��� �����մϴ�" << endl;
	return 0;



}