#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


class Circle {
	int radious;
	char* name;
public:
	Circle() : Circle(1,(char*)"Unknown") {}
	Circle(int r, char* name) {
		this->radious = r;
		this->name = name;
	}
	Circle(Circle& p) { 
		this->radious = p.radious; 	
		this->name = new char;
		strcpy(this->name, p.name);		
	}
	void show() {
		cout << "반지름 -->" << this->radious << endl;
		cout << "이름 -->" << this->name << endl;
		cout << endl;

	}
	friend void increase_radious(Circle& p,int r);
};

void increase_radious(Circle& p,int r) {
	p.radious = r;
}
int main() {
	Circle* p = new Circle;
	Circle* q = new Circle(*p);

	p->show();
	q->show();

	delete p;

	increase_radious(*q, 10);
	q->show();




	


}