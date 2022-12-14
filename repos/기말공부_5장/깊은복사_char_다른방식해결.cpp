#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Person {
	char* name;
	int id;
public:
	Person(const char* name, int id) {
		this->name = (char*)name;
		this->id = id;
	}
	Person(const Person& p) {
		// 나의 해결책
		this->id = p.id;
		char* q = new char;
		strcpy(q, p.name);
		this->name = q;
		/* 책내용
		this->id = p.id;
		int len = strlen(p.name);
		this->name = new char[len + 1]; //복사하는 객체의 name을 동적할당한다
		strcpy(this->name, p.name); //이후 copy
		*/
	}
	void change_name(const char* name) {
		this->name = (char*)name;
	}
	void show() {
		cout << "이름은" << this->name << endl;
		cout << "id" << this->id << endl;
	}
};
int main() {
	Person* p1 = new Person("kello", 35);
	p1->show();
	Person* p2 = new Person(*p1);
	p2->show();

	p2->change_name("change_name");
	p2->show();
	delete p1;
	cout << "p2가 살아있니??" << endl;
	p2->show();



}