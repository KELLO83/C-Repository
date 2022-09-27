#include <iostream>
#include <format>
using namespace std;

int main()
{
	int n1, n2;
	char user_operator;
	cout << "1st Operand";
	cin >> n1;
	cout << "2nd Operand";
	cin >> n2;
	cout << "Operator=";
	cin >> user_operator;

	switch (user_operator) {
	case '+':
		cout << format("{} + {} = {}", n1, n2, n1 + n2);
		break;
	case '*':
		cout << format("{} * {} = {}", n1, n2, n1 * n2);
		break;
	case '-':
		cout << format("{} - {} = {}", n1, n2, n1 - n2);
		break;
	case '/':
		cout << format("{} / {} = {}", n1, n2, n1 / n2);
		break;
		
	case '%':
		cout << format("{} % {} = {}", n1, n2, n1% n2);
		break;




	}
}