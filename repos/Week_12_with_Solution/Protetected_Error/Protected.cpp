
#include <iostream>
using namespace std;

class Base {
private:
	int k = 10;

protected:
	int a = 5;
	void setA(int a) { this->a = a; }
	void showA() { cout << a; }
};

class Derived : protected Base {
protected:
	int b = 10;
	void setB(int b) { this->b = b; }
	void showB() { cout << b; }
};


int main() {
	Derived x;
	x.a = 5;
	x.setA(10);
	x.showA();
	x.b = 10;
	x.setB(10);
	x.showB();


}