#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void f(string user = "*", int line = 5, int Ptr_count = 5) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < Ptr_count; j++) {
			cout << user;
		} 
		cout << endl;
	}
	cout << endl;
}
int main() {
	f();
	f("?");
	f("@", 3);
	f("@", 3, 4);

}