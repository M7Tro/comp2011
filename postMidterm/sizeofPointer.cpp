#include <iostream>

using namespace std; 

int main () {
    int x = 10;
    int* integerPointer = &x; 
    char c = 'X';
    char* charPointer = &c;
    double d = 3.4;
    double* doublePointer = &d;

    cout << "integerPointer: " << sizeof(integerPointer) << " *integerPointer: " << sizeof(*integerPointer) << endl;
    cout << "charPointer: " << sizeof(charPointer) << " *charPointer: " << sizeof(*charPointer) << endl;
    cout <<"doublePointer: " << sizeof(doublePointer) << " *doublePointer: " << sizeof(*doublePointer) << endl;

    /*
        Output:
            integerPointer: 8 *integerPointer: 4
            charPointer: 8 *charPointer: 1
            doublePointer: 8 *doublePointer: 8
    */

    return 0;
}