#include <iostream>
#include <cstring>
#include <format>
#include <cctype>
using namespace std;
int main() {
	string str;
	string user_id;
	string user_pass;
	string pass_user_id = "scott";
	string pass_user_pass = "tiger";
	string user_input;
	while (true)
	{
		cout << format("id를입력해주세요");
		getline(cin, user_id);
		if (user_id == " ") {
			break;
		}
		if (user_id.empty() == true) {
			break;
		}
		if (user_id == pass_user_id) {
			cout << format("password를 입력해주세요");
			getline(cin, user_pass);
			if (user_pass == " ") {
				break;
			}
			if (user_pass.empty() == true) {
				break;
			}
			if (user_pass == pass_user_pass) {
				while (true)
				{


					cout << format("SQL->");
					getline(cin, user_input);
					if (user_input == " ") {
						break;
					}
					if (user_input.empty() == true) {
						break;
					}
					else
					{
						cout << user_input << endl;
					}
				}
				break;
			}
			else
			{
				cout << format("password가 불일치합니다") << endl;
				continue;
			}
		}
		else
		{
			cout << format("해당 ID {}가 없습니다", user_id) << endl;

		}


	}
	cout << endl << "프로그램을 종료합니다";
}