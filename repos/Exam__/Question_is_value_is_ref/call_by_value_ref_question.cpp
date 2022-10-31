#include <iostream>
#include <ctime>
#include <cstdlib>
#include <format>
using namespace std;
void print_arr(int(*arr)[4]);
int main() {
	int data[3][4];
	cout << "원본을 찍습니다" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			data[i][j] = rand() % 95 + 5; //구간 5~99
			cout << data[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int(*arr_point)[4];
	arr_point = data;
	print_arr(arr_point);
	cout << format("test") << endl;

	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			cout << data[i][k]<<" ";

		}
		cout << endl;
	}

	//결론 (*arr_point) call_by_ref로 작동한다
}
void print_arr(int(*arr)[4]) {
	cout << "print_arr 실행" << endl;
	cout << *(arr + 0)<<endl;//(*arr+0)을하면 arr[0]의 값이아닌 주소가 찍힌다
	for (int i = 0; i < 3; i++) {
 		for (int j = 0; j < 4; j++) {
			//cout << arr[i][j] << " ";//정상 출력 포인터를 마치 배열처럼 사용한다
			cout << *( * (arr + i) + j) << " ";// arr[i][j]랑 동일 출력
		}
		cout << endl;
	}
	cout << "print_arr 실행" << endl;
	cout << "값 조정" << endl;
	for (int i = 0; i < 3; i++) {
		arr[0][i] = 0;
	}
	cout << "값조정 완료" << endl;


	

}