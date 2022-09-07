### c++ 공부한것들
### Mark down 연습중입니다... 
>This is a first commit
>    > This is git push orgin/main

1.순서가있는목록 ㅎㅎ.
2.두번째 순서
3.세번쨰 순서

*순서가 없는 메인 1
    *순서가 없는 서브1
    *순서가 없는 서브 2
*순서가 없는 메인 2

4개의 공백 또는 하나의 탭으로 들여쓰기를 만나면 변환되기 시작하여 들여쓰지 않은 행을 만날때까지 변환이 계속된다.


들여쓰기 This is nomal paragraph:
    This is code block
end code block

들여쓰기 적용 This is nomal paragraph  
    This is code block  
end code block  

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
