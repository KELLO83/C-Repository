#include <iostream>

using namespace std;
int get_average(int,int);
char* get_grade(int);
int main() {
	int arr[2][2] = {0};
	int score_average_buffer[2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++) {
			cin >> arr[i][j];
		}
	}
	for (int t = 0; t < 2; t++) {
		for (int j = 0; j< 2; j++) {
			score_average_buffer[t] = get_average(arr[t][0], arr[t][1]);
		}
	}
	for (int k = 0; k < 2; k++) {
		get_grade(score_average_buffer[k]);
	}
	char* res;
}
int get_average(int d1,int d2) {
	return (d1 + d2) / 2;


}
char* get_grade(int data) {
	char *string = (char*)malloc(sizeof(char) * 20);
	if(data>90){
		string = (char*)"A+";
		return string;
	}
	else
	{
		string = (char*)"P";
		return string;
	}
}