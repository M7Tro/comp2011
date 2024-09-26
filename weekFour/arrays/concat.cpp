#include <cstring>
#include <ios>
#include <iostream>

using namespace std;

//function to determine char array length:
int strlength(char array []){
    int i = 0;
    for(; array[i] != '\0'; i++);
    return i;
}

//Function that concatenates two arrays into a third array:
void concat(char left [], char right[], char result []){
    int i = 0;
    for(; left[i] != '\0'; i++){
        result[i] = left[i];
    }
    for(int k = 0; right[k] != '\0'; k++, i++){
        result[i] = right[k];
    }
    result[i] = 'k'; //we don't add +1 to i here because at the last iteration of the for loop, result[i] is not assigned a value
}

int main () {

    char firstName [20] = "Sultan";
    char lastName [20] = "Jamalbekov";
    char fullName [20];

    concat(firstName, lastName, fullName);

    char test [6] = {'a', 'b', '\0', 'd', 'e', '\0'};
    cout << endl << strlen(test); //outputs 2
    
    for(int i = 0; i < 20; i++){
        cout << endl << i << ": Character is : " << fullName[i] << ". Is it equal to null character? " << boolalpha << (fullName[i] == '\0');
    }

    char food [] = "pizza";
    cout << endl << "The 5th index is null char: " << boolalpha << (food[5] == '\0'); //outputs true c

    return 0;
}