#include <iostream>

using namespace std;

int countZero (int n){
    if(n == 0){
        return 0;
    }else {
        return ((n % 10) == 0) + countZero(n / 10);
    }
}

int main() {
    int input;

    while(cin >> input){
        if(input < 0) break;
        cout << endl << input << ": " << countZero(input) << endl;
    }

    


    return 0;
}