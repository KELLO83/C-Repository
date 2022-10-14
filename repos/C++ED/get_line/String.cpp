#include <iostream>
#include <cstring> //strcmp strncmp를 사용하기 위한 헤더파일
#include <format>


using namespace std;
int main() {
	char target[20] ="password";
	char user[20];
	cout << "패스워드를 입력하세요";
	cin >> user;
	if (strcmp(user, target)==0) { //일치하지않을경우 str1>str2 0보다큰값 아니면0보다작은값
		cout << format("문자열이 일치합니다") << endl;
	}

	if (strncmp(user, target, 2)==0) {
		cout << format("앞에 두개문가 일치합니다")<<endl;
	}

	char array[20];
	cout << format("array의 문자열을 입력해주세요");
	cin.getline(array, 20,'\n');//엔터기를만날떄까지 입력받는다
	cout << array;
	
}