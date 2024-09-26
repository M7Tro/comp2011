//Implemented this program myself

#include <iostream>

using namespace std;

int factorialRecursion(int n, int factorialProduct){
    if (n == 0){
        return factorialProduct;
    }else {
        factorialProduct *= n;
        return factorialRecursion(n-1, factorialProduct);
    }
}

void factorial (int n){
    cout << "\nThe factorial of " << n << " is " << factorialRecursion(n, 1) << "\n\n";
}

int main() {
    int n;
    cout << "\nPlease provide a value for calculation of catorial: ";
    cin >> n;

    factorial(n);

    return 0;
}