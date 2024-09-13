#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    /*
        In order to generate a random number, we will use a functin called rand(). 

        The rand() function is accessibl through cstdlib standard library. 

        The rand() function returns an ineger. This number can vary from system to system. 

        The problem with rand() is that you if you run the executed file again and again you will get the 
        same numbers. Even if you recompile. 

        The rand() function produces pseudo random numbers. If you want to add more randomness, you should 
        change the seed value that is used by the algorithm to get a radom number.

        That is what the srand() functin is for. The integer argument you pass determines what sequence of numbers
        the rand() function call pull from. Calling crand(2) initializes the random number generator. 

        Although the set of numbers wold be different, it will still be constant.

        One way to fix this is by using the time() function from ctime standard library and pass it as a seed.

        time(0) returns current time as the number of seconds since Jan 1 1970. 
     */

    //Initializing the random number generator using current time as seed:
    srand(time(0));

    //Getting a random number from 1 to 100 inclusive:
    short int randInt = rand() % 100 + 1;
    short int guessOne;
    short int guessTwo; 

    while(true){
        cout<<endl<<"Player 1, please enter your guess:"<<endl;
        while(true){
            cin>>guessOne;
            if(guessOne > 100 || guessOne < 1)
                cout<<endl<<"Please enter a number between 1 and 100"<<endl;
            else  
                break;
        }
        
        if(guessOne < randInt){
            cout<<endl<<"Sorry, the number is bigger than "<<guessOne<<endl;
        }else if(guessOne > randInt){
            cout<<endl<<"Sorry, the number is smaller than "<<guessOne<<endl;
        }else{
            cout<<endl<<"Player 1, you win!!!";
            break;
        }

        cout<<endl<<"Player 2, please enter your guess:"<<endl;
        while(true){
            cin>>guessTwo;
            if(guessTwo < 1 || guessTwo > 100)
                cout<<endl<<"Please enter a number between 1 and 100"<<endl;
            else 
                break;
        }

        if(guessTwo < randInt){
            cout<<endl<<"Sorry, the number is bigger than "<<guessTwo<<endl;
        }else if(guessTwo > randInt){
            cout<<endl<<"Sorry, the number is smaller than "<<guessTwo<<endl;
        }else{
            cout<<endl<<"Player 2, you win!!!"<<endl;
            break;
        }
    }

    return 0;
}