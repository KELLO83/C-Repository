#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int arr[8] = { 8,6,5,3,1,2,7,4 };

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 8; j++) {
			if (arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}

	for (int i = 0; i < 8; i++) {
		cout << arr[i] << " ";
	}
}