#pragma once
class Adder {
	int n1, n2;
public:
	Adder(int a, int b) { n1 = a, n2 = b; }
	int add();
};