#include <iostream>
using namespace std;
/*
1.외부함수를 프렌드
2. 외부클래스의 함수를 프렌드
3. 외부클래스 전부를 프렌드
*/
class Person;
class show_class {
public:
	void show(Person p1) {
		//cout << "이름" << p1.name;
		//cout << "id" << p1.id;
		//cout << "Grade" << p1.Grade;
	}
}; 
class Person {
	char* name;
	int id;
	char Grade;
public:
	Person(const char* name, int id, char Grade) {
		this->name = (char*)name;
		this->id = id;
		this->Grade = Grade;
	}
public:
	friend void show_class::show(Person p1);  //외부클래스의 하나의함수를 friend
	friend void externel_show(const Person& p1); //외부함수를 friend
	friend Manger_class; //외부클래스 몽땅 friend
};
class Manger_class {
public:
	void Mager_class_show(Person p1) {
		//cout << "이름" << p1.name;
		//cout << "id" << p1.id;
		//cout << "Grade" << p1.Grade;
	}
};
void externel_show(const Person& p1) {
	cout << "이름" << p1.name;
	cout << "id" << p1.id;
	cout << "Grade" << p1.Grade;
}

int main() {

	Person p1("kello", 1922026, 'A');
	externel_show(p1);

}