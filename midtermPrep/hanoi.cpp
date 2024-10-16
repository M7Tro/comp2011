#include <iostream>

using namespace std;

/*
    Tower of Hanoi game description:

    There are 3 pegs and a stac of discs of different sizes. 
    All discs are initially stacked on the first peg.

    The  goal is to move the stack of discs completely to another peg.

    Only one disc may be moved at a time. 

    No disc can be placed on top of a smaller disc.
*/

void tower_of_hanoi (int num_discs, char pegA, char pegB, char pegC){
    if(num_discs == 0){
        return;
    }
    tower_of_hanoi(num_discs - 1, pegA, pegC, pegB);

    cout << "move disc " << num_discs 
         << "from peg " << pegA << " to pag " << pegC << endl;

    tower_of_hanoi(num_discs - 1, pegB, pegA, pegC); 
}

int main() {
    return 0;
}