#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick; this->punch = punch;
	}
	void show();
	Power operator++ (int x); // 후위 ++ 연산자함수 선언
};

void Power::show() {
	cout << "kick=" << kick << ','
		<< "punch=" << punch << endl;
}

Power Power::operator++(int x) {
	Power tmp = *this; // 증가 이전 객체 상태를 저장
	//Power tmp_2 = this;
	Power& tmp_3 = *this;
	kick++;
	punch++;
	tmp.show();
	tmp_3.show();
	return tmp; // 증가 이전 객체 상태 리턴 }

}

int main() {
	Power a(3, 5), b;
	b = a++;

	a.show();
}