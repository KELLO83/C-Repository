#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cout << "���ڿ��� �Է��ϼ���";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		//������ ȸ��
		string first = s.substr(s.length() - 1, 1);
		string sub = s.substr(0,s.length()-1);
		s = first + sub;
		cout << s << endl;
	}
	for (int i = 0; i < s.length(); i++) {
		//�������� ȸ��
		string sub = s.substr(1, s.length()-1);
		string first = s.substr(0, 1);
		s = sub + first;
		cout << s << endl;


	}
}