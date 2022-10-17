#include <iostream>
using namespace std;
class Circle {
public:
	int rad;
	Circle() { rad = 1; };
	Circle(int a) { rad = a; }
	void get() { cout << rad<<endl; }
};
int main() {
	Circle T1();
	cout << "DEBUG";

}