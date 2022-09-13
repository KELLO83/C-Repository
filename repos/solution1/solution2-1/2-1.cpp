#include <iostream>
using namespace std;

int adder(int x, int y); 

int main() {
	int a, b, sum;
	cin >> a >> b;
	sum = adder(a, b);
	cout << sum;
	return 0;
}

int adder(int x, int y) {
	return x + y;
}