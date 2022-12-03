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
		cout << "100원을 사용합니다" << endl;
		Person::sharedMoney -= 100;
	}
	void show() {
		cout << "일반함수 호출" << "현재 소지하고있는 돈" << Person::sharedMoney << endl;
	}
	static void show__() {
		cout << "static_show 호출" << "현재 소지하고있는돈" << Person::sharedMoney << endl;
	}
};
int Person::sharedMoney = 1000; //클래스변수 초기화 
int main() {
	Person p1;
	Person p2;
	p1.show();
	p1.use_money();
	p2.show__();
	p1.show();
	
	p2.use_money();
	cout << "소지하고있는돈" << Person::sharedMoney << endl;


}