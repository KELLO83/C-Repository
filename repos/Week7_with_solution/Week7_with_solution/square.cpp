#include <iostream>
#include <format>
/*직사각형을 구조체로 갖도록 선언하고 매개변수가없는 생성자와
가로 세로에 대한 매개변수를 받는 생성자를 사용하여 생성하고
사각형의 면적을구하는 프로그램을 작성하여라
*/ 

using namespace std;
struct MyStruct
{
public:
	int base;
	int height;
	MyStruct() { base = 1, height = 1; }
	MyStruct(int n1, int n2) { this->base=n1, this->height=n2; }

	int getArea();

};

int MyStruct::getArea() {
	return base * height;
}

int main() {
	MyStruct s1;
	MyStruct s2(3, 5);
	cout << format("s1의 넓이는 {}",s1.getArea())<<endl;
	cout << format("s1의 넓이는 {}", s2.getArea()) << endl;


}