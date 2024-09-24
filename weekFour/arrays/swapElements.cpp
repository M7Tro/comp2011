#include <iostream>

using namespace std;

//In this file, I am trying to understand wheterh an array is passed by value or by reference

void swapElements(int array[], int indexOne, int indexTwo){
    int temp = array [indexTwo];
    array[indexTwo] = array[indexOne];
    array[indexOne] = temp;
}

void printArray(int array[], int arraySize){
    for(int i = 0; i < arraySize; i++){
        cout << endl << array[i];
    }
    cout << endl;
}

int main() {
    const int arraySize = 3;
    int numbers [arraySize] = {1, 2, 3};

    cout << "\nArray before swap: ";
    printArray(numbers, arraySize);

    swapElements(numbers, 0, 2);

    cout << "\nArray after swap: ";
    printArray(numbers, arraySize); //Output is 3, 2, 1. As expected

    return 0;
}