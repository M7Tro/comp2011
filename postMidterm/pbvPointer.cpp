#include <iostream>

using namespace std; 

void swap(int* x, int* y){
    cout << "original x: " << *x << ". Orignal y: " << *y << ".\n";
    int temp = *x; 
    *x = *y; 
    *y = temp; 
    cout << "Swapped x: " << *x << ". Swapped y: " << *y << ".\n";
} 

int main() {
    int x = 100;
    int y = 200;

    swap(&x, &y);

    return 0;
}