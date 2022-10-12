#include <iostream>
#include <format>

inline int odd(int x) {
	return x % 2;
}

int main() {
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		if (odd(i)) {
			sum += i;
		}
		
	}
	std::cout << sum;

//인라인 제약사항 긴함수는 적절하지않다
}