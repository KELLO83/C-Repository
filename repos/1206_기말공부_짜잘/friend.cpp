#include <iostream>
using namespace std;
class Marin;
class Unit;
class Show_class {
public:
	void show(Marin &p);
};
class Show_class_def {
public:
	void show(Marin &p);
};
class Unit {
protected:
	int hp;
public:
	Unit() :Unit(100) {}
	Unit(int hp) { this->hp = hp; }

	void show() {
		cout << "Unit의 show함수입니다" << endl;
		cout << "hp---->" << this->hp << endl;
	}
	virtual void virtual_show() {
		cout << "Unit의 Virtual_show함수입니다" << endl;
		cout << "hp---->" << this->hp << endl;
	}
	virtual ~Unit() {
		cout << "Unit 소멸" << endl;
	}
};
class Marin : public Unit{
protected:
	int attack;
public:
	Marin() { this->attack = 10; }
	Marin(int attack) { this->attack = attack; }

	void show() {
		cout << "Marin의 show함수입니다" << endl;
		cout << "hp---->"<< this->hp << endl;
		cout << "attack--->" << this->attack << endl;
	}

	virtual void virtual_show() {
		cout << "Marin의 Virtual_show함수입니다" << endl;
		cout << "hp---->" << this->hp << endl;
		cout << "attack--->" << this->attack << endl;
	}
	virtual ~Marin() {
		cout << "Marin 소멸" << endl;
	}
	friend Show_class;
	friend void Show_class_def::show(Marin &p);
};
void Show_class_def::show(Marin &p) {
	cout << "Show_class_def 실행" << endl;
	cout << "hp---->" << p.hp << endl;
	cout << "attack--->" << p.attack << endl;
}
void Show_class::show(Marin& p) {
	cout << "Show_class 실행" << endl;
	cout << "hp---->" << p.hp << endl;
	cout << "attack--->" << p.attack << endl;
	
}
int main() {
	Show_class test_class;
	Show_class_def test_class_def;
	Marin* p = new Marin(100);
	Unit* k = new Unit; //업캐스팅

	k = p;

	k->virtual_show();
	k->show();

	
	test_class.show(*p);
	cout << endl;
	test_class_def.show(*p);

	cout << "업캐스팅 k소멸" << endl;
	delete k;
	cout << endl;





}