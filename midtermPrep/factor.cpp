#include <iostream>

using namespace std;

//Function for counting factor m in a number n.
//If n = 48 and m = 4, then 48 = 4 * 4 * 3 and function returns 2.
int factor(int n, int m){
    if(n % m != 0){
        return 0;
    }else{
        return 1 + factor(n / m, m);
    }
}

int main() {
    int n, m;

    cout << endl << "Please enter numbers n and m: ";
    cin >> n >> m;
    cout << endl << "The factor " << m << " appears in " << n << " " << factor(n, m) << " times." << endl;


    return 0;
}