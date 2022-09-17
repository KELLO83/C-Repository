#include <iostream>
#include <format>
using namespace std;

//메모리 동적할당
int main() {
	int* pdata = new int(10);/* 인스턴스를 동적할당합니다 메모리크기를 지정하지않습니다*/
	cout << pdata <<endl<< sizeof(pdata)<<endl;

	int* arr = new int[5];
	for (int i = 0;i<5;i++) {
		arr[i] = (i + 1) * 10;
		cout << arr[i] << endl;
	}
	

	delete[]arr;

	





}