#include <iostream>
#include <algorithm>
using namespace std;

int calc(int a, int b) {
	return a + b;
}
double calc(double a, double b) {
	if (a < b) {
		swap(a, b);
	}
	return a / b;
}
long calc(long a, long b) {
	return a * b;
}
float calc(float a, float b) {
	return a - b;
}

int main() {

	cout << calc(3, 5) << endl;
	cout << calc(5.0, 2.0) << endl;
	cout << calc(3L, 5L) << endl;
	cout << calc(3.0f, 2.0f) << endl;


}