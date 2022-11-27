#include <iostream>
#include <string>
using namespace std;

int main() {
	/*&가 입력될 때까지 여러 줄의 영문 문자열을 입력 받고,
	찾는 문자열과 대치할 문자열을 각각 입력 받아 문자열을 변경하라.
	*/
	string s;
	cout << "문자열을 입력하세요";
	getline(cin, s, '&');
	cout << s;
	string f, r;
	cin.ignore();
	cout << " 검색할 문자열 입력";
	getline(cin, f);
	cout << "바꿀 문자열 입력";
	getline(cin, r);
	
	int start_index = 0;
	while (true)
	{
		int findex = s.find(f, start_index); // start_index부터 f문자열의시작점을 반환한다
		if (findex == -1) { // 검색실패
			break;
		}
		s.replace(findex, f.length(), r); //n번쨰 인덱스부터 k개의문자를 r로 치환한다

		start_index = findex + r.length();

	}
	cout << s << endl;

}