#include <iostream>
#include <string>
using namespace std;

int main() {
	/*&�� �Էµ� ������ ���� ���� ���� ���ڿ��� �Է� �ް�,
	ã�� ���ڿ��� ��ġ�� ���ڿ��� ���� �Է� �޾� ���ڿ��� �����϶�.
	*/
	string s;
	cout << "���ڿ��� �Է��ϼ���";
	getline(cin, s, '&');
	cout << s;
	string f, r;
	cin.ignore();
	cout << " �˻��� ���ڿ� �Է�";
	getline(cin, f);
	cout << "�ٲ� ���ڿ� �Է�";
	getline(cin, r);
	
	int start_index = 0;
	while (true)
	{
		int findex = s.find(f, start_index); // start_index���� f���ڿ��ǽ������� ��ȯ�Ѵ�
		if (findex == -1) { // �˻�����
			break;
		}
		s.replace(findex, f.length(), r); //n���� �ε������� k���ǹ��ڸ� r�� ġȯ�Ѵ�

		start_index = findex + r.length();

	}
	cout << s << endl;

}