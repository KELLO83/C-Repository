#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���� ���ڿ��� �Է��ϼ���";
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
			s = s.substr(0,i); //0��°�ε������� i����ŭ ¥����
			break;
		}
	}
	cout << s << endl;
	
	while (true){
		int findex = s.find("+", start_index);
		if (findex == -1) { // + ��ȣ�� ã������
			string part = s.substr(start_index); //�������κп��� ���ڰ��ִ�?
			if (part == "") break; // �������κ��� �����̶�� ����
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = findex - start_index;
		string part = s.substr(start_index, count); //)	str�� n��° index���� k���� ���ڸ� �κй��ڿ��� ��ȯ
		cout << part << endl;
		sum += stoi(part);
		start_index = findex + 1;  // ���������� ������ +��ȣ�� idx �� �պ��ͽ����Ѵ�
	}
	cout << "���ڵ��� ����" << sum << endl;

}	