#include <iostream>
using namespace std;

void test(const char* name) {
	cout << "name시작주소" << &name << endl;
	cout<< "전달한 이름은?" << name << endl;
}
int main() {
	test("kello");
}