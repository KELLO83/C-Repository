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
	friend Power operator+(Power op1, int op2);
	friend Power& operator++(Power &op1, int x);//후위연산 구현 x는 더미
	friend Power& operator++(Power& op1);
};
Power operator+(Power op1, int op2) { // 객체+N 각속성들을 N만큼 더합니다
	Power tmp;
	tmp.kick = op1.kick + op2;
	tmp.punch = op1.punch + op2;

	return tmp;
}
Power& operator++(Power &op1, int x) { //후위연산 실체화
	Power tmp = op1;
	op1.kick++;
	op1.punch++;

	return tmp;
}
Power& operator++(Power& op1) { //전위연산 실체화
	op1.kick++;
	op1.punch++;
	Power TMP(op1);
	return TMP;
	

}

int main() {
	Power p1(3, 5);
	Power p2(5, 3);
	Power p3;
	Power p4;
	p1 = p1 + 3; // 6 8 출력 예상
	cout << "p1출력" << endl;
	p1.show();
	p3 = p1++;
	cout << "p3 출력" << endl;
	p3.show();
	cout << "p1출력 " << endl;
	p1.show();
	cout << endl;
	p4 = ++p1; //일단 p1객체의 각속성을 더하고 난후 p4에 대입한다
	cout << "p4 출력" << endl;
	p4.show();
	cout << "p1출력 " << endl;
	p1.show();
}