#include <iostream>

using namespace std;

void swapNumbers (int& a, int& b){ //formal parameters are declared as reference variables
    int temp = a;
    a = b;
    b = temp;
}

int main () {
    int a, b;
    cout << endl << "Please enter integers a and b to be swapped: "; cin >> a >> b; 

    swapNumbers(a, b); //formal parameters of the function are initialized with actual parameters a and b

    cout << endl << "Value of a: " << a << ". Value of b: " << b << endl;

    return 0;
}