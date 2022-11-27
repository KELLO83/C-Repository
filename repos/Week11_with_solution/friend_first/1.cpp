#include <iostream>
using namespace std;
class trangle;
bool equals(trangle r, trangle s);
class trangle {
	int base, height;
public:
	trangle(int base, int height) { this->base = base, this->height = height; }
	friend bool equals(trangle r, trangle s);
	void copy(trangle& dest, trangle& src);
};
bool equals(trangle r, trangle s) {
	if (r.base == s.base && r.height == s.height) {
		return true;
	}
	return false;
}
void trangle::copy(trangle& dest, trangle& src) {
	dest.base = src.base;
	dest.height = src.height;
}
int main() {
	trangle t1 = trangle (3, 5);
	trangle t2 = trangle (3, 7);

	if (equals(t1, t2)) {
		cout << "t1과 t2는 동일합니다";
	}
	else
	{
		cout << "t1과 t2는 다릅니다";
	}
	cout << endl;
	t1.copy(t1, t2);
	if (equals(t1, t2)) {
		cout << "t1과 t2는 동일합니다";
	}
	else
	{
		cout << "t1과 t2는 다릅니다";
	}

}
