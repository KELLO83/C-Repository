#include <iostream>


using namespace std;
bool get_sum(int (& a)[6],int &sum_res) {
	for (int i = 0; i < 6; i++) {
		sum_res = sum_res + a[i];
	}
	if (sum_res > 0)return true;
	else return false;
}
bool get_average(int(&a)[6],int sum,double &res) {
	res= static_cast<double>(sum) /((sizeof(a)/sizeof(int)));
	if (res > 0) {
		return true;
	}
	return false;
	
}	
int main() {
	
	int data[] = {1,2,3,4,5,6 };
	int(&ref)[sizeof(data)/sizeof(int)] = data;
	int sum = 0;
	int& sum_res = sum;
	get_sum(ref,sum_res);
	double average = 0;
	if (get_average(ref, sum,average)) {
		cout << "get_average함수 성공" << endl;
		cout << "평균은" << average << "입니다" << endl;
	};
	


}
