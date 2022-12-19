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
		this->name = new char[20];
		//this->name = new char;
		//this->name = (char *)"unknown";
		strcpy(this->name, (char*)"test");
		this->id = 0;
	};
	Person(char* name, int id) {
		this->name = (char*)name;
		this->id = id;

	}
	Person(const Person& p1) {
		this->id = p1.id;
		//int len = strlen(p1.name) * sizeof(char);
		//this->name = new char[len+1];
		
		char* tmp = new char[20];
		strcpy(tmp, p1.name);
		this->name = tmp;




		int len = sizeof(p1.name) / sizeof(char);
		this->name = new char[len];
		strcpy(this->name, p1.name);

	}
	~Person() {
		if (name) {
			delete name;
		}
	}
	bool change_name(char* name) {
	/*	if (strlen(name) > strlen(this->name)) {
			cout << "메모리 크기 불가";
			return true;
		}*/
		strcpy(this->name, name);
		return true;
	}
	void show() {
		cout << "이름" << this->name << endl;
		cout << "학번" << this->id << endl;
	}
};

int main() {
	char* tmp2 = (char*)"unkonwonnnn";
	
	char* tmp3;
	tmp3 = (char*)"asdfasdfdsafd";
	cout << tmp3;


	//char* tmp = new char[10];
	//strcpy(tmp, (char*)"가나다");
	//cout << strlen(tmp);
	//cout << sizeof(tmp);
	//cout << sizeof(char);
	//cout << sizeof(char16_t);

	//exit;

	//Person* p1 = new Person();
 //   Person* p2 = new Person(*p1);
	//

	//
	//p1->show();
	//delete p1;

	// p2->show();
	// delete p2;


	////p2->change_name((char*)"change_name");

	////p2->show();



	




}