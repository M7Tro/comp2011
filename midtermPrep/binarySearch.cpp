#include <iostream>

using namespace std;

/*
    How should I implement it?

    Let's start with fundamental steps. 

    We are given an array and an element. 
    We want to find an index of a matching element within an array.

    We pick the element at the middle.
    
        For odd array dimension: (index is m)
        
        If it the picked element is correct, we return index.
        If not, we apply the same recursive function over the left half of array (0 to m - 1)
        Then we also apply the resursive function over the right hald (m+1 until last index n)

        For even array dimension, I think nothing changes. Similarly, we pick an element.
        If not found, resursive call applied over left and right halves of the leftover array.

        Each call to the function get the array, the element we look for and lower and upper bounds.

        Those bounds are what changes for each call.

        If we reached the terminatingvalues of bounds like 0 and 0, we return -1.
*/

int binarySearch(const int data[], int first, int last, int value){
    if(last < first) return -1;
    int mid = (first + last) / 2;
    if(data[mid] == value) return mid;
    else if (data[mid] < value) return binarySearch(data, first, mid - 1, value);
    else if (data[mid] > value) return binarySearch(data, mid + 1, last, value);
}

int main() {
    int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int m;
    cout << "\nPlease input number m: "; cin >> m;

    cout << "\nNumber " << m << " is found at index " << binarySearch(numbers, m,  0,  sizeof(numbers)/4 - 1) << endl;

    return 0;
}