#include <iostream>
#include <format>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string str[5];
	for (int i = 0; i < 5; i++) {
		getline(cin, str[i]);
	}
	sort(str, str + 5);
	cout << "가장먼저 나오는 이름" << str[0] << endl;
	cout << "가장 늦게 나오는 이름" << str[4] << endl;
	int user[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "학번입력바람";
		cin >> user[i];
	}
	sort(user, user + 5);
	cout << "가장 작은 학번의 숫자" << user[0] << endl;
	cout << "가장 큰 학번의 숫자  " << user[4] << endl;
}