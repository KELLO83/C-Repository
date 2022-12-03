#include <iostream>
using namespace std;

class Person {
public:
	int money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int n) {
		sharedMoney += n;
	}
	void use_money() {
		cout << "100���� ����մϴ�" << endl;
		Person::sharedMoney -= 100;
	}
	void show() {
		cout << "�Ϲ��Լ� ȣ��" << "���� �����ϰ��ִ� ��" << Person::sharedMoney << endl;
	}
	static void show__() {
		cout << "static_show ȣ��" << "���� �����ϰ��ִµ�" << Person::sharedMoney << endl;
	}
};
int Person::sharedMoney = 1000; //Ŭ�������� �ʱ�ȭ 
int main() {
	Person p1;
	Person p2;
	p1.show();
	p1.use_money();
	p2.show__();
	p1.show();
	
	p2.use_money();
	cout << "�����ϰ��ִµ�" << Person::sharedMoney << endl;


}