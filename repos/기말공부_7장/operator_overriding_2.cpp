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
	friend Power& operator++(Power &op1, int x);//�������� ���� x�� ����
	friend Power& operator++(Power& op1);
};
Power operator+(Power op1, int op2) { // ��ü+N ���Ӽ����� N��ŭ ���մϴ�
	Power tmp;
	tmp.kick = op1.kick + op2;
	tmp.punch = op1.punch + op2;

	return tmp;
}
Power& operator++(Power &op1, int x) { //�������� ��üȭ
	Power tmp = op1;
	op1.kick++;
	op1.punch++;

	return tmp;
}
Power& operator++(Power& op1) { //�������� ��üȭ
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
	p1 = p1 + 3; // 6 8 ��� ����
	cout << "p1���" << endl;
	p1.show();
	p3 = p1++;
	cout << "p3 ���" << endl;
	p3.show();
	cout << "p1��� " << endl;
	p1.show();
	cout << endl;
	p4 = ++p1; //�ϴ� p1��ü�� ���Ӽ��� ���ϰ� ���� p4�� �����Ѵ�
	cout << "p4 ���" << endl;
	p4.show();
	cout << "p1��� " << endl;
	p1.show();
}