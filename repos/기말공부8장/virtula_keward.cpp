#include <iostream>
#include <cstring>
using namespace std;

class Animal {
protected:
	string name;
public:
	Animal() { this->name = "Unknown";
	cout << "Animal����" << endl; }
	~Animal() { cout << "Animal�Ҹ�" << endl; }
	virtual void show() {
		cout << "�̸�---->" << this->name << endl;
		cout << endl;
	}
	void show_Enalbe() {
		cout << "�̸�---->" << this->name << endl;
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
		cout << "Person�Ҹ�" << endl;
	}
	virtual void show() {
		cout << "�̸�---->" << this->name << endl;
		cout << "id------>" << this->id << endl;
		cout << endl;
	}
	void show_Enable() {
		cout << "�̸�---->" << this->name << endl;
		cout << "id------>" << this->id << endl;
		cout << endl;
	}
};

int main() {
	Animal* p2 = new Person;

	p2->show(); //virtula
	p2->show_Enalbe();
	p2->Animal::show(); // virtual �������ε� �Լ��� �������ε����� �⺻Ŭ������ �Լ��� ȣ���Ѵ�

}