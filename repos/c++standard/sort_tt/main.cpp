#include <iostream>
#include <algorithm>
#include <format>
#include <cstdlib>
#include <time.h>
using namespace std;
void sort_fast(int []);
void sort_orgin(int[], int size);
void sort_point(int *);
int main() {
	int arr[10];
	srand(static_cast<unsigned int>(time(NULL)));

	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 93 + 2; // 2~92
		cout << format("{} ", arr[i]);
	}
	cout << endl;
	sort_fast(arr);
	sort_orgin(arr,10);
	int* point = arr;//배열명 주소니깐 point가 0번지 주소자장
	sort_point(point);

}
void sort_fast(int data[]) {
	sort(data, data + 10);
	for (int i = 0; i < 10; i++) {
		cout << format("{} ", data[i]);
	}
	cout << endl;
}
void sort_orgin(int data[], int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = i+1; j < size; j++)
		{
			if (data[i] > data[j]) {
				swap(data[i], data[j]);
				
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << format("{} ", data[i]);
	}
	cout << endl;

}
void sort_point(int* p) {
	for (int i = 0; i < 10; i++) {
		cout << format("{} ", *p);
		p = p + 1;
	} //주소 +정수=주소+(sizeof(주소의자료형))
	/* doulbe t[3]={1,2,3} 0 8 16
	* double * p=t;
	* 
	* *(p+1)=2
	* p+1=주소의 메모리주소값 0+8*1=8
	* p+2 0+8*2 =16
	* *(p+2)
	* p+2
	* 
	* 
	* #ifndef
	* #define 
	* #endif
	*/
	
}