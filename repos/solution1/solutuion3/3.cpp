#include <iostream>
#include <algorithm>
using namespace std;

void addArray(int a[], int size); 
void makesort(int[], int size);
void printArray(int[], int size);
void makesort_orgin(int a[], int size);
int main() {
	int student[5];
	int total = 0;
	int res[2];
	cout << "5명의 학생 C++ 성적을 입력하세여" << endl;
	addArray(student, sizeof(student) / sizeof(int));
	makesort(student, sizeof(student) / sizeof(int));
	printArray(student, sizeof(student) / sizeof(int));
	for (int i = 0; i < sizeof(student) / sizeof(int); i++) {
		total += student[i];
	}
	cout << "5명 학생의 성적의 합은" << total << "입니다" << endl;
	int average = total / (sizeof(student) / sizeof(int));
	cout << "5명 학생의 성적 평균은" << average << "입니다" << endl;
	cout << "5명 학생중 최대 성적은" << student[0] << "입니다" << endl;
	cout << "5명 학생중 최소 성적은" << student[4] << "입니다" << endl;

	makesort_orgin(student, (sizeof(student) / sizeof(int)));
	return 0;

}
void addArray(int a[], int size)
{
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
}
void makesort(int a[], int size) { //sort을 이용한 sort

	sort(a,a+5);
	cout << "최저점" << a[0] << endl;
	cout << "최고점" << a[4] << endl;



}
void printArray(int a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << (i+1)<<"번째 학생의 성적은" << a[i] << endl;
	}
}
void makesort_orgin(int a[], int size) { //swap 형식을 이용한 sort
	for (int i = 0; i < size; i++) { // 0부터 크기까지
		for (int j = i + 1; j < size; j++) {
			//j는 시작지점 그다음부터 시작해서 크기까지 
			if (a[i] > a[j]) {// 계속 비교한다 i[0] 부터 i[1]~i[size]까지
				// 그다음 i[1]부터 i[2]~i[size]까지
				// i[n]부터 i[n+1]~i[size] 까지
				swap(a[i], a[j]);
			}
		}
	}

	for (int k = 0; k < size; k++) {
		cout << a[k] << endl;
	}

	
}