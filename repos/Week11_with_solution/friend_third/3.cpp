#include <iostream>
using namespace std;

class trangle;
class trangle_Manager {
public:
	bool equals(trangle r, trangle s);
	void copy(trangle& dest, trangle& src);
};
class trangle {
	int base, height;
public:
	trangle(int base, int height) { this->base = base, this->height = height; }
	friend trangle_Manager;
};
bool trangle_Manager::equals(trangle r, trangle s) {
	if (r.base == s.base && r.height == s.height) {
		return true;
	}
	return false;

}
void trangle_Manager::copy(trangle& dest, trangle& src) {
	dest.base = src.base;
	dest.height = src.height;
}

int main() {
	trangle t1 = trangle(3, 5);
	trangle t2 = trangle(7, 3);
	trangle_Manager ck;
	if (ck.equals(t1, t2)) {
		cout << "t1과 t2는 동일합니다";
	}
	else
	{
		cout << "t1 과 t2는 다릅니다";
	}
	ck.copy(t2, t1);
	cout << endl;

	if (ck.equals(t1, t2)) {
		cout << "t1과 t2는 동일합니다";
	}
	else
	{
		cout << "t1과 t2는 다릅니다";
	}
}
