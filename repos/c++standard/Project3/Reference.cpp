#include <iostream>
#include <format>
using namespace std;
int main() {
	int ndata = 10;
	int& ref = ndata;//ndata에 대한 참조자 선언

	ref = 120; //ref참조자의 값을 20으로 변경하였다

	cout << ndata << endl;//참조자값을 변경하면 원본도 변경된다  포인터로 작동하지만 포인터로 보이지않는다





	int* pdata = &ndata;//포인터를 쓰는것과 유사방식

	cout << format("변경하기전 ndata의 값{}", ndata)<<endl;

	*pdata = 20;

	cout << format("변경을 한후 ndatd의 값{}", ndata) << endl;





	// 결론 덩치가큰 자료는 주소를 전달하는것이 효율적이다




}