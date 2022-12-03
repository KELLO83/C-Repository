#include <iostream>
#include <algorithm>
using namespace std;
float square(float a,float b) {
	return a + b;
}
double square(double a,double b){
	return a - b;
}
long square(long a,long b)
{
	return a * b;
}
double square(int a, int b) {
	if (a > b) {
		swap(a, b);
	}
	return static_cast<double>(b) / a;
}
int main() {
	cout << square(4.0f,2.0f)<<endl;
	cout << square(4.0, 2.0)<<endl;
	cout << square(4L, 2L)<<endl;
	cout << square(4, 1)<<endl;
	
}