#include <iostream>
#include <algorithm>
using namespace std;
void swap__(int& a, int& b) {
	swap(a, b);
}
int main() {
	int n = 2;
	int m = 20;

	cout << "������" << n << " " << m <<endl;
	swap__(n, m);
	cout << "������" << n << " " << m;



	
}