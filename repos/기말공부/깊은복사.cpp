#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Person { 
	char* name;
	int id;
public:
	Person(int id, const char* name); 
	~Person(); 
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
	Person(const Person& p);
};

Person::Person(const Person& p) { //깊은복사로 복사하기
	this->id = p.id;
	int len_ = strlen(p.name);
	(* this).name = new char[len_ + 1];
	strcpy(this->name, p.name);

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
	Person c1(1923, "kello");
	c1.show();
	Person c2(c1);
	c2.show();



}