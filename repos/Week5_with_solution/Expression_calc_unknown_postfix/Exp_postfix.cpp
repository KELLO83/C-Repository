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
	int integer_n1 = 0, integer_n2 = 0;
	int prefix = 0, postfix = 0;
	char user_operator;
	/*char assingd_operator[10] = { '+','-','*','/','%'};*/
	string assingd_operator = "+-*/%";
	string n1, n2;
	string user_input;
	string buffer;
	string buffer_2;
	int count = 0;
	int res = 0;
	bool quit = false;
	cout << "Expression:";
	cin >> user_input;
	while (true) {//연산자 필터링 필요
		for (int i = 0; i < assingd_operator.length(); i++) {
			if (assingd_operator[i] == user_input[count]) { //종료필요
				user_operator = user_input[count];
				quit = true;
				break;
			}
		}
		if (quit == true) {
			break;
		}
		buffer = user_input[count];
		n1.append(buffer);
		count += 1;

	}
	for (int i = count + 1; i < user_input.length(); i++) {
		buffer_2 = user_input[i];
		n2.append(buffer_2);
	}
	//cout << format("n1={} n2={} operator={}", n1, n2, user_operator) << endl;

	cout << format("{}=", n1);
	cin >> integer_n1;
	cout << format("{}=", n2);
	cin >> integer_n2;





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
		break;
	case '/':
		res = divide(integer_n1, integer_n2);
		break;
	case '%':
		res = mod(integer_n1, integer_n2);
		break;
	}
	prefix = (integer_n1)*(integer_n2);
	postfix = (integer_n1)*(integer_n2);

	cout << format("infix={}({}) {} {}({}) = {}", n1, integer_n1, user_operator
		, n2, integer_n2,res)<<endl;
	cout << format("Prefix=+{}({}){}({}) = {}", n1, integer_n1, n2, integer_n2, ++prefix)<<endl;
	cout << format("Postfix={}({}){}({}) = {}", n1, integer_n1, n2, integer_n2
		,postfix++)<<endl;

	cout << endl << format("Reuslt={}", res);







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
