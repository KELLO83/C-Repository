#include <iostream>
using namespace std;
class Person {
public:
	static int money;
	void use_money() {
		cout << "100원을 소비합니다" << endl;
		this->money -= 100;
		cout << "현재소유하고있는돈 " << this->money << endl;
		cout << "현재소유하고있는돈 " << Person::money << endl;
	}
	Person() {}
	static void who() { // static 함수 this사용불가
		cout << "who 함수 실행" << endl;
		cout << "현재 가지고있는돈 " << money << endl;
	}
};
int Person::money = 1000;//static변수는 바깥에서 초기화
int main() {
	Person p1;
	Person P2;
	Person::money = 10000;// main에서 초기화

	p1.use_money();
	P2.use_money();
	cout << "남은돈" << Person::money << endl;
	cout << "남은돈" << p1.money << endl;

	p1.who();
	Person::who();


}