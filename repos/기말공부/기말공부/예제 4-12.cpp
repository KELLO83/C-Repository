#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string names[3];
	for (int i = 0; i < 3; i++) {
		cout << i << "번째 입력" << endl;
		getline(cin, names[i]);
		cout << names[i] << endl;
	}
	cout << endl;
	sort(names, names + 3); // 문자열 이름순으로 출력한다 자기파괴 Sort(start,end
	for (int i = 0; i < 3; i++) {
		cout << names[i] << endl;
	}
	sort(names, names + 3, greater<string>()); // 세번째인수 greater<자료형>() 내림차순으로 정렬한다
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << names[i] << endl;
	}
}