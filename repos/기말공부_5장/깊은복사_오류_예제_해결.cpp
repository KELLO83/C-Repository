#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& p);
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};
Person::Person(const Person& p) {
	//깊은복사 사용하기
	this->id = p.id;
	int len = strlen(p.name);
	this->name = new char[len + 1]; //복사하는 객체의 name을 동적할당한다
	strcpy(this->name, p.name); //이후 copy

}
Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
Person::~Person() {
	if (name)
		delete[] name;
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae");
	Person daughter(father);
	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ----" << endl;
	father.show();
	daughter.show();

}
