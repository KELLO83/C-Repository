// 함수중복은 함수명이같고 매개변수가 다른 함수들
// 오버라이딩이라고 지칭한다


#include <iostream>
#include <algorithm>
using namespace std;
int sum(int);
int sum(int, int);
int main() {
	int a, b, c;
	int res1, res2;
	cout << "두개의 매개변수를 입력하세요";
	cin >> a >> b;
	cout << "한개의 매개변수를 입력하세요";
	cin >> c;

	res1=sum(a, b);
	res2=sum(c);
	cout << "a부터 b까지의합" << res1 << endl;
	cout << "0부터 c까지의 합" << res2 << endl;
}

int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++) {
		sum += i;
	}
	return sum;
}
int sum(int a, int b) {
	if (a > b) {
		swap(a, b);
	}
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}
