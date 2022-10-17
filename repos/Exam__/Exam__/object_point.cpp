#include <iostream>
#include <format>

using namespace std;
class Marine {
	int hp = 100;
	int coord_x, coord_y;
	int damage = 100;
	bool is_dead = false;
public:
	Marine();
	Marine(int x, int y);
	Marine(const Marine& pc); //복사 생성자
	~Marine() { cout << format("deleted memory") << endl; }
	int attack();
	void be_attacked(int damage_earn);
	void move(int x, int y);
	void show_status();
};

Marine::Marine(const Marine& pc) {
	cout << "복사 생성자 호출!" << endl;
	hp = pc.hp;
	damage = pc.damage;
	coord_x = pc.coord_x;
	coord_y = pc.coord_y;


}
Marine::Marine():Marine(0,0) {}

Marine::Marine(int x, int y) {
	this->coord_x = x;
	this->coord_y = y;
	this->damage = 5;

}
void Marine::move(int x, int y) {
	this->coord_x = x;
	this->coord_y = y;

}
void Marine::be_attacked(int damage) {
	this->hp -= damage;
	if (this->hp <= 0) {
		this->is_dead = true;
		cout << "dead";
		delete this;
	}
}
int Marine::attack() {
	return this->damage;
}
void Marine::show_status() {
	cout << format("location x={} y={} ",this->coord_x,this->coord_y) << endl;
	cout << format("hp= {}", this->hp)<<endl;
}

int main() {
	Marine *m1 = new Marine;
	Marine* m2 = new Marine;
	//(* m1).show_status();
	//m2->show_status();
	cout << m1 << endl; //m1의 주소값

	Marine** buffer[2] = { &m1,&m2 };//이건o
	//Marine** test[2] = { m1,m2 }; //이건x 


	Marine* point[2] = { m1,m2 };//포인터들의 잡힙인 배열
	//포인터배열 배열포인터  포인터배열  포인터들의 집합 배열
	// 배열포인터는 단순 배열을가리키는 포인터
	(**buffer[0]).show_status();
	point[0]->show_status();


	Marine t1(100, 50);
	Marine t2(t1); //복사 생성자 호출
	Marine t3 = t1;








}