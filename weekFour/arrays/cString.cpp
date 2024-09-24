#include <iostream>

using namespace std;

int main() {
    char name []= "Hell"; //contains the \0 character to denote end of string so the size is 5, not 4. 
    cout << endl << sizeof(name) << endl;
    cout << sizeof('c') << endl;
    cout << sizeof("c") << endl;
    cout << sizeof("ce") << endl;
    cout << sizeof("cel") << endl;
    cout << sizeof("cell") << endl;

    return 0;
}