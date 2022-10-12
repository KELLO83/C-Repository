#include  <iostream>
#include <format>

class Circle {
private:
	int radious;
public:
	Circle() { radious = 1; }
	Circle(int r) { radious = r;}

	void set_radious(int r) {
		radious = r;
	}
	double getArea();
};
double  Circle::getArea() {
	return 3.14 * this->radious * this->radious;

}
int main(){
	Circle Circle_arr[3] = { Circle(10),Circle(20),Circle() };
	Circle* point_arr[3] = { &Circle_arr[0],&Circle_arr[1]
		,&Circle_arr[2]};
	int count = 0;
	for (auto c1 : point_arr) {

		std::cout << std::format("circle {}의 원넓이는 {}",
			count,c1->getArea()) << std::endl;
		count += 1;

		std::cout << std::format("{}", (*c1).getArea()) << std::endl;


	}


}