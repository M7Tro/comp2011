#include <iostream>
using namespace std;

int main() {
    int x1 = 10, x2 = 20;
    int *p1 = &x1;
    int *p2 = &x2; 

    *p1 = 5; //x1 = 5
    *p2 += 1000; //x2 = 1020
    *p1 = *p2; //x1 = 1020. Left dereference is for locatioin, right dereference is for value.
    cout << "p1 = " << p1 << endl << "p2 = " << p2 << endl;
    p1 = p2; //Now p1 and p2 both point to x2

    cout << "x1 = " << x1 << '\t' << "&x1 = " << &x1 << endl;
    cout << "x2 = " << x2 << '\t' << "&x2 = " << &x2 << endl;
    cout << "p1 = " << p1 << '\t' << "*p1 = " << *p1 << endl;
    cout << "p2 = " << p2 << '\t' << "*p2 = " << *p2 << endl;

    /*
        Output:

            p1 = 0x16b91f108
            p2 = 0x16b91f104
            x1 = 1020       &x1 = 0x16b91f108
            x2 = 1020       &x2 = 0x16b91f104
            p1 = 0x16b91f104        *p1 = 1020
            p2 = 0x16b91f104        *p2 = 1020

    */

    //Note that after writing p1 = p2, p1 and p2 have the same address.

    return 0;
}