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

	Power& operator+(Power& op) { //�ΰ��� Power��ü�����ϴ� ����
		Power TMP;
		TMP.kick = this->kick + op.kick;
		TMP.punch = this->punch + op.punch;
		cout << "TMP �޸��ּ�" << &TMP<<endl;
		return TMP;
	}
	bool operator==(Power op2) { //�ΰ��� Power��ü�� ������ �˻�
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
	Power operator++() { //�������� ����
		this->kick++;
		this->punch++;
		return *this;
	}
	Power operator++(int x) {// �������� ���� �Ű������� ���x
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
	cout << "p3���" << endl;
	p3 = p1 + p2;
	p3.show();
	if (p1 == p2) {
		cout << "p1�� p2�� �����ϴ�" << endl;
	}
	else
	{
		cout << "p1�� p2�� �ٸ��ϴ�" << endl;
	}

	p1 += p2;
	cout << "p1 ���¸� ����մϴ�" << endl;
	p1.show();
	Power p5;
	p5=++p1; //p1�� ���Ӽ��� ������Ų
	cout << "p5���¸� ����մϴ�" << endl; 
	p5.show();
	cout << "p1���¸� ����մϴ�" << endl;
	p1.show();

	Power p4;
	p4 = p1++; //p4���ٰ� p1�� �ϴܴ����� p1�� ���Ӽ��� ������ŵ�ϴ�
	cout << "p4���¸� ����մϴ�" << endl;
	p4.show();
	cout << "p1���¸� ����մϴ�" << endl;
	p1.show();

}