#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int* p = new int[5]; // �ڷ��� * ���� = new �ڷ���[�迭ĭ��]
	for (int i = 0; i < 5; i++) {
		p[i] = rand() % 100; // 0���� 99����
		cout << p[i] << endl;
	}
	cout << "�׽���" << endl;
	int* q = new int[3]; // T* pointer = new T;
	for (int i = 0; i < 3; i++) {
		*(p + i) = rand() % 10 + 5; // 5���� 14����
		cout << *(p + i) << endl;
	}
	delete[] p; // �迭�� delete[] �����ͺ��� �� ������ ���־���Ѵ�
	delete[] q;

	cout << "���α׷��� �����մϴ�" << endl;
 	return 0;
	
}