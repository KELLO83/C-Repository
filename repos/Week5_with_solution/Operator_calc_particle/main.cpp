#include <iostream>
#include <format>
int add(int, int);
int sub(int, int);
int mul(int, int);
double divide(int, int);
int mod(int, int);
using namespace std;
int main() {
	int n1, n2;
	int res;
	char user_Operator;
	cout << "1st Operand";
	cin >> n1;
	cout << "2nd Operand";
	cin >> n2;
	cout << "Operaotr=";
	cin >> user_Operator;
	switch (user_Operator)
	{
	case '+':
		res=add(n1, n2);
		break;
	case '-':
		res=sub(n1, n2);
		break;
	case '*':
		res=mul(n1, n2);
	case '/':
		res=divide(n1, n2);
		break;
	case '%':
		res=mod(n1, n2);
		break;
	}
	cout << format("{} {} {} =?", n1, user_Operator, n2)<<endl;
	cout << format("Result={}", res);

	


}

int add(int a, int b)
{
	
	return a+b;
}

int sub(int a, int b)
{
	
	return a-b;
}

int mul(int a, int b)
{
	
	return a*b;
}

double divide(int a, int b)
{
	
	return static_cast<double>(a) / b;
}

int mod(int a, int b)
{
	
	return a%b;
}
