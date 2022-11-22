#include <iostream>
#include <format>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power& operator*= (Power op2); 
	Power& operator /= (Power op2);
};

void Power::show() {
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}

Power& Power::operator *= (Power op2){
	kick = kick * op2.kick; 
	punch = punch * op2.punch;
	return *this; 
}
Power& Power::operator /= (Power op2) {
	kick = kick / op2.kick;
	punch = punch / op2.punch;
	return *this;

}

int main() {
	Power a(3, 5), b(4, 6);
	cout << format("*=호출전") << endl;
	a.show();
	b.show();
	a *= a;
	b *= b;
	cout << format("*=호출후") <<endl;
	a.show();
	b.show();

	cout << endl;

	cout << format("/=호출전") << endl;
	a.show();
	b.show();
	a /= a;
	b /= b;
	cout << format("/=호출후") << endl;
	a.show();
	b.show();
}
