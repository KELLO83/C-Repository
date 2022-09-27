#include <iostream>
#include <format>
using namespace std;

class Mmath {
public:
	Mmath(int t1, int t2);
	int add();
	int sub();
	int mul();
	double divide();
	int mod();
	int n1, n2;


};
Mmath::Mmath(int t1, int t2) {
	n1 = t1;
	n2 = t2;
}
int Mmath::add() {
	return n1 + n2;
}
int Mmath::sub() {
	return n1 - n2;
}
int Mmath::mul() {
	return n1 * n2;
}
double Mmath::divide() {
	return n1 / n2;

}
int Mmath::mod() {
	return n1 % n2;

}
int main() {
	int n1, n2;
	int res;
	char user_operator;
	cout << "1st Operand";
	cin >> n1;
	cout << "2nd Operand";
	cin >> n2;
	cout << "Operaotr=";
	cin >> user_operator;

	Mmath T1(n1, n2);
	cout << format("1st Operand={}", T1.n1) << endl;
	cout << format("2nd Operand={}", T1.n2) << endl;
	cout << format("{} {} {}=?", T1.n1, user_operator, T1.n2) << endl;
	switch (user_operator)
	{
	case '+':
		res = T1.add();
		break;
	case '-':
		res = T1.sub();
		break;
	case '*':
		res = T1.mul();
		break;
	case '/':
		res = T1.divide();
		break;
	case '%':
		res = T1.mod();
		break;
	}
	cout << format("Result={}", res);

}
