#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "덧셈 문자열을 입력하세요";
	cin >> s;
	int sum = 0;
	int start_index = 0;
	char opp = '+';
	int opp_count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == opp) {
			opp_count += 1;
		}
		if (opp_count >= 3) {
			cout << i << endl;
			s = s.substr(0,i); //0번째인덱스부터 i개만큼 짜른다
			break;
		}
	}
	cout << s << endl;
	
	while (true){
		int findex = s.find("+", start_index);
		if (findex == -1) { // + 기호를 찾지못함
			string part = s.substr(start_index); //나머지부분에서 숫자가있니?
			if (part == "") break; // 나머지부분이 공백이라면 종료
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = findex - start_index;
		string part = s.substr(start_index, count); //)	str의 n번째 index부터 k개의 문자를 부분문자열로 반환
		cout << part << endl;
		sum += stoi(part);
		start_index = findex + 1;  // 시작지점은 마지막 +기호의 idx 의 앞부터시작한다
	}
	cout << "숫자들의 합은" << sum << endl;

}	