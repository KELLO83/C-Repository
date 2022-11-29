#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int* p = new int[5]; // 자료형 * 변수 = new 자료형[배열칸수]
	for (int i = 0; i < 5; i++) {
		p[i] = rand() % 100; // 0부터 99까지
		cout << p[i] << endl;
	}
	cout << "테스팅" << endl;
	int* q = new int[3]; // T* pointer = new T;
	for (int i = 0; i < 3; i++) {
		*(p + i) = rand() % 10 + 5; // 5부터 14까지
		cout << *(p + i) << endl;
	}
	delete[] p; // 배열은 delete[] 포인터변수 로 삭제를 해주어야한다
	delete[] q;

	cout << "프로그램을 종료합니다" << endl;
 	return 0;
	
}