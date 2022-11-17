#include <iostream>
#include <format>
using namespace std;

double calc(double a) {
	return a + a;
}
int calc(int a) {
	return a - a;
}
float calc(float a) {
	return a * a;
}	
long calc(long a) {
	return a /a;
}
int main() {
	cout << calc(3.0)<<endl;
	cout << calc(3)<<endl;
	cout << calc(3.0f) << endl;
	cout << calc(3L) << endl;
	
}