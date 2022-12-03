#include <iostream>
using namespace std;

int& RefRetun(int& ref) { // 매개변수받은인자를 별칭Ref로 사용하겠다
	ref++;		 // ref증가는 곧 num1증가이다
	return ref; //참조자는 num1의 별칭이며
	// 반환은 num1공간을 반환한다
}
int main() {
	int  num1 = 10;
	int& num2 = RefRetun(num1);//매개변수 전달시 &붙이면안된다
	cout << "num1=" << num1<<endl; // 11
	cout << "num2=" << num2 << endl;// 11

}