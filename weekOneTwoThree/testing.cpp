#include <iostream>
using namespace std;

int main () {
    int number;
    bool flag = true;

    while(flag){
        cout<<"Please provide an input: ";
        cin>>number;

        switch(number){
            case '1':
                cout<<endl<<"Inputted 1"<<endl;
                break;
            case 'q':
                cout<<endl<<"Exiting loop"<<endl;
                flag = false;
                break;
            default:
                cout<<"The loop continues"<<endl;
                break;
        }
    }
}