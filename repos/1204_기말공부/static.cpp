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
		cout << this->name << "가 돈을 사용합니다" << endl;
		cout << "100원을 사용합니다" << endl;
		cout << "현재 남은돈은" << Person::shared_money << "입니다" <<endl;
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