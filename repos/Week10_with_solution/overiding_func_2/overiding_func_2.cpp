#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int sum(int a, int b) {
	if (a > b) {
		swap(a, b);
	}
	int total = 0;
	for (int i=a;i<=b;i++){
		total += i;
	}

	return total;
}
int sum(int a) {
	int total = 0;
	for (int i = 0; i <= a; i++) {
		total += i;
	}
	return total;


}

int main() {
	int n1, n2;

	while (true)
	{
		cout << "정수를 입력하세여 음수입력시 프로그램시 종료";
		cin >> n1 >> n2;
		if (n1 < 0 || n2 < 0) {
			cout << "프로그램을 종료합니다";
			break;
		}
		else
		{
			cout<<sum(n1,n2)<<endl;
			cout << sum(n1)<<endl;
		}
	}
	
	
}