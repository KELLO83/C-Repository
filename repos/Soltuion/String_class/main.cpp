#include <iostream>
#include <cstring>
#include <format>
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
		cin >> user_id;
		if (user_id.empty()==true) {
			break;
		}
		if (user_id==pass_user_id) {
			cout << format("password를 입력해주세요");
			cin >> user_pass;
			if (user_pass == pass_user_pass) {
				while (true)
				{


					cout << format("SQL->");
					cin >> user_input;
					if (user_input.empty() == true) {
						break;
					}
					else
					{
						cout << user_input << endl;
					}
				}
			}
		}
		else
		{
			cout << format("해당 ID {}가 없습니다", user_id) << endl;

		}

	
	}
	cout << "프로그램을 종료합니다";
}