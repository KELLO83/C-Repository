#include <iostream>
using namespace std;
class Rectangle {
    int width, length;
public:
    Rectangle();
    Rectangle(int, int );
    void setWidth(int w, int l) { width = w; length = l; }
    double getArea() { return width * length; }
};

Rectangle::Rectangle() {
    width = 1; length = 2;
    cout << "생성자 실행 면적= " << (width * length) << endl;
}
Rectangle::Rectangle(int w, int l) {
    width = w;
    length = l;
    cout << "생성자 실행 area = " << (w * l) << endl;
}


int main() {
    int width, length;
    while (true) {
        cout << "정수 가로 길이 입력 (음수이면 종료)>>";
        cin >> width;
        cout << "정수 세로 길이 입력 (음수이면 종료)>>";
        cin >> length;
        if (width < 0 || length < 0) break; //음수가 입력되어 종료된다.
        Rectangle* p = new Rectangle(width, length);
        cout << "사각형의 면적은" << p->getArea() << endl;
        delete p; //객체 반환

    }
}
