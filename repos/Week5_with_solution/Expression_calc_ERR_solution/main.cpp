#include <iostream>
#include <format>
#include <cctype>
using namespace std;
int add(int, int);
int sub(int, int);
int mul(int, int);
double divide(int, int);
int mod(int, int);
int main() {
	int integer_n1, integer_n2;
	char user_operator;
	string n1, n2;
	string user_input;
	string buffer;
	string buffer_2;
	int count = 0;
	int res = 0;
	cout << "Expression:";
	cin >> user_input;
	for (int i = 0; i < user_input.length(); i++) 
	{
		if (isdigit(user_input[i])) {
			buffer = user_input[i];
			n1.append(buffer);
			count += 1;

		}
		else if (isdigit(user_input[i])==false) {
			user_operator = user_input[i];
			count += 1;
			break;
		}

	}
	for (int i = count; i < user_input.length(); i++) {
		if (isdigit(user_input[i])) {
			buffer_2 = user_input[i];
			n2.append(buffer_2);

		}
	}
	integer_n1 = stoi(n1);
	integer_n2 = stoi(n2);
	switch (user_operator)
	{
	case '+':
		res = add(integer_n1, integer_n2);
		break;
	case '-':
		res = sub(integer_n1, integer_n2);
		break;
	case '*':
		res = mul(integer_n1, integer_n2);
	case '/':
		res = divide(integer_n1, integer_n2);
		break;
	case '%':
		res = mod(integer_n1, integer_n2);
		break;
	}
	cout << format("Expression={}{}{}", integer_n1,user_operator, integer_n2)<<endl;
	cout << format("{} {} {}=?", integer_n1,user_operator, integer_n2) << endl;
	cout << format("Result={}", res);





}
int add(int a, int b)
{

	return a + b;
}

int sub(int a, int b)
{

	return a - b;
}

int mul(int a, int b)
{

	return a * b;
}

double divide(int a, int b)
{

	return static_cast<double>(a) / b;
}

int mod(int a, int b)
{

	return a % b;
}
