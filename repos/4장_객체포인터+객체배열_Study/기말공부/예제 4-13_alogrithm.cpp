#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void algorithm__right(string p) {
	// �������� 2ĭ�̵�
	rotate(p.begin(), p.begin() + 2, p.end());
	cout << p << endl;
}
void algorithm__left(string p) {
	//���������� 3ĭ�̵�
	rotate(p.begin(), p.end() - 3, p.end());
	cout << p << endl;
}
int main() {
	string s;
	cout << "���ڿ��� �Է��ϼ���";
	getline(cin, s);
	cout << "���ڿ��� ����" << s.length() << endl ;
	for (int i = 0; i < s.length(); i++) {
		//������ 1ĭ�� �̵��ϸ� ������Ѵ�
		rotate(s.begin(), s.end() - 1, s.end());
		cout << s << endl;
	}
	cout << endl;

	for (int i = 0; i < s.length() / 2; i++) {
		//�������� 2ĭ���̵�
		rotate(s.begin(), s.begin() + 2, s.end());
		cout << s << endl;
	}
	cout << endl;


	
	
}