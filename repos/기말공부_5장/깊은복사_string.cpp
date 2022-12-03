#include <iostream>
#include <cstring>
using namespace std;
class Person {
	string name;
	int id;
public:
	Person() {
		this->name = "unknown";
		this->id = 00000;
	}
	Person(string name, int id) {
		this->name = name;
		this->id = id;
	}
	Person(const Person& a) { // 복사생성자
		this->id = a.id; //깊은복사
		//string *c = new string;
		//*c = a.name;
		//this->name = *c;
		name = a.name;

	} 
	void changeName(const string name) {
		this->name = name;
	};
	void show() {
		cout << "id=" << id << endl;
		cout << "name=" << name << endl;
	}
};
int main() {
	Person *p1 = new Person("kello", 35);
	Person* p2 = new Person(*p1);

	p1->show();
	p2->show();
	delete p1; 
	cout << "p2 가 살아있니?" << endl;
	p2->show();
	

}