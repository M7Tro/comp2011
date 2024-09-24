#include <iostream>

using namespace std;

int elementRBV (int array [], int arraySize){
    return array[ rand() % arraySize ];
}
int& elementRBR (int array [], int arraySize){
    return array[ rand () % arraySize];
}

void printArray (int array [], int arraySize){
    for (int i = 0; i < arraySize; i++){
        cout << endl << array[i] << " ";
    }
    cout << endl;
} 

int main() {
    //Initializing the random number generator using the current time as seed:
    srand(time(0));

    int data[6] = {10, 20, 30, 40, 50, 60};

    cout << endl << "By value: " << elementRBV(data, 6);
    cout << endl << "By reference: " << elementRBR(data, 6);

    cout << endl << "Array before mutating the random element: ";
    printArray(data, 6);

    elementRBR(data, 6) += 120;

    cout <<endl << "Array after mutating using elementRBR: (one of the values was mutated)";
    printArray(data, 6);


    return 0;
}