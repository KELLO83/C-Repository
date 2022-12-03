#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
class Person {
	char* name;
	int id;
public:
	Person(const char* name, int id) {
		this->name = (char*)name;
		this->id = id;
	}
	Person(const Person& p) {
		// ���� �ذ�å
		this->id = p.id;
		char* q = new char;
		strcpy(q, p.name);
		this->name = q;
		/* å����
		this->id = p.id;
		int len = strlen(p.name);
		this->name = new char[len + 1]; //�����ϴ� ��ü�� name�� �����Ҵ��Ѵ�
		strcpy(this->name, p.name); //���� copy
		*/
	}
	void change_name(const char* name) {
		this->name = (char*)name;
	}
	void show() {
		cout << "�̸���" << this->name << endl;
		cout << "id" << this->id << endl;
	}
};
int main() {
	//�����Ҵ��ϵ� ���� ������� ���ÿ����� ���� ����
	Person p1 = Person("kello", 35);
	Person p2 = Person(p1);
	p1.show();
	p2.show();


}