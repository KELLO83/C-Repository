#include <iostream>
#include <string>
using namespace std;

void f(string str="*", int row = 5, int colum = 5) {
	for (int i = 0; i < colum  ; i++) {
		for (int j = 0; j < row  ; j++) {
			cout << str;
		}
		cout << endl;
	}
	cout << endl;
}
int main() {
	f();
	f("@", 3);
	f("&", 1, 5);

	

}