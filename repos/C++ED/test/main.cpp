#include <iostream>
#include <format>
#include "Circle.h"


int main(void)
{
	Circle array[3] = { Circle(),Circle(),Circle(5) };
	array[1].setradious(10);

	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		std::cout << std::format("{}원의 반지름은 {} 넓이 {} 입니다", 
			i,array[i].getARadious(),array[i].getArea())<<std::endl;
	}

	//객체포인터를 이용하여 생성해보기

	Circle data[2] = { Circle(),Circle(10) };
	data[0].setradious(20);


	Circle* point;
	point = data; //배열명은 주소이므로 포인터 대입가능 그러나 data[0]번지의 데이터만들어간다
	Circle* pp=&data[1];//두번째에있는 객체는 주소연자를 통해 전달한다
	
	std::cout << std::format("1번지원의 반지름은 {} 넓이 {}입니다", (*point).getARadious(), point->getArea())<<std::endl;
	std::cout << std::format("2번지원의 반지름은 {} 넓이 {} 입니다", pp->getARadious(), (*pp).getArea());



}