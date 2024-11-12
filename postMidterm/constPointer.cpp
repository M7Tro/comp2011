#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* const xcp = &x;

    cout << "xcp: "  << xcp << ". *xcp: " << *xcp << endl;
    *xcp = 100;
    cout << "xcp: " << xcp << ". *xcp: " << *xcp << endl;

    /*
        Output: You can see that a const pointer still lets you manipulate the content of the variable it points to 
            xcp: 0x16f05f118. *xcp: 10
            xcp: 0x16f05f118. *xcp: 100  
    */

    return 0;
}