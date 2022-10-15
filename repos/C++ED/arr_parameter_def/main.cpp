#include <iostream>
#include <format>
#include <time.h>
#include <cstdlib>
using namespace std;
void call_by_value(int(*arr)[10]);
void reference_by_value(int(*p)[10]);
int main() {
	int data[10][10];
	srand(static_cast<unsigned int>(time(NULL)));
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			data[i][j] = rand() % 93 + 2;  //범위 2~92 생성
		}
		
	}
	int(*p)[10] = data;
	reference_by_value(p);
	call_by_value(data);


	

}
void call_by_value(int(*arr)[10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << format("{} ", arr[i][j]);
		}
		cout << endl;
	}
}
void reference_by_value(int(*p)[10]) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << format("{} ", p[i][j]);
		}
		cout << endl;
	}

	cout << endl;

}
