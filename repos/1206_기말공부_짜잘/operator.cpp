#include <iostream>
using namespace std;
class Power;
class Power_show {
public:
	void show(Power& p);
};
class Power {
	int kick, punch;
public:
	Power() :Power(0,0){}
	Power(int x, int y) { this->kick = x; this->punch = y; }
	Power& operator+(Power& p) {
		Power tmp;
		tmp.kick = this->kick + p.kick;
		tmp.punch = this->punch + p.punch;
		return tmp;
	}
	Power& operator+=(Power& p) {
		this->kick += p.kick;
		this->punch += p.punch;

		return *this;
	}
	Power& operator+(int x) {
		this->kick += x;
		this->punch += x;

		return *this;
	}
	/*Power& operator++(int x)  
	{ 
		Power tmp = *this;
		this->kick += 1;
		this->punch += 1;

		return tmp;
	}*/
	Power& operator++() {
		this->kick++;
		this->punch++;
		return *this;
	}
	friend  Power& operator+(int x,Power& p);
	friend Power& operator++(Power& p, int x); //후위연산자
	friend Power_show;
	friend Power& operator+(Power& p, Power& q);
};
Power& operator+(int x, Power& p) {
	p.kick += x;
	p.punch += x;

	return p;
}
Power& operator++(Power& p, int x) {
	Power tmp = p;
	p.kick++;
	p.punch++;

	return tmp;
}
void Power_show::show(Power& p) {
	cout << "kick---->" << p.kick << endl;
	cout << "punch---->" << p.punch << endl;
	cout << endl;
}
int main() {
	Power_show s1;
	Power p1(1, 1);
	Power p2(2, 2);
	Power p3;

	p3 = 2 + p1;
	s1.show(p3);
	

	Power p4;
	p4 = p1++;

	s1.show(p1);
	s1.show(p4);

	Power p5;

	p5 = ++p2;

	s1.show(p2);
	s1.show(p5);


	



}