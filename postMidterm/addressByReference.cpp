#include <iostream>

using namespace std;

int main(){
    int x = 10, y = 20;
    short a = 9, b = 99;

    cout << "x = " << x << '\t' << "address of x = " << &x << endl;
    cout << "y = " << y << '\t' << "address of y = " << &y << endl;
    cout << "a = " << a << '\t' << "address of a = " << &a << endl;
    cout << "b = " << b << '\t' << "address of b = " << &b << endl;
    return 0;

    /*
    Outputted:
        x = 10  address of x = 0x16dba3108
        y = 20  address of y = 0x16dba3104
        a = 9   address of a = 0x16dba3102
        b = 99  address of b = 0x16dba3100
    */
}