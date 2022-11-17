#include <iostream>
using namespace std;
class Rec {
	int base, high;
public:
	Rec() {};
	Rec(int& a, int& b) {
		this->base = a;
		this->high = b;
	};
	int get_Area() {
		return base * high;
	}
	void set(int& a, int& b) {
		this->base = a;
		this->high = b;
	}
};

int main() {
	int d1, d2;
	cout << "밑변과 높이 입력";
	cin >> d1>> d2;
	Rec r1 = Rec();
	r1.set(d1, d2);
	cout << "면적" << r1.get_Area() << endl;

}
