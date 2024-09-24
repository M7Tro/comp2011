#include <iostream>
#include <cstdlib> //library for random number generation

using namespace std;

const int ROCK = 0, PAPER = 1, SCISSORS = 2;//names correspond to numbers that let us make easy comparison

//The return type of the following function is int because it returns -1 on failure and 0 on success
int print_choice (char player, int choice ){//This function prints out the choice picked by computer/user
    if(player == 'C'){
        cout << "Computer";
    } else if (player == 'U'){
        cout << "User";
    } else {
        return -1; //we return an error code in case invalid player character was provided;
    }

    cout << " picks ";

    if(choice == ROCK){
        cout << "rock." << endl;
    }else if (choice == PAPER){
        cout << "paper." << endl;
    } else if (choice == SCISSORS){
        cout << "scissors." << endl;
    } else {
        return -1;
    }
    return 0;
}

void printGameResult (int computerChoice, int userChoice, int& computerScore,
    int& userScore){//This prints the result of a round
    if (computerChoice == userChoice){
        cout << endl << "Draw!" << endl;
    } else if (computerChoice > userChoice){
        cout << endl << " Computer wins!" << endl;
        computerScore++;
    } else {
        cout << endl << "User wins!" << endl;
        userScore++;
    }
}

int main (){
    int computerScore = 0;
    int userScore = 0;

    int seed;

    cout << "\nPlease enter a random positive number for random number generator: "; cin >> seed;
    srand(seed);

    while (true){
        //Get the user input:
        int userInput;
        cout << endl << "Please choose rock - 0, paper - 1, or scissors - 2. \nEnter any other number to quit: "; 
        cin >> userInput; 
        if(userInput < 0 || userInput > 2){
            cout << "\nEnd of the game\n";
            cout << "\nComputer's score: " << computerScore;
            cout << "\nUser's score: " << userScore;
            cout << "\n\n\n";
            break;
        }

        int computerInput = rand() % 3;

        cout<<endl;

        print_choice('U', userInput);
        print_choice('C', computerInput);
        
        printGameResult(computerInput, userInput, computerScore, userScore);
    }
}