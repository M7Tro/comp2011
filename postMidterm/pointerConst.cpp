#include <iostream>

using namespace std;

int main( ){
    int x = 100;
    const int* cpx = &x;

    cout << "x: " << x << endl;
    cout << "cpx: " << cpx << " " << "*cpx: " << *cpx << endl;

    //Causes error: *cpx = 10;

    int y = 123;
    cpx = &y; 
    //Also causes error: *cpx = 1231;
    cout << "cpx: " << cpx << " " << "*cpx: " << *cpx << endl;

    /*
        Essentially, a const type* pointer lets you change the address but not the content. 

        A type* const pointer lets you change the content but not the address. 
    */

    return 0;
}