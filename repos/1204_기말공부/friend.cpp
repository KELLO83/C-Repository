#include <iostream>
using namespace std;
class Circle;
class Circle_class_Manger {
public:  //public ���������
	void show(Circle& p); // �׻� Circle Ŭ���� �ؿ��� �Լ� ��ü �����
};
class Circle_function_Manger {
public: // Public ���ֱ�
	void show(Circle& p); // CircleŬ���� �ؿ��� �Լ� ��ü ����
};
class Circle {
	int radious;
public:
	Circle() : Circle(1){};
	Circle(int r) {
		this->radious = r;
	};
	friend Circle_class_Manger;
	friend void Circle_function_Manger::show(Circle &p);
	friend void show(Circle& k);
};
void Circle_function_Manger::show(Circle& p) {
	cout << "Cirlce_function_Mangerȣ��" << p.radious << endl;
}
void show(Circle& k) {
	cout << "�Ϲ� �ܺ��Լ� ȣ��" << k.radious << endl;
}
void Circle_class_Manger::show(Circle& p) {
	cout << "Circle_class_Mangerȣ��" << p.radious << endl;
}

int main() {
	Circle* p = new Circle;
	Circle_class_Manger c1;
	Circle_function_Manger c2;

	show(*p);
	c1.show(*p);
	c2.show(*p);


}