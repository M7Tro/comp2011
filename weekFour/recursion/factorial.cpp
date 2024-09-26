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

/*
    Solution from the lecture notes is more elegant. It does not require an external function:
    
    int factorial(int n){
        if(n == 1){
        return 1
        } else {
            return n * factorial(n - 1);
        }
    }
*/

int main() {
    int n;
    cout << "\nPlease provide a value for calculation of catorial: ";
    cin >> n;

    factorial(n);

    return 0;
}