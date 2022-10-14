#pragma once
#include "Calc.h"
#include "Add.h"
#include "Sub.h"
#include <iostream>
#include <format>
using namespace std;
void Calc::run()
{
	int user_input;
	int data[2];
	while (true) {
		cout << format("1.+연산\n2.-연산");
		cin >> user_input;
		cout << format("정수 2개 입력");
		cin >> data[0] >> data[1];
		if (user_input == 1) {
			Sub su(data[0], data[1]);
			su.sub();
			break;
		}
		else if (user_input == 2) {
			Adder ad(data[0], data[1]);
			ad.add();
			break;
		}
		else
		{
			cout << format("1또는 2를 입력해주세요");
			continue;
		}
	}
	
}
