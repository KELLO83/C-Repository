#include <iostream>
#include <algorithm>
using namespace std;
void swap__(int& a, int& b) {
	swap(a, b);
}
int main() {
	int n = 2;
	int m = 20;

	cout << "변경전" << n << " " << m <<endl;
	swap__(n, m);
	cout << "변경후" << n << " " << m;



	
}