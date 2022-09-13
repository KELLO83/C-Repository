#include <iostream>
using namespace std;
void equalArr(int*, int*,int*,int);
int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 2,5,3,2,5 };
	int res[5] = { 0 };
	equalArr(a, b, res, (sizeof(a) / sizeof(int)));
	cout << "a=";
	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		cout << a[i]<<" ";
	}
	cout << "\n" << "b=";
	for (int i = 0; i < sizeof(b) / sizeof(int);i++) {
		cout << b[i]<<" ";
	}
	cout <<"\n" << "reslut=";
	for (int i = 0; i < sizeof(res) / sizeof(int); i++) {
		cout << res[i]<<" ";
	}

	return 0;
}
void equalArr(int* a, int* b,int*res,int size) {
	//a라는 배열명을 인수로 전달 배열명=포인터=주소 
	//포인터 연산가능
	//* 간접참조연산자
	cout << "비교를 시작합니다" << endl;
	for (int i = 0; i < size; i++) {
		cout << *a << "와" << *b << "를 비교합니다" << endl;
		if (*a == *b) {
			cout << "a와 b가 동일합니다" << endl;
			*res = 1;
		}
		else
		{
			cout << "a와 b가 불일치합니다" << endl;
			*res = 0;
		}	
		a++; //포인터=주소 배열=주소 주소+정수 =주소 주소+1 칸
		b++;
		res++;
	}
}