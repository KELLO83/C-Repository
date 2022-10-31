#include <iostream>
#include <algorithm>
#include <format>
#include <string>
using namespace std;
int main() {

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