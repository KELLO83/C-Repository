#include <iostream>
#include <string>
using namespace std;
class Animal {
protected: // public 또는 protected로 해주어야한다!!!!
	string name;
public:
	Animal() :Animal("Unknown") {}
	Animal(string name) {
		this->name = name;
	}
	void show() {
		cout << "Animal_class show함수" <<endl;
		cout <<"이름-->" << this->name << endl;
		cout << endl;
	}
	virtual void virtual_show() {
		cout << "virtual_show 함수" << endl;
		cout << "Animal_class show함수" << endl;
		cout << "이름-->" << this->name << endl;
		cout << endl;
	}
	 virtual ~Animal() {
		cout << "Animal_class 소멸" << endl;
		cout << endl;
	}
};
class Person : public Animal { // public 상속
	int id;
public:
	Person() :Person(0) {}
	Person(int id) {
		this->id = id;
	}
	void show() {
		cout << "Person_class show함수" << endl;
		cout << "이름-->" << this->name << endl;
		cout << "id---->" << this->id << endl;
		cout << endl;
	}
	virtual void virtual_show() { // Virtual 선언시 객체선언하자마자 함수가확정됨
		cout << "virtual_show 함수" << endl;
		cout << "Person_class show함수" << endl;
		cout << "이름-->" << this->name << endl;
		cout << "id---->" << this->id << endl;
		cout << endl;
	}
	virtual ~Person() { // 파생클래스의 소멸자가 먼저실행후 기본클래스의 소멸자나중에 실행
		cout << "Person_class 소멸" << endl;
		cout << endl;
	}
};
int main() {
	Person* p = new Person;
	//Animal* k = p; // 업캐스팅
	Animal* k = new Animal;
	k = p;
	k->show(); //정적바인딩
	cout << endl;
	k->virtual_show(); //동적바인딩

	delete k;

	cout << endl;

	Person* tt = new Person;
	tt = (Person*)k;  //다운캐스팅

	tt->show();
	tt->virtual_show();

	delete tt;






	


}