#include <iostream>
#include <format>
class Circle {
	int rad;
public:
	Circle();
	Circle(int);
	double get_area();
	int get_rad() { return this->rad; };
};
Circle::Circle() :Circle(1) {}
Circle::Circle(int data) {
	this->rad = data;
}
double Circle::get_area() {
	return 3.14 * this->rad * this->rad;
}
void get_Circle_point(Circle*);
void get_number_point(int*);
using namespace std;
int main() {
	Circle array[3] = { Circle(),Circle(10),Circle(20) };
	Circle* point_array[3] = { &array[0],&array[1],&array[2] }; //Circle()생성자 호출을하자마자 바로 대입을 할수없다
	//Circle* pppp[3] = { &Circle(),&Circle(10),&Circle(20) }; //에러 발생 안되는 이유는??? =생성자호출후 객체를 저장할 공간할당부여x =>해결완료

	Circle* P = array; //배열명=주소로 치환된다

	int int_array[4] = { 1,2,3 };
	int* int_point_array;//따라서 배열 포인터는 1차원 배열에서는 아무런 의미가 없으며, 2차원 이상의 배열에서만 의미를 가집니다. 1차원에서는 배열포인터 사용x
	int_point_array = int_array;
	P = array;
	cout << "원본 데이터 주소"<<array << endl;
	get_Circle_point(P);
	get_number_point(int_point_array);

}
void get_Circle_point(Circle* data) {
	cout << "전달받은 주소값" << data << endl;

	for (int i = 0; i < 3; i++) {
		cout << format("{} 번째 원 반지름 {} 면적 {}", i, data[i].get_rad(), data[i].get_area());
		cout << endl;


	}
}
void get_number_point(int* data) {
	for (int i = 0; i < 3; i++) {
		cout << data[i] << endl;
		cout << *(data + i) << endl;
	}
}