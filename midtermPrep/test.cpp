//Palindrome:
#include <iostream>
using namespace std;

bool palindrome(const char x []){
    int j = 0;
    int k = strlen(x) - 1;
    for(; j < strlen(x) / 2; j++, k--){
        if(x[j] != x[k]){
            return false;
        }
    }
    return true;
}

int main() {
    const int maxCharacters = 10;
    char wholeLine[maxCharacters + 1];//+1 to accomodate the null terminator 

    while(cin.getline(wholeLine, maxCharacters+1, '\n') || //cin.getline() automatically apend the null character
    cin.gcount() == maxCharacters){
        
        cout << endl << "gcount: " << cin.gcount() << endl;
        cout << endl << "wholeLine: " << wholeLine << endl;
        cout << endl << "wholeLine strlen: " << strlen(wholeLine) << endl;
        cout << endl << "wholeLine sizeof: " << sizeof(wholeLine) << endl;
        cout << endl << "Terminating null: " << (wholeLine[cin.gcount() - 1] == '\0') << endl;
        
        cin.clear();//erases possible error flags raised during input
    }
}