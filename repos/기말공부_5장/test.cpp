#include <iostream>
#include <cstring>
using namespace std;
class Person {
    char* name;
    int id;
public:
    Person(const char* name, int id) {
        this->name = (char*)name;
        this->id = id;
    }

    void change_name(char* name) {
        this->name = name;
    }
    void show() {
        for (int i = 0; i < 10; i++) {
            cout << *name;
            name++;
        }
    }
};
int main() {;
    Person* p1 = new Person("hello", 35);
    p1->show();

}