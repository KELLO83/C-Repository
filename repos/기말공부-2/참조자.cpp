#include <iostream>
using namespace std;
class Circle {
	int radious;
public:

	void set_radious(Circle&,int r);
	friend void show(Circle&);
};
void Circle::set_radious(Circle& q,int r) {
	q.radious = r;

}
void show(Circle& q) {
	cout << "¹ÝÁö¸§" << q.radious << endl;
}
int main() {
	Circle c1;
	c1.set_radious(c1, 5);
	show(c1);


}