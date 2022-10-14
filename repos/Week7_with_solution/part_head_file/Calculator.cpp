#include "Calculator.h"
#include "Adder.h"
#include "Subtract.h"
#include <iostream>
#include <format>

using namespace std;
void Calculator::run() {
	cout << "두개의 수를 입력";
	int a, b;
	cin >> a >> b;
	int user;
	while (true) {
		cout << "1:입력 +연산\n 2:입력시 - 연산";
		cin >> user;
		if (user == 1) {
			Adder adder(a, b);
			break;
		}
		else if (user == 2) {
			Subtract sub(a, b);
			break;
		}
		else {
			cout << format("1또는 2를 입력해주세요");
			continue;
		}
	}



}