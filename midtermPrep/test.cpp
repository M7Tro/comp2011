#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "\nPleae input the size of the ladder and triangle n: "; cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++) cout << " ";
        for(int j = 1; j <= i; j++) cout << "*";
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++) cout << " ";
        for(int j = 0; j < 2 * (n - i - 1) + 1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}