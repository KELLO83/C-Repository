#include <iostream>
#include <format>

void change(int&);// 매개변수가 int에대한 참조 형식이다
int main() {
	int *data = new int; //
	std::cout << std::format("사용자로부터 정수형 데이터를 input 받습니다") << std::endl;
	std::cin >> *data;
	std::cout<<std::format("사용자가 입력한 데이타는 {}입니다", *data)<<std::endl;

	change(*data);

	std::cout << std::format("변경된 데이타는{}입니다",*data);


}
void change(int& data) {
	if (data > 100) {
		data = 1000;

	}
	else
	{
		data = 0;
	}
}

