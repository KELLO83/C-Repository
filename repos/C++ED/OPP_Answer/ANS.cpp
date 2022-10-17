#include <iostream>
#include <format>
using namespace std;
int main() {
	int a = 5, b = 10, c;
	cout << format("a={} b={}\n",a,b);
	cout << format("a+b/3*3 = {}\n", a + b / 3 * 3); // int형 b를 int형 3으로 나눌경우 소숫점 버림발생
	cout << format("b<<2 비트연산 {} \n ", b << 2);
	cout << format("a!=b  {} \n", a != b);
	cout << format("b%a= {} \n", b % a);
	cout << format("(a>b)?a:b {} \n", (a > b) ? a : b);
	cout << format("sizeof(a) {} \n", sizeof(a));
	c = a++;
	cout << format("c=a++이후의 c값 {} \n", c);
	a += b;
	cout << format("a+=b 이후의 a값 {} \n", a);
	cout << format("a&b {} \n", a & b);
	a = 5;
	int temp = a & a;
	cout << format("a&a {} \n",temp);
	c = (a + b, a - b);
	cout << format("c=(a+b,a-b) {} \n", c);
	c = (a + b, a - b, a * b);
	cout << format("c=(a+b,a-b,a*b) {}\n", c);




}