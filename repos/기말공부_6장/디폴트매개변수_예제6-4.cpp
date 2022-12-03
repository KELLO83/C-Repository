#include <iostream>
using namespace std;


void f(char str = '*', int line = 5, int count = 5) {
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < line; j++) {
			cout << str;
		}
		cout << endl;
	}

	cout << endl;
}

int main() {
	f();
	f('?');
	f('/', 3, 4);

}