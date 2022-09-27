#include <iostream>
#include <format>
#include <cstring>
using namespace std;
//char filter_numebr(char*);
int main() {
	int n1, n2;
	char user_operator;
	char buffer[10];//10칸할당하지만 실질적인칸은 9칸 마지막칸 널문자
	char number_buffer[10];
	char number_buffer_2[10];
	cout << "Expression:";
	cin >> buffer;
	int count = 0;
	for (int i = 0; i < strlen(buffer); i++) { 
		if (isdigit(buffer[i]) !=false) {
			number_buffer[i] = buffer[i];
			count += 1;
		}
		else if (isdigit(buffer[i]) == false) {
			user_operator = buffer[i];
			count += 1;
			break;
		}
	}
	//n1 = stoi(number_buffer);
	//필터링 작업 함수추가
	int i = 0;
	while (buffer[count]!=NULL)
	{
		number_buffer_2[i] = buffer[count];
		i += 1;
		count += 1;

	}
	n2 = (int)number_buffer_2;

	count << n1 << n2 << user_operator;

}
//
//char filter_numebr(char *data)
//{
//	for (int i = 0; i < strlen(data); i++) {
//		if (*data == '52') {
//
//		}
//	}
//	return 0;
//}
