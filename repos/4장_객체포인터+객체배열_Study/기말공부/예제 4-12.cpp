#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string names[3];
	for (int i = 0; i < 3; i++) {
		cout << i << "��° �Է�" << endl;
		getline(cin, names[i]);
		cout << names[i] << endl;
	}
	cout << endl;
	sort(names, names + 3); // ���ڿ� �̸������� ����Ѵ� �ڱ��ı� Sort(start,end
	for (int i = 0; i < 3; i++) {
		cout << names[i] << endl;
	}
	sort(names, names + 3, greater<string>()); // ����°�μ� greater<�ڷ���>() ������������ �����Ѵ�
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << names[i] << endl;
	}
}