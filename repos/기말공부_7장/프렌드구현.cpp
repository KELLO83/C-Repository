#include <iostream>
using namespace std;
/*
1.�ܺ��Լ��� ������
2. �ܺ�Ŭ������ �Լ��� ������
3. �ܺ�Ŭ���� ���θ� ������
*/
class Person;
class show_class {
public:
	void show(Person p1) {
		//cout << "�̸�" << p1.name;
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
	friend void show_class::show(Person p1);  //�ܺ�Ŭ������ �ϳ����Լ��� friend
	friend void externel_show(const Person& p1); //�ܺ��Լ��� friend
	friend Manger_class; //�ܺ�Ŭ���� ���� friend
};
class Manger_class {
public:
	void Mager_class_show(Person p1) {
		//cout << "�̸�" << p1.name;
		//cout << "id" << p1.id;
		//cout << "Grade" << p1.Grade;
	}
};
void externel_show(const Person& p1) {
	cout << "�̸�" << p1.name;
	cout << "id" << p1.id;
	cout << "Grade" << p1.Grade;
}

int main() {

	Person p1("kello", 1922026, 'A');
	externel_show(p1);

}