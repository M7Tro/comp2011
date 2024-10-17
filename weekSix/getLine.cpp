#include <cstring>
#include <ios>
#include <iostream> 
using namespace std;

bool palindrome(const char x[]){
    int j  = 0;
    int k = strlen(x) - 1;
    for(; j < k; ++j, --k){
        if(x[j] != x[k]){
            return false;
        }
    }
    return true;
}

int main() {
    const int MAX_LINE = 255;
    char whole_line[MAX_LINE + 1];
    //cin.getline() stops at terminating character in input and replaces it with '\0' 
    while(cin.getline(whole_line, MAX_LINE + 1, '\n') || cin.gcount() == MAX_LINE){
        cout << "\nGcount: " << cin.gcount();
        cout << "\nWhole line: " << whole_line << " " << boolalpha << palindrome(whole_line) << endl;
        for(int i = 0; i < cin.gcount(); i++){
            cout << "\n" << i << ": " << whole_line[i]; cout << " " << boolalpha << (whole_line[i] == '\0');
        }
        cin.clear();
    }

    return 0;
}