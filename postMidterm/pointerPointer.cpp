#include <iostream>
using namespace std;

int main( ){
    int x = 10;
    int* xp = &x;
    int** xpp = &xp;
    int*** xppp = &xpp;

    cout << "x: " << x << endl;
    cout << "xp: " << xp << " *xp: " << *xp << endl;
    cout << "xpp: " << xpp << " *xpp: " << *xpp << endl;
    cout << "xppp: " << xppp << " *xppp: " << *xppp << endl;

    return 0;
}