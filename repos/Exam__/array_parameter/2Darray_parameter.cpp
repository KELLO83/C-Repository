#include <iostream>
#include <format>
#include <cstdlib>
#include <algorithm>
#include <ctime>

using namespace std;
void call_by_value(int[][4]);
void call_by_point(int(*point)[4]);
void call_by_ref(int(& ref)[3][4]);
void sort_data_orgin(int arr[10]); //call_by_value 이지만 sort가 원본데이터에다 영향을미친다
void first_dimemsion_get(int *arr);//1차원 배열이므로 단순 포인터로 매개변수를 받는다
int main() {
	int data[3][4];
	int(&ref)[3][4] = data;
	srand(static_cast<unsigned int>(time(NULL)));
	int i = 0;
	for (int i = 0; i < 3; i++) {
		for (int k = 0; k < 4; k++) {
			ref[i][k] = rand() % 30; //0부터 10까지
		}
	}
	call_by_value(data);
	int(*point)[4];//배열을지칭하는 포인터 열의 갯수만 괄호안에 넣어준다
	point = data;
	call_by_point(point);
	call_by_ref(ref); //참조자를 매개변수로 전달한다
	call_by_ref(data); //원본배열을 매개변수로 전달한다

	int first_dimension[10];
	int(& dd)[10] = first_dimension; //참조자 first demsion이 1차원 10배열임
	cout << "1차원 배열의 원소를 출력합니다";
	for (int i = 0; i < 10; i++) {
		first_dimension[i] = rand() % 20 + 5; //구간 5~16
		cout << first_dimension[i] << " ";
	}
	cout << endl;
	sort_data_orgin(first_dimension);//1차원배열을 인수로전달한다
	int* first_demension_point;// 배열을 저장하는 포인터이지만 1차원은 배열포인터를 사용안한다
	first_demension_point = first_dimension; //1차원배열 바로 대입
	first_dimemsion_get(first_demension_point);
	cout << "debug"<<endl;

}
void call_by_value(int data [][4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << format("{} ", data[i][j]);

		}
		cout << endl;
	}
	cout << endl;
}
void call_by_point(int(*point)[4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << format("{} ", ( * point+i)[j]); //주소+정수=주소에 참조에 J번쨰 배열

		}
		cout << endl;
	}
	cout << endl;
}
void call_by_ref(int(&ref)[3][4]) {
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++) {
			cout << format("{} ", ref[i][j]);
		}
		cout << endl;
	}
	cout << endl;
	
}
void sort_data_orgin(int arr[10]) {
	sort(arr, arr + 10); //call_by_value 이지만 원본데이터에 영향을 받는다

}
void first_dimemsion_get(int* arr)
{
	for (int i = 0; i < 10; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
