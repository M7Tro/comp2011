#include <iostream>

using namespace std;
/*
    You can pass const, literal, and non-const reference parameters to functions that expect const reference parameters.

    But functions that expect a non-const reference will give an error if given a const reference or literal.
*/

void referenceConst (const int& a){
    cout << endl << a;
}

void referenceNonConst (int& a){
    cout << endl << a;
}

int main () {
    int a = 3;
    const int b = 3;

    //Passing literals:
    referenceConst(3);
    //Gives error: referenceNonConst(4);

    //Passing const variables:
    referenceConst(b);
    //Gives error: referenceNonConst(b);

    //Passing Non-const variables:
    referenceConst(a);
    referenceNonConst(a);

    return 0;
}