#include <iostream>
#include <cstring>
#include <format>
using namespace std;
int main() {
	char login[10];
	char password[10];
	char pass_login[10]("scott");
	char pass_pasword[10]("tiger");
	char user_input[10];
	
	while (true)
	{
		cout << format("id를 입력해주세요");
		cin >> login;
		if (strlen(login) == 0) {
			break;
		}
		if (_stricmp(login, pass_login) == 0) {
			cout << format("password를 입력해주세여");
			cin >> password;
			if (_stricmp(password, pass_pasword) == 0) {
				while (true) {
					cout << format("SQL->");
					cin >> user_input;
					if (strlen(user_input) == 0) {
						break;
					}
					else {
						cout << user_input << endl;

					}
				}
				break;

			}

		}
		else
		{
			cout << format("해당 ID {}가 없습니다", login) << endl;

		}
	}
	cout << "프로그램을 정상 종료합니다";



}