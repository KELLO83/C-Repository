#include <iostream>
#include <cstring>
#include <format>
using namespace std;
double average(int);
int total(int, int, int);
int main() {
	string studentId;
	string studentname;
	int grade_c;
	int grade_java;
	int grade_DS;

	double average_;
	int total_;

	cout << format("학번=>");
	getline(cin, studentId);
	cout << format("이름=>");
	getline(cin, studentname);
	cout << format("C++성적=>");
	cin >> grade_c;
	cout << format("JAVA 성적=>");
	cin >> grade_java;
	cout << format("DS성적=>");
	cin >> grade_DS;
	total_ = total(grade_c, grade_java, grade_DS);
	average_ = average(total_);
	cout << format("학번   이름  C++  JAVA  DS  합  평균") << endl;
	cout << format("------------------------------------") << endl;
	cout << format("{}  {}  {}  {}  {}  {}  {}", studentId, studentname, grade_c, grade_DS,
		grade_java, total_, average_);
}

double average(int data)
{
	return (data) / (float)3;
}

int total(int a, int b, int c)
{
	return a + b + c;
}
