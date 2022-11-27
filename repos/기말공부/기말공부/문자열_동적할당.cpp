#include <iostream>
#include <string>
using namespace std;

int main() {
	string* p = new string("C++");
	cout << p << endl;
	cout << *p << endl;

	p->append("Great");
	cout << *p << endl;

	string ch = "change stirng";

	p = &ch;

	cout << *p << endl;

	cout << "프로그램을 종료합니다 ";
	delete p;

}