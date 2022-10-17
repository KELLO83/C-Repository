#include <cstring>
#include <iostream>
#include <format>
using namespace std;
int main() {
	char str1[10] = "hello";
	char str2[10] = "helko";

	if (strncmp(str1, str2,3)==0) {
		cout << "pass";
	}
}