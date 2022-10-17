#include <iostream>
#include <format>
using namespace std;
int main() {
		int a = 3, b = 10;

		double c = 3.0;

		cout << format("b/a {} ", b / a); //  3 
		cout << format("b/c {} ", b / c); //  3.3


}