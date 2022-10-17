#include <iostream>
#include <format>
using namespace std;

//메모리 동적할당
int main() {
	int* pdata = new int;
	*pdata = 10;
	cout << pdata <<endl<< sizeof(pdata)<<endl;

	int* arr = new int[5];
	for (int i = 0;i<5;i++) {
		arr[i] = (i + 1) * 10;
		cout << arr[i] << endl;
	}
	

	delete[]arr;

	





}