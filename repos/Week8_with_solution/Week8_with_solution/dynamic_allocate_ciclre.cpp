#include <iostream>
#include <format>
using namespace std;
class Rectangle {
	int base;
	int height;
public:
	Rectangle();
	Rectangle(int,int);
	int get_area();
};
Rectangle::Rectangle() :Rectangle(1,1) {}
Rectangle::Rectangle(int base,int height) {
	this->base = base;
	this->height = height;
}
int Rectangle::get_area() {
	return base * height;
}


int main() {
	int base;
	int heigth;
	while (true)
	{
		cout << "정수 밑변을 입력받습니다 음수면 종료";
		cin >> base;
		if (base < 0) {
			cout << "프로그램을 종료합니다";
			exit(0);
		}
		cout << "정수 높이를 입력받습니다 음수면 종료";
		cin >> heigth;
		if (heigth < 0) {
			cout << "프로그램을 종료합니다";
			exit(0);
		}
		Rectangle* p = new Rectangle(base,heigth);
		cout << format("정사각형의 넓이는 {}", p->get_area())<<endl;
		delete p;
	}
}