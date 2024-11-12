#include <iostream>

using namespace std;

int main () {
    int x = 100;
    const int* const px = &x;
    /*
        You can't chagne the address or the value of the variable pointed by the pointer. 
    */

    int y = 12;
    //Gives error: px = &y;

    //Gives error: *px = 10;

    return 0;
}