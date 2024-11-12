#include <iostream>

using namespace std;

int main() {
    int x = 1;
    
    switch(x){
        case 1:
            cout << x << endl;
            x = 3;
            break;

        case 2:
            cout << x << endl;
            break;
        case 3: 
            cout << x << endl;
            break;
        default:
            cout << x << endl;
    }

    

    return 0;
}