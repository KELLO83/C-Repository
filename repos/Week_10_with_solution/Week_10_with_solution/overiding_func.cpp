#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

void res(int a, int b) {
	if (a > b) {
		cout << "가장큰수는" << a << "가장작은수는" << b<<endl;
	}
	else {
		cout << "가장큰수는" << b << "가장작은수는" << a << endl;
	}  
}
void res(double a, double b) {
	if (a > b) {
		cout << "가장큰수는" << a << "가장작은수는" << b << endl;
	}
	else {
		cout << "가장큰수는" << b << "가장작은수는" << a << endl;
	}
}
void res(int *data) {
	int smallest = data[0];
	int largest = data[0];
	for (int i = 0; i < 5; i++) {
		smallest = min(smallest, data[i]);
		largest = max(largest, data[i]);

	}
	cout << "배열에서 가장큰수는" << largest << "가장 작은수는" << smallest<<endl;

}


int main() {
	cout << "두정수를 입력한다";
	int a, b;
	cin >> a >> b;
	res(a, b);
	cout << "두 실수를 입력하세요";
	double n1, n2;
	cin >> n1 >> n2;
	res(n1,n2);
	int array[5] = {};
	cout << "배열에 임의의 데이터를 삽입합니다"<<endl;
	for (int i = 0; i < 5; i++) {
		int tmp= rand() % 20 + 1;
		array[i] = tmp;
		cout << array[i]<<" ";
		
	}
	cout << endl;
	res(array);



}