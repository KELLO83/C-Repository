#include <iostream>
#include <string>
using namespace std;
class Animal {
protected: // public �Ǵ� protected�� ���־���Ѵ�!!!!
	string name;
public:
	Animal() :Animal("Unknown") {}
	Animal(string name) {
		this->name = name;
	}
	void show() {
		cout << "Animal_class show�Լ�" <<endl;
		cout <<"�̸�-->" << this->name << endl;
		cout << endl;
	}
	virtual void virtual_show() {
		cout << "virtual_show �Լ�" << endl;
		cout << "Animal_class show�Լ�" << endl;
		cout << "�̸�-->" << this->name << endl;
		cout << endl;
	}
	 virtual ~Animal() {
		cout << "Animal_class �Ҹ�" << endl;
		cout << endl;
	}
};
class Person : public Animal { // public ���
	int id;
public:
	Person() :Person(0) {}
	Person(int id) {
		this->id = id;
	}
	void show() {
		cout << "Person_class show�Լ�" << endl;
		cout << "�̸�-->" << this->name << endl;
		cout << "id---->" << this->id << endl;
		cout << endl;
	}
	virtual void virtual_show() { // Virtual ����� ��ü�������ڸ��� �Լ���Ȯ����
		cout << "virtual_show �Լ�" << endl;
		cout << "Person_class show�Լ�" << endl;
		cout << "�̸�-->" << this->name << endl;
		cout << "id---->" << this->id << endl;
		cout << endl;
	}
	virtual ~Person() { // �Ļ�Ŭ������ �Ҹ��ڰ� ���������� �⺻Ŭ������ �Ҹ��ڳ��߿� ����
		cout << "Person_class �Ҹ�" << endl;
		cout << endl;
	}
};
int main() {
	Person* p = new Person;
	//Animal* k = p; // ��ĳ����
	Animal* k = new Animal;
	k = p;
	k->show(); //�������ε�
	cout << endl;
	k->virtual_show(); //�������ε�

	delete k;

	cout << endl;

	Person* tt = new Person;
	tt = (Person*)k;  //�ٿ�ĳ����

	tt->show();
	tt->virtual_show();

	delete tt;






	


}