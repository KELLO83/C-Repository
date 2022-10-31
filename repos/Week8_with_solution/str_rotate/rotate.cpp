#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	string data;
	cout << "문자열을입력하세요";
	getline(cin, data);
	for (int i = 0; i < data.size(); i++) {
		rotate(data.begin(), data.end() - 1, data.end());
		cout << data<<endl;

	}
}