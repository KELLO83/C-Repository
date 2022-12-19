#include <iostream>
using namespace std;


class Person {
protected:
	char* name;
public:
	Person():Person((char*)"Unknown") {}
	Person(char* name) {
		this->name = name;
	}
	virtual void Virtual_show() {
		cout << "Person class Virtual_show" << endl;
		cout << this->name << endl;
	}
	void show() {
		cout << "Person class show" << endl;
		cout << this->name << endl;
	}
	virtual ~Person() {
		cout << "Person class Delete" << endl;
	}

};
class Student : virtual public Person {
protected:
	double greade;
public:
	Student() :Student(100) {}
	Student(double grade) { this->greade = grade; }
	virtual void Virtual_show() {
		cout << "Student class Virtula_show" << endl;
		cout << this->name << endl;
		cout << this->greade << endl;
	}
	void show() {
		cout << "Student class show" << endl;
		cout << this->name << endl;
		cout << this->greade << endl;

	}
	virtual ~Student() {
		cout << "Student class Delete" << endl;
	}
};
int main() {
	Student *k1 = new Student;
	Person* p = k1;

	p->show();
	p->Virtual_show(); // std delete and person delete
	p->Person::Virtual_show(); // 정적바인딩 


	delete p;



}