#include <iostream>
using namespace std;

class Rect;
class Test;
class RectManager { // RectManager Ŭ���� ����
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& dest, Rect& src);
};

class Rect { // Rect Ŭ���� ����
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;
	friend Test;
};


bool RectManager::equals(Rect r, Rect s) { // r�� s�� ������ true ����
	if (r.width == s.width && r.height == s.height) return true;
	else return false;
}

void RectManager::copy(Rect& dest, Rect& src) { // src�� dest�� ����
	dest.width = src.width;  dest.height = src.height;
}
class Test {
public:
	void Test_show(Rect p);
};
void Test::Test_show(Rect p) {
	cout << p.width << endl;
	cout << p.height << endl;
}


int main() {
	Rect r1(5,3);
	Test p;
	p.Test_show(r1);

	return 0;
}