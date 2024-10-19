#include <iostream>

using namespace std;

int fibonacci (int n) { //Notice that the function is int return-type to use it recursively
    if(n == 1 ){
        return 1;
    }else if(n == 0){
        return 0;
    }else{
        return fibonacci(n - 1) + fibonacci (n - 2);
    }
} 

int main () {

    int n;
    cout << "\nPlease select nth Fibonacci number by inputting value of n: ";
    cin >> n;
    cout << "\nThe " << n << "th Fibonacci number is " << fibonacci(n) << "\n\n";

    return 0;
}