#include <iostream>
#include <iomanip>

using namespace std;

void mean(const float numbers [], int arraySize){
    float mean = 0.0;
    for(int i = 0; i < arraySize; i++){
        mean += numbers[i];
    }
    mean = mean / arraySize;
    cout << "\nThe mean of the passed array is: " << setprecision(2) << mean << endl << endl;
}

void maxScore (const float numbers [], int arraySize){
    float maxNumber;
    for(int i = 0; i < arraySize; i++){
        if(numbers[i] > maxNumber){
            maxNumber = numbers[i];
        }
    }
    cout << "\nThe max number is: " << maxNumber << endl << endl;
}

int main () {
    //Getting the numbers for the user:
    int arraySize;
    cout << "\nPlease specify the number of variables that you want to input: "; cin >> arraySize;
    while(true){
        if(arraySize <= 0){
            cout << endl << "The input is invalid. Please provide a positive integer: "; cin >> arraySize;
        }else {
            break;
        }
    }

    //declaring the array of floats using dimensions specified by user:
    float numbers [arraySize];
    
    //Initializing the array:
    for(int i = 0; i < arraySize; i++){
        cout << endl << "Please provide the " << i << "th element of the number set: ";
        if(!(cin >> numbers[i])){
            cout << "\n\nSomething wrong happened while initializing the number array. Try again later.\n\n";
            break;
        } 
    }

    mean(numbers, arraySize);
    maxScore(numbers, arraySize);

    return 0;
}