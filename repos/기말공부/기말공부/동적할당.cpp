#include <iostream>

int main() {
	int* p;
	p = new int;
	if (!p) {
		std::cout << "메모리 할당불가";
		return 0;
	}
	*p = 5;
	std::cout << p << " " << *p << std::endl;
	

	delete p;

}