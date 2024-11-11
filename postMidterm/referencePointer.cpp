#include <iostream>

int x = 5;
int& xref = x;
int* xptr = &x;

using namespace std;

void xprint() {
    cout << endl;
    cout << hex << endl; //Print numbers in hexadecimal format 
    cout << "x =    " << x     << "\t\taddress     = " << &x << endl;
    cout << "xref = " << xref  << "\t\taddress     = " << &xref << endl;
    cout << "xptr = " << xptr  << "\taddress     = " << &xptr << endl;
    cout << "*xptr = " << *xptr << endl;
}

int main() {
    x += 1; xprint();
    xref += 1;  xprint(); //You can manipulate the variable through a reference 
    xptr = &xref; xprint(); //The pointer is a variable that is reassignable. Here, we assign it the memory of a reference 

    return 0;
}