#include <iostream>
#include <string>
using namespace std;
class Person {
	string name;
public:
	Person(string name) {
		this->name = name;
	}
	static int shared_money;
	void use_money() {
		Person::shared_money -= 100;
		cout << this->name << "�� ���� ����մϴ�" << endl;
		cout << "100���� ����մϴ�" << endl;
		cout << "���� ��������" << Person::shared_money << "�Դϴ�" <<endl;
	}
};
int Person::shared_money = 1000;
int main() {
	Person p1("kello");
	Person p2("dsban");
	p1.use_money();
	p2.use_money();

	Person* qq = new Person("Timmy");
	qq->use_money();
	


}