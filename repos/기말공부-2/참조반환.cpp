#include <iostream>
#include <string>
using namespace std;

char& user_find(char s[], int index) {
	return s[index];
}
int main() {
	char name[] = "KELLO";
	cout << name << endl;
	user_find(name, 0) = 'S'; // name�� 0���� idx������ ���������� ����
	cout << name << endl;
	char& ref = user_find(name, 1); // name
	ref = 'q';
	cout << name << endl;

}