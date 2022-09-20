#include <iostream>
#include <format>
using namespace std;
class trangle {
public:
	double base;
	double height;
	double getArea();
};
double trangle::getArea() {
	return (base * height)/2;
}

int main() {
	trangle object_one;
	cout << "밑변의길이를 입력하세요"; 
	cin >> object_one.base;
	cout << "높이를 입력하세요";
	cin >> object_one.height;
	cout << format("삼각형의 넓이는{}입니다", object_one.getArea());


}
