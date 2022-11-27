#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void algorithm__right(string p) {
	// 완쪽으로 2칸이동
	rotate(p.begin(), p.begin() + 2, p.end());
	cout << p << endl;
}
void algorithm__left(string p) {
	//오른쪽으로 3칸이동
	rotate(p.begin(), p.end() - 3, p.end());
	cout << p << endl;
}
int main() {
	string s;
	cout << "문자열을 입력하세요";
	getline(cin, s);
	cout << "문자열의 길이" << s.length() << endl ;
	for (int i = 0; i < s.length(); i++) {
		//오른쪽 1칸씩 이동하며 출력을한다
		rotate(s.begin(), s.end() - 1, s.end());
		cout << s << endl;
	}
	cout << endl;

	for (int i = 0; i < s.length() / 2; i++) {
		//왼쪽으로 2칸씩이동
		rotate(s.begin(), s.begin() + 2, s.end());
		cout << s << endl;
	}
	cout << endl;


	
	
}