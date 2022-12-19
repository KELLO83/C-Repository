#include <iostream>
#include <cstring>
using namespace std;

class Animal {
protected:
	string name;
public:
	Animal() { this->name = "Unknown";
	cout << "Animal생성" << endl; }
	~Animal() { cout << "Animal소멸" << endl; }
	virtual void show() {
		cout << "이름---->" << this->name << endl;
		cout << endl;
	}
	void show_Enalbe() {
		cout << "이름---->" << this->name << endl;
		cout << endl;
	}
};
class Person: virtual public Animal{
	int id;
public:
	Person():Animal(){ 
		this->id = 0; 
	}
	~Person() {
		cout << "Person소멸" << endl;
	}
	virtual void show() {
		cout << "이름---->" << this->name << endl;
		cout << "id------>" << this->id << endl;
		cout << endl;
	}
	void show_Enable() {
		cout << "이름---->" << this->name << endl;
		cout << "id------>" << this->id << endl;
		cout << endl;
	}
};

int main() {
	Animal* p2 = new Person;

	p2->show(); //virtula
	p2->show_Enalbe();
	p2->Animal::show(); // virtual 동적바인딩 함수를 정적바인딩으로 기본클래스의 함수를 호출한다

}