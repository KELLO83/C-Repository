#include <iostream>
using namespace std;

class Base {
public:
	int a;
public:
	void setA(int a) { this->a = a; }
public:
	void showA() { cout << a; }
};

class Derived : private Base {
public:
	int b;
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
