#include <iostream>
using namespace std;
class Power {
	int kick, punch;
public:
	Power() { 
		this->kick = 0;
		this->punch = 0;
	};
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	void show() {
		cout << "kick= " << this->kick << endl;
		cout << "punch= " << this->punch << endl;
		cout << endl;
	}

	Power& operator+(Power& op) { //두개의 Power객체를더하는 연산
		Power TMP;
		TMP.kick = this->kick + op.kick;
		TMP.punch = this->punch + op.punch;
		cout << "TMP 메모리주소" << &TMP<<endl;
		return TMP;
	}
	bool operator==(Power op2) { //두개의 Power객체가 같은지 검사
		if (this->kick == op2.kick && this->punch == op2.punch) {
			return  true;
		}
		return false;

	}
	Power& operator+= (Power & op) {
		this->kick += op.kick;
		this->kick += op.kick;
		return *this;
	}
	Power operator*=(Power& op) {
		this->kick *= op.kick;
		this->punch *= op.punch;
	}
	Power operator++() { //전위연산 구현
		this->kick++;
		this->punch++;
		return *this;
	}
	Power operator++(int x) {// 후위연산 구현 매개변수는 사용x
		Power tmp = *this;
		this->kick++;
		this->punch;;
		return tmp;
	}
};
int main() {
	Power p1(5,2);
	Power p2(5,2);
	Power p3;
	cout << "p3출력" << endl;
	p3 = p1 + p2;
	p3.show();
	if (p1 == p2) {
		cout << "p1과 p2가 같습니다" << endl;
	}
	else
	{
		cout << "p1과 p2가 다릅니다" << endl;
	}

	p1 += p2;
	cout << "p1 상태를 출력합니다" << endl;
	p1.show();
	Power p5;
	p5=++p1; //p1의 각속성을 증가시킨
	cout << "p5상태를 출력합니다" << endl; 
	p5.show();
	cout << "p1상태를 출력합니다" << endl;
	p1.show();

	Power p4;
	p4 = p1++; //p4에다가 p1을 일단대입후 p1의 각속성을 증가시킵니다
	cout << "p4상태를 출력합니다" << endl;
	p4.show();
	cout << "p1상태를 출력합니다" << endl;
	p1.show();

}