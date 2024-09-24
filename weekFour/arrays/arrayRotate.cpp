#include <iostream> 
using namespace std;

//Function for printig a given array of a given size:
void printArray(int array[], int arraySize){
    for(int i = 0; i < arraySize; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

//Function that adds two arrays and records the sums into a third array. 
void addArrays(int x [], int y [], int z [], int arraySize){
    for (int i = 0; i < arraySize; i++){
        z[i] = x [i] + y [i];
    }
}

//Function that 'rotates' the elements of an array. The first becomes the last:
void rotateArray (int array [], int arraySize){
    int temp = array[0];
    for(int i = 1; i < arraySize; i++){
        array[i - 1] = array[i];
    }
    array[arraySize - 1] = temp;
}

int main () {
    int a [] = {1, 2, 34, 42342};
    int b [] = {234, 234, 67657, 7};
    int c [4];

    addArrays(a, b, c, 4);
    printArray(c, 4);

    for(int i = 0; i < 4; i++){
        rotateArray(c, 4);
        printArray(c, 4);
    }  

    return 0;
}