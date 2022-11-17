#include <iostream>
using namespace std;
class Rec 
{
	int base, height;
public:
	Rec() {};
	void readRadius(Rec& c) {
		int base,height;
		cout << "정수 값으로 밑변 높이 입력하세요>>";
		cin >> base>>height;
		c.set(base,height);
	}
	void set(int base,int heigh) {
		this->base = base;
		this->height = heigh;
	}
	void show() {
		cout <<"박스의 면적"<< base * height;
	}


};

int main() {
	Rec box = Rec();
	box.readRadius(box);
	box.show();
}