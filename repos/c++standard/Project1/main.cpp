#include <iostream>
#include <string>
#include <format>
using namespace std;
int main() {
	int a(10);
	char buffer[10]("hello");
	cout <<"엔터키작동"<<endl<<a << buffer << endl;
	cout <<"std::format형식으로 작동합니다"<<endl<< format("{}{}", a, buffer) << endl;
	auto b(a); 

	cout << format("b의 sizeof는 {}입니다", sizeof(b)) << endl << format("해당 데이타값은 {}입니다", b) << endl;




}