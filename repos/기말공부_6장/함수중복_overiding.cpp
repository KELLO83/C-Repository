// �Լ��ߺ��� �Լ����̰��� �Ű������� �ٸ� �Լ���
// �������̵��̶�� ��Ī�Ѵ�


#include <iostream>
#include <algorithm>
using namespace std;
int sum(int);
int sum(int, int);
int main() {
	int a, b, c;
	int res1, res2;
	cout << "�ΰ��� �Ű������� �Է��ϼ���";
	cin >> a >> b;
	cout << "�Ѱ��� �Ű������� �Է��ϼ���";
	cin >> c;

	res1=sum(a, b);
	res2=sum(c);
	cout << "a���� b��������" << res1 << endl;
	cout << "0���� c������ ��" << res2 << endl;
}

int sum(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++) {
		sum += i;
	}
	return sum;
}
int sum(int a, int b) {
	if (a > b) {
		swap(a, b);
	}
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	return sum;
}
