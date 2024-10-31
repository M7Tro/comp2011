#include <iostream>

using namespace std;

void f(int x2, int& y2)
{
    short a = 9, b = 99;
    cout << endl << "Inside f(int, int&)" << endl;
    cout << "x2 = " << x2 << '\t' << "address of x2 = " << &x2 << endl;
    cout << "y2 = " << y2 << '\t' << "address of y2 = " << &y2 << endl;
    cout << "a = " << a << '\t' << "address of a = " << &a << endl;
    cout << "b = " << b << '\t' << "address of b = " << &b << endl;
}

int main()
{
    int x = 10, y = 20;
    cout << endl << "Inside main()" << endl;
    cout << "x = " << x << '\t' << "address of x = " << &x << endl;
    cout << "y = " << y << '\t' << "address of y = " << &y << endl;
    f(x, y);
    return 0;

    /*
    Output:
        Inside main()
        x = 10  address of x = 0x16aff3108
        y = 20  address of y = 0x16aff3104

        Inside f(int, int&)
        x2 = 10 address of x2 = 0x16aff30bc
        y2 = 20 address of y2 = 0x16aff3104
        a = 9   address of a = 0x16aff30ae
        b = 99  address of b = 0x16aff30ac
    */

    /*
        Note how the adress of y from main is passed onto y2 in th efunction.
        x2 has a different address, similar to that of a and b local ariables.
    */

}