#include <iostream>
#include <cstring>
#include <format>
using namespace std;
int main() {
	char login[10];
	char password[10];
	char input_data;
	while (true)
	{
		cout << format("사용자로부터 ID를 입력받습니다");
		cin >> login;
		if (login == NULL) {
			break;
		}
		if (strcmp(login, "scott") != 0) {
			cout << format("해당 id  {}가없습니다 다시입력해주세여", login)<<endl;

		}
		else
		{
			cout << "password를 입력해주세여->";
			cin >> password;
			if (strcmp(password, "tiger") != 0) {
				cout << format("사용자가 입력한 password {}가 불일치합니다", password);
				continue;
			}
			else
			{
				cout << "SQL>";
				cin >> input_data;
				if (input_data == NULL) {
					break;
				}
				cout << input_data << endl;
			}
		}

	}
	cout << "프로그램이 종료됩니다";

}