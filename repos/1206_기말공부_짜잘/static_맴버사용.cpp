#include <iostream>
using namespace std;
class Person {
public:
	static int money;
	void use_money() {
		cout << "100���� �Һ��մϴ�" << endl;
		this->money -= 100;
		cout << "��������ϰ��ִµ� " << this->money << endl;
		cout << "��������ϰ��ִµ� " << Person::money << endl;
	}
	Person() {}
	static void who() { // static �Լ� this���Ұ�
		cout << "who �Լ� ����" << endl;
		cout << "���� �������ִµ� " << money << endl;
	}
};
int Person::money = 1000;//static������ �ٱ����� �ʱ�ȭ
int main() {
	Person p1;
	Person P2;
	Person::money = 10000;// main���� �ʱ�ȭ

	p1.use_money();
	P2.use_money();
	cout << "������" << Person::money << endl;
	cout << "������" << p1.money << endl;

	p1.who();
	Person::who();


}