#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    unsigned int totalCredits = 0;
    double totalProduct = 0;

    short currentCredit = 0;
    char currentGrade = 'A';

    while(true){
        cout<<endl<<"No. of credits of your course (0 to stop): ";
        cin>>currentCredit;
        if(currentCredit <= 0) break;

        cout<<endl<<"Your letter grade (A, B, C, D or F): ";
        cin>>currentGrade;
        switch(currentGrade){
            case 'A': 
                totalProduct += currentCredit * 4.0;
                break;
            case 'B': 
                totalProduct += currentCredit * 3.0;
                break;
            case 'C': 
                totalProduct += currentCredit * 2.0;
                break;
            case 'D': 
                totalProduct += currentCredit * 1.0;
                break;
            case 'F':
                totalProduct += currentCredit * 0.0;
                break;
            default:
                cout<<endl<<"Invalid input, please provide input again!"<<endl;
                continue;
                break;   
        }
        totalCredits += currentCredit;
    }

    cout<<endl<<"You have taken a total of "<<totalCredits<<" credits ..."<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"and your GPA is "<<(totalProduct / totalCredits)<<endl;

    return 0;
}