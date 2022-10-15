#include <iostream>
#include <format>
using namespace std;
class Animal {
	const char* name; //char *에다가 문자열을 대입할시 c언어와 다르게const상수를 붙인다
	int age;
public:
	int health = 100;
	bool food = false;
	Animal();
	Animal(const char*, int);
	void show_inform();
	int get_age() { return this->age; }
	void set_name_age(const char *,int);
	~Animal() { cout << format("deleted")<<endl; }
	void get_health_food() {
		cout << format("health {} food {}", this->health, this->food)<<endl;
	}
	void show_all_information();
};
class Init {
	int x, y;
public:
	Init();
	Init(int a, int b);
	void get_elem();
};

Init::Init() :x(1), y(1) {
	
}
Init::Init(int a, int b) :x(a), y(b) {

}
void Init::get_elem() {
	cout << format("x={} y={}", this->x, this->y)<<endl;
}
class rec {
	int base;
	int heigh;
public:
	rec();
	rec(int, int);
	int getArea() { 
		cout << format("{} * {} = {}", this->base, this->heigh, base * heigh)<<endl;
		return this->base * this->heigh; }
};
rec::rec() :rec(10,10) {} //위임 생성자

rec::rec(int a, int b) { //타겟 생성자
	this->base = a;
	this->heigh = b;

}

Animal::Animal() {
	this->name = "Unknown";
	age = 30;
}
Animal::Animal( const char *name, int age) {
	this->name = name;
	this->age = age;
}
void Animal::show_inform() {
	cout << format("name {} age {}", this->name, this->age) << endl;
}
void Animal::set_name_age(const char * name ,int age) {
	this->name = name;
	this->age = age;

}
void Animal::show_all_information() {
	cout << format("name {} age {} health {} food {}", this->name, this->age, this->health, this->food)<<endl;
}
int main() {
	Animal* pet1 = new Animal;//class 동적할당
	pet1->show_inform();
	(*pet1).set_name_age("jello", 8);
	(*pet1).show_inform();
	Animal* pet2 = new Animal("jubi", 3);
	pet2->show_inform();
	pet1->get_health_food();
	(*pet2).get_health_food();


	pet1->food = false;
	(*pet1).health = 75;

	pet2->food = false;
	(*pet2).health = 85;


	pet1->show_all_information();
	(*pet2).show_all_information();


	delete pet1;
	delete pet2;


	Init t1;
	Init t2(3, 5);

	Init* point;
	point = &t1;

	Init* point_second;
	point_second = &t2;

	point->get_elem();
	(*point_second).get_elem();


	rec *RAC_first = new rec;
	rec* RAC_SECOND = new rec(20, 20);

	(*RAC_first).getArea();
	RAC_SECOND->getArea();








}