#include <iostream>
using namespace std;
int main(void)
{
    char(*arr)[3];

    char tmp1[5] = { 'b', 'l', 'o','\0'};
    int number[3] = { 1,2,3 };
    char string[10] = "hello";
    printf("\n"); printf("\n");

  
    cout << tmp1<<endl;
    cout << &tmp1 << endl;
    cout << number<<endl;
    cout << &number << endl;
    cout << string << endl;
    cout << &string << endl;

    tmp1[0] = 'a';
    cout << tmp1;
}
