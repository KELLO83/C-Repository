#include <iostream>
#include <string>
using namespace std;

char& user_find(char s[], int index) {
	return s[index];
}
int main() {
	char name[] = "KELLO";
	cout << name << endl;
	user_find(name, 0) = 'S'; // name의 0번쨰 idx에대한 공간에대한 참조
	cout << name << endl;
	char& ref = user_find(name, 1); // name
	ref = 'q';
	cout << name << endl;

}