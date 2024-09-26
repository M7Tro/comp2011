#include <cstring>
#include <iostream>

using namespace std;

int main() {

    char name [7] = {'s', 'u', 'l', 't', 'a', 'n', 'z'};
    //right now, it is just an array of chars and you need to use a for loop to output it:
    cout << endl;
    for(int i = 0; i < 6; i++){
        cout << name[i] << ' ';
    }
    cout << endl;

    //After adding an end-marker, you can output the whole sequence by refering to the name:
    name[6] = '\0';
    cout << endl << name << endl;

    //You can also youse double quotes:
    char lastname [20] = "Jamalebekov";
    cout << endl << lastname << endl;

    char king [] = "Leonidas";

    cout << endl  << "The string length of Leonidas is "<< strlen(king) << endl;

    return 0;
}