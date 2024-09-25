#include <ios>
#include <iostream>

using namespace std;

//Funtion for determining the length of a string/char sequence with a null character at the end:
int strlen(char word[]){
    int length = 0;
    while(true){
        if(word[length] == '\0'){
            break;
        } else{
            length++;
        }
    }
    return length;
}

bool palindrome (const char word []){//for some reason, it gives error without const
    int i = 0;
    int j = strlen(word) - 1;
    for(; i < strlen(word); i++, j--){
        if(word[i] != word[j]) return false;
    }
    return true;
}

int main() {
    //cin.getline(char input[], int max-num-char, char terminator);
    //cin.getline will stop either when char terminator is encountred or when max number of characters is reached. 
    //The terminating character is not read into the string 
    //The input[] character array is where the inputted data is stored. 

    const int MAX_LINE_LEN = 255; //defining the maximum number of characters
    char wholeLine [MAX_LINE_LEN + 1]; //declaring the array to store the input 
    while(cin.getline(wholeLine, MAX_LINE_LEN, '\n') //input is terminated when new line is started
    || cin.gcount() == MAX_LINE_LEN) //terminate if the input reached max length 
    {
        cout << wholeLine << endl
        << boolalpha << palindrome(wholeLine) << endl;
        cin.clear(); //Clear the error if max number of characters is reached. 
    }

    return 0;
}