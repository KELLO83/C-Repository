#include <iostream>
char* get_grade(int);

int main() {
	int data[2];
	char* res;
	std::cin >> data[0] >> data[1];

	for (int i = 0; i < 2; i++) {
		res = get_grade(data[i]);
		std::cout << res<<std::endl;

	}
}
char* get_grade(int data) {
	char* string = (char*)malloc(sizeof(char*) * 20);
	if (data > 50) {
		string = (char*)"PASS";

		return string;
	}
	else
	{
		string = (char*)"NP";
	
		return string;

	}
}