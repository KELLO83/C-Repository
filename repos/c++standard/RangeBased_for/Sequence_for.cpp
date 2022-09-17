#include <iostream>
#include <format>
using namespace std;
int main() {
	int Sequence[5] = { 1,2,3,4,5 };

	for (auto n : Sequence) {
		cout << n<<endl;

	}
	cout << endl;
	for (auto& n : Sequence) { //참조자를 통한 Sequence 반복문
		cout << n << endl;
	}
}