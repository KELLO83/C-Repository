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
		if (user_id.empty() == true) {
			break;
		}
		if (user_id == pass_user_id) {
			cout << format("password를 입력해주세요");
			//cin.ignore();//remain buffer '\n' that clear buffer geline method inlcude whitespace while input '\n' 
			getline(cin, user_pass);
			if (user_pass.empty() == true) {
				break;
			}
			if (user_pass == pass_user_pass) {
				while (true)
				{


					cout << format("SQL->");
					getline(cin, user_input);
					if (user_input.empty()==true) {
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
	cout << "프로그램을 종료합니다";
}

/*
C++에서는 string 라이브러리로 getline(cin,str) 함수를 사용할 수 있다.

cin은 공백 입력시 문자열의 입력이 종료되나, 이 함수는 공백 또한 값으로 입력 받는다.

즉 한줄을 입력받는게 가능하다.

*/