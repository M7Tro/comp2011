#include <iostream>

using namespace std;

int main () {
    /*
        The essence of this program is to print isosceles right-angled triangles using user input.

        User inputs an integer that determines the side of a triangle. 

        And it also lets the user select style of the triangle beforehand.

        Fat triangle of size 3:

        *
        **
        *** 

        Hollow triangle of size 4:
        *

        **

        * *

        *  *
        ****    

        Upside-down of size 2:
        **
        *
    */

    short int design;
    short int size;

    while(true){
        cout<<endl<<"Please decide the style of of the triangle"<<endl;
        cout<<"1 is for fat, 2 is for hollow, and 3 is for upside-down"<<endl;

        while(true){
            cout<<endl;
            cin>>design;
            if(design < 1 || design > 3){
                cout<<endl<<"Please pick a number between 1 and 3"<<endl;
                continue;
            }else 
                break;
        }

        cout<<endl<<"Please specify the size of the triangle. Pick a positive integer: ";
        while(true){
            cin>>size;
            if(size < 1){
                cout<<endl<<"Please pick a positive integer: ";
                continue;
            }else 
                break;
        }

        if(design == 1){
            //Fat: 
            for(int i = 1; i <= size; i++){
                for(int j = 1; j <= i; j++){
                    cout<<"*";
                }
                cout<<endl;
            }
            break;
        }else if(design == 2){
            for(int i = 1; i <= size; i++){
                for(int j = 1; j <= i; j++){
                    char output = (i > 2 && j>=2 && j < i && i != size) ? ' ' : '*';
                    cout<<output;
                }
                cout<<endl;
            }
            break;
        }else {
            for(int i = size; i >= 1; i--){
                for(int j = i; j >= 1; j--){
                    cout<<"*";
                }
                cout<<endl;
            }
            break;
        }
    }

    return 0;
}