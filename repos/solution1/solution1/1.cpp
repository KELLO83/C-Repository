#include <iostream>
using namespace std;

int compare(int, int);
int check(int);
int main() {
	int a, b;
	int res;
	cout << "두 개의 정수 입력" << endl;
	cin >> a >> b;
	res=compare(a, b);
	check(res);
	return 0;
}
int compare(int a, int b) {
	if (a > b) {
		cout << a << "중" << b << "중" << " 큰 값은 " << a << "입니다" << endl;
		return a;

	}
	else {
		cout << a << "중" << b << "중" << " 큰 값은 " << b << "입니다" << endl;
		return b;
	}
}
int check(int a) {
	if (a % 3 == false) {
		cout << a << "는" << "3의 배수가 아닙니다";
		return a;
	}
	else
	{
		cout << a << "는" << "3의 배수입니다";
		return a;
	}
}