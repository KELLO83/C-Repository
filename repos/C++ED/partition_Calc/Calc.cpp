#include <iostream>
#include <format>
#include "Add.H"
#include "calc.h"


void Calc::run() {
	int a;
	int b;
	std::cout << std::format("두개의수를입력");
	std::cin >> a>>b;

	Adder adder(a, b);
	std::cout << adder.process();//덧셈계산
}