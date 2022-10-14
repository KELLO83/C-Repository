#include <iostream>
#include <format>
using namespace std;
class rectangle {
	int base;
	int height;

public:
	rectangle() { this->base = 1, this->height = 1; }
	rectangle(int base, int height) { this->base = base, this->height = height; }
	rectangle(int base) { this->base = base; this->height = 1; }
	int getArea();
};

int rectangle::getArea() {
	return this->base * this->height;
}

int main() {
	rectangle Array[3] = { rectangle(5,10),rectangle(5),rectangle() };
	for (int i = 0; i < 3; i++) {
		cout << format("Rectangle {} 의 면적은 {}",i+1,Array[i].getArea()) << endl;
	}
}