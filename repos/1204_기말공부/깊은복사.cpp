#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person() {
		this->name = (char *)"unknown";
		this->id = 0;
	};
	Person(char* name, int id) {
		this->name = (char*)name;
		this->id = id;

	}
	Person(const Person& p1) {
		this->id = p1.id;
		char* tmp = new char;
		strcpy(tmp, p1.name);
		this->name = tmp;
	
	}
	~Person() {
	}
	bool change_name(char* name) {
		if (strlen(name) > strlen(this->name)) {
			cout << "메모리 크기 불가";
			return true;
		}
		strcpy(this->name, name);

	}
	void show() {
		cout << "이름" << this->name << endl;
		cout << "학번" << this->id << endl;
	}
};

int main() {
	Person* p1 = new Person((char*)"Hello_world nice", 35);
	Person p2(*p1);

	p1->show();
	p2.show();

	cout << "debug" << endl;

	delete p1;

	p2.change_name((char*)"change");

	p2.show();




}