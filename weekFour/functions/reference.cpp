#include <iostream>
using namespace std;

int main () {
    int a = 1, b = 2; 
    int& x = a; 
    int &y = b; 
    int &w = a, &z = y; 

    a++; 
    x += 5;
    a = w - x; 
    y *= 10; cout << b << '\t' << y << '\t' << z << endl; 
    b--; cout << b << '\t' << y << '\t' << z << endl;
    z = 999; cout << b << '\t' << y << '\t' << z << endl;

    z = a;

    cout << b << '\t' << y << '\t' << z << endl;

    return 0;
}