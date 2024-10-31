/*
#include <iostream>
using namespace std;

bool even(int);
bool odd(int x) {return (x == 0) ? false : even (x - 1);}
bool even(int x) { return (x == 0) ? true : odd(x - 1);}

int main()
{
    int x;
    cin >> x;

    cout << boolalpha << odd(x) << endl;
    cout << boolalpha << even(x) << endl;
}
*/

#include <iostream>
using namespace std;

bool even(int);
bool odd(int x) { return (x == 0) ? false : even (x - 1);}
bool even(int x) {return (x == 0) ? true : odd (x - 1);}

int main() {
    cout << "\nPlease input a number: ";
    int x;
    cin >> x;
    cout << "\nThe inputted number is " << x;
    cout << "\nThe number " << x << " is even: " << boolalpha << even(x) << endl;
    cout << "\nThe number " << x << " is odd: " << boolalpha << odd(x) << endl;
}