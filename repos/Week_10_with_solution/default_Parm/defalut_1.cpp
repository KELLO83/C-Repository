#include <iostream>

using namespace std;

int g(int x=0, int y = 0, int z = 0, int k = 0) {
	cout << x <<" " << y <<" " << z<<" " << k<<" " << endl;
	return x + y + z + k;
}
int main() {
	cout<<g(10)<<endl;
	cout << g(10, 5)<<endl;
	cout << g(10, 5, 20, 30) << endl;
	cout << g(10, 5, 20)<<endl;;

}