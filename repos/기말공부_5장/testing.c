#include <iostream>
using namespace std;

void test(const char* name) {
	cout << "name�����ּ�" << &name << endl;
	cout<< "������ �̸���?" << name << endl;
}
int main() {
	test("kello");
}