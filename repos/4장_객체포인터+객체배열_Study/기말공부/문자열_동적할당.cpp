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

	cout << "���α׷��� �����մϴ� ";
	delete p;

}