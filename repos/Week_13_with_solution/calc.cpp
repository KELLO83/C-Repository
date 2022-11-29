#include <iostream>
using namespace std;

class Adder {
public:
	int add(int a, int b) { return a + b; }
};

class Subtractor {
public:
	int minus(int a, int b) { return a - b; }
};
class Div {
public:
	double  Divded(int a, int b) { return (double)a / (double)b; }
};

class Multiple {
public:
	int mul(int a, int b) { return a * b; }
};

class Calcualotr : virtual public Adder, virtual public Subtractor, virtual public Div ,virtual public Multiple{
public:
	int calc(char op , int a , int b);
};

int Calcualotr::calc(char op, int a, int b) {
	int res = 0;
	switch (op) {
	case '+':
		res = add(a, b);
		break;
	case '-':
		res = minus(a, b);
		break;
	case '/':
		res = Divded(a, b);
		break;
	case '*':
		res = mul(a, b);
		break;
	}

	return res;
};

int main() {
	Calcualotr c1;
	int a, b;
	cout << "a b ют╥б";
	cin >> a >> b;

	cout << "a+b=" << c1.add(a, b) << endl;
	cout << "a-b=" << c1.minus(a, b) << endl;
	cout << "a/b=" << c1.Divded(a, b) << endl;
	cout << "a*b=" << c1.mul(a, b) << endl;


	

}
