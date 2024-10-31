#include <iostream>
using namespace std;

int main()
{
    int x = 10, z = 20;
    int* y = &x; 
    cout << "x = " << x << '\t' << "address of x = " << &x << endl;
    cout << "z = " << z << '\t' << "address of z = " << &z << endl;
    cout << "y = " << y << '\t' << "address of y = " << &y << endl;

    z = *y; //dereferencing a pointer y that is pointing to x
    cout << endl;
    cout << "z = " << z << '\t' << "address of z = " << &z << endl;
    cout << "y = " << y << '\t' << "*y = " << *y << endl;
    return 0;

    /*
        Output:

            x = 10  address of x = 0x16ba73108
            z = 20  address of z = 0x16ba73104
            y = 0x16ba73108 address of y = 0x16ba730f8

            z = 10  address of z = 0x16ba73104
            y = 0x16ba73108 *y = 10

    */

    /*
        Note that outputing a pointer returns the address of the variable it points to.

        But the pointer itself has a different address. 

        To get the value at the pointed address, use * dereferencing operator. 
    */
}