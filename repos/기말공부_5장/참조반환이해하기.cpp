#include <iostream>
using namespace std;

int& RefRetun(int& ref) { // �Ű������������ڸ� ��ĪRef�� ����ϰڴ�
	ref++;		 // ref������ �� num1�����̴�
	return ref; //�����ڴ� num1�� ��Ī�̸�
	// ��ȯ�� num1������ ��ȯ�Ѵ�
}
int main() {
	int  num1 = 10;
	int& num2 = RefRetun(num1);//�Ű����� ���޽� &���̸�ȵȴ�
	cout << "num1=" << num1<<endl; // 11
	cout << "num2=" << num2 << endl;// 11

}