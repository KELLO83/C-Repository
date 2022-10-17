#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class test {
public:
	int x;
	test() { this->x = 1; }
	test(int);
	inline void get_elem(void) { cout << this->x; }
};
test::test(int a) {
	this->x = a;
}

int main() {
	srand(static_cast<unsigned int>(time(NULL)));
	int data;
	int arr[100];
	data = rand() % 35 + 9; //9부터 35+9-1 9~ 43
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 35 + 9;
		cout << arr[i] << " ";
	}
}
