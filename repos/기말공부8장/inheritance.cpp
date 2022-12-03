#include <iostream>
using namespace std;
class TV {
	int size;
public:
	TV() { this->size = 1; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }

};
class WideTv : virtual public TV {
	bool videlon;
public:
	WideTv(int size, bool videoin) :TV(size) { //위임생성자
		this->videlon = videlon;
	}
	bool getvideoin() {
		return videlon;
	}
};
class SmartTV : virtual public WideTv {
	string ipaddr;
public:
	SmartTV(string ipaddr, int size) : WideTv(size, true) {
		this->ipaddr = ipaddr;
	}
	string get_ip_addr() {
		return this->ipaddr;
	}
};
int main() {

}