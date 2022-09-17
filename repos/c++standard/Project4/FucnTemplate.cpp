#include <iostream>
#include <format>
using namespace std;
template <typename T> //어떤 인수로 호출하는가에 따라서 자동으로 다중정의가 이루어지빈다 사용자코드에 의해 컴파일러가 다중정의코드를 만듭니다
T testfunc(T a) {
	cout << format("매개변수 {}", a) << endl;

	return a;

}
int main() {
	cout << "int\t" << testfunc(3) << endl;
	cout << "double\t" << testfunc(3.3) << endl;
	cout << "char\t" << testfunc('A') << endl;
	cout << "char*\t" << testfunc("Test sring") << endl;

}