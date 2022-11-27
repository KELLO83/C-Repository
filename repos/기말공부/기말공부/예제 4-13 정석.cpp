#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "문자열을 입력하세여";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		//오른쪽 회전
		string first = s.substr(s.length() - 1, 1);
		string sub = s.substr(0,s.length()-1);
		s = first + sub;
		cout << s << endl;
	}
	for (int i = 0; i < s.length(); i++) {
		//왼쪽으로 회전
		string sub = s.substr(1, s.length()-1);
		string first = s.substr(0, 1);
		s = sub + first;
		cout << s << endl;


	}
}