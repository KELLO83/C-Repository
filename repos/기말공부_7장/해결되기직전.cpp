#include <iostream>
using namespace std;

class Rect;
class Test;
class RectManager;

class Test {
public:
	void Test_show(Rect r, Rect s);
};
void Test::Test_show(Rect r, Rect s) {
	cout << r.height << r.width << endl;
	cout << s.height << s.width << endl;

}

class RectManager { // RectManager 클래스 선언
public:
	void show(Rect r, Rect s);
};

class Rect { // Rect 클래스 선언
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend void Test::Test_show(Rect r, Rect s);
	friend void RectManager::show(Rect r, Rect s);

};

void RectManager::show(Rect r, Rect s) {
	cout << r.height << r.width << endl;
	cout << s.height << s.width << endl;
}


int main() {
	Rect a(10, 20), b(3, 4);
	RectManager man;
	man.show(a,b);
	Test t1;
	t1.Test_show(a, b);
}

