#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "--Shape--"<<endl;
	}
	virtual ~Shape() {
		cout << "Shape �Ҹ�" << endl;
	}
};

class Circle : public Shape {
public:
	virtual void draw() {
		Shape::draw(); 
		cout << "Circle" << endl;
	}
	virtual ~Circle() {
		cout << "Circle �Ҹ�" << endl;
	}
};

int main() {
	//�������ε� ���� 1) ��ĳ�����̵Ǿ���Ѵ�
	Circle* C = new Circle;
	Shape* p = C; // ��ĳ����

	p->Shape::draw(); // �������ε� 
	cout << "�������ε� ����" << endl;
	p->draw(); // �⺻Ŭ������ draw������ �Ļ�Ŭ������ draw ����

	delete p; // �������ε��������� circle�Ҹ� ����� shape�Ҹ� ����Ѵ�
	
	cout << endl;

	delete C;


}
