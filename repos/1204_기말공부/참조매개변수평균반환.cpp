#include <iostream>
#include <cstdlib>
using namespace std;

double average(int *a, int size, double& avg) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += a[i];
	}

	return (double)total / size;

}
int main() {
	double avg = 0;
	int grade[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		grade[i] = rand() % 100 + 1;// 1부터 100까지
		cout << grade[i] << endl;
	}	

	avg = average(grade, sizeof(grade) / sizeof(int), avg);
	cout << "평균 ---->" << avg << endl;

	

}