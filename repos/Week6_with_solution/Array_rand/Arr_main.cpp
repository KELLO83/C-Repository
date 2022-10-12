#include <iostream>
#include <format>
#include <cstdlib>
#include <time.h>
#include <array>
using namespace std;
int sum(int data[]);
double average(int);
int main() {
	int res = 0;
	int Myarray[5][5] = {};
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			Myarray[i][j] = rand() % 5 + 1;
		}
	}
	int count = 0;
	cout << format("1 2 3 4 5 sum avg\n");
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			cout << format("{} ", Myarray[i][j]);
		}
		res = sum(Myarray[count]);
		cout << format("{} {}",res,average(res));
		count += 1;
	}



}
int sum(int data[]) {
	int total = 0;
	for (int i = 0; i < (sizeof(data) / sizeof(int)); i++) {
		total += data[i];
	}
	return total;
	
}
double average(int total) {
	return total / 5;
}