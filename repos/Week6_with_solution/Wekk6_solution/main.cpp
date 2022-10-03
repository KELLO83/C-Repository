#include <iostream>
#include <format>

using namespace std;

class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int lenght);
	bool isSquare() {
		if (this->width == this->height) {
			return true;
		}
		return false;
	}
	int getArea() {
		return this->width * this->height;
	}
};

Rectangle::Rectangle() {
	this->width = 1;
	this->height = 1;

}
Rectangle::Rectangle(int w, int h) {
	this->width = w;
	this->height = h;
}
Rectangle::Rectangle(int le) {
	this->width=le, this->height = le;
}

int main() {
	Rectangle c1;
	Rectangle c2(3, 5);
	Rectangle c3(3);
	if (c1.isSquare()) {
		cout << format("c1은 정사각형이다\n");
		cout << format("c1 정사각형읨 면적은 {}입니다\n", c1.getArea());
	}
	if (c2.isSquare()) {
		cout << format("c2은 정사각형이다 \n");
		cout << format("c2 정사각형읨 면적은 {}입니다\n", c2.getArea());
	}
	if (c3.isSquare()) {
		cout << format("c3은 정사각형이다\n");
		cout << format("c3 정사각형읨 면적은 {}입니다\n", c3.getArea());
	}


}