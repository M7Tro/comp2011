#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {
    //Some math:
    auto numba = 3;
    auto anothaNumba = 1123.3;
    cout<<fixed<<setprecision(2)<<anothaNumba<<endl;

    //A calculator for perfoming division that formats output and rounds the double values:
    cout<<"Please input a dividend: ";
    double dividend;
    cin>>dividend;
    cout<<"Please input a divisor: ";
    double divisor;
    cin>>divisor;
    int roundedValue = ((dividend / divisor) + 0.5);
    cout<<fixed<<setprecision(2)<<"The quotient is "<<dividend/divisor<<". The rounded value is "<<roundedValue<<endl;

    //Name concatenator:
    cout<<endl<<"Now, please input a last name and a first name as two separate words: ";
    string lastname;
    string firstname;

    cin>>lastname>>firstname;

    cout<<"The length of the last name is "<<lastname.length()<<". The length of the first name is "<<firstname.length()<<endl;
    string fullname = firstname + " " + lastname;
    cout<<"The full name is "<<fullname<<endl;

    return 0;
}