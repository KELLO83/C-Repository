#include <iostream>
using namespace std;
class Power {
	int kick;
	int punch;
public:
	Power():Power(1,1) {}
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	void show() {
		cout << "kick ---->" << this->kick <<endl;
		cout << "punch ----->" << this->punch << endl;
		cout << endl;
	
	}
	Power& operator+(Power& p) {
		Power tmp;
		tmp.kick = this->kick + p.kick;
		tmp.punch = this->punch + p.punch;
		return tmp;
	}
	Power& operator+(int x) {
		Power tmp;
		tmp.kick = this->kick + x;
		tmp.punch = this->punch + x;
		return tmp;
	}
	bool operator==(Power& p) {
		if (this->kick == p.kick && this->punch == p.punch) {
			return true;
		}
		return false;
	}
	Power& operator+=(Power& p) {
		kick = this->kick + p.kick;
		punch = this->punch + p.punch;

		return *this;
	}
	bool operator!() {
		if (kick == 0 && punch == 0) {
			return true;
		}
		return false;
	}
	Power& operator++() {
		kick++;
		punch++;
	}
	Power& operator++(int x) {
		Power tmp = *this;
		kick++;
		punch++;
		return tmp;

	}
	friend Power operator+(int op1, Power op2); //fried선언시만 작동 b=2+a
	friend Power operator+(Power op1, Power op2);
	friend Power& operator++(Power op1, int x); // friend 후위연산
	friend Power& operator++(Power& op1); //friend 전위연산
};
Power operator+(int op1, Power op2) {
	Power tmp;
	tmp.kick = op2.kick + op1;
	tmp.punch = op2.punch + op1;
	return tmp;
}
Power operator+(Power op1, Power op2) {
	Power tmp;
	tmp.kick = op1.kick + op2.kick;
	tmp.punch = op1.punch + op2.punch;

	return tmp;
}
Power& operator++(Power op1, int x) { //후위연산
	Power tmp = op1;
	op1.kick++;
	op1.punch++;

}
Power& operator++(Power &op1) {
	op1.kick++;
	op1.punch++;
	return op1;
}
int main() {
	Power p1;
	Power p2(3, 5);
	Power p3(0, 0);
	Power p4;
	p3 = p1 + p2;
	p3.show();
	if (p1 == p4) {
		cout << "두 객체의 속성들의 값이 동일합니다" << endl;
		cout << endl;
	}

	p4 += p4;

	p4.show();


}
