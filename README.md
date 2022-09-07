### c++ 공부한것들

```C++
#include <iostream>

using namespace std;
int average_calc(int,int,int);
void discriminant(int average);
void all_print_data(int dd[3][4]);
int main() {
	int data[3][4];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> data[i][j];
		}
	}
	cout << "\n" << " 학번 " << " C++ " << " JAVA " <<" DS "<<" 합계 " << " 평균 " << " 등급 " << "\n";
	cout << "------------------------------------------\n";
	int average = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << " ";
			cout << data[i][j];
			cout << " ";
		}
		cout << " ";

		average=average_calc(data[i][1], data[i][2], data[i][3]);
		cout << average;
		cout << " ";
		cout << " ";
		discriminant(average);
		cout << "\n";

	}
	
}

void all_print_data(int dd[3][4]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; i < 4; j++) {
			cout << dd[i][j];
			cout << " ";

		}
		cout << "\n";

	}
}
int average_calc(int c, int java, int ds) {
	return (c + java + ds) / 3;
}
void  discriminant(int average) {
	if (average >= 95) {
		cout << "A+";
    }
}
```

[Google](https://google.com, "구글로 바로가기")