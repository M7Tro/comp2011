#include <iostream>

using namespace std;

int main () {
    const float PIG_WEIGHT = 4.5;
    const short int SHEEP_WEIGHT = 3;
    const short int TOTAL_WEIGHT = 36;

    //Every loop, we increment the value of pigs by two because their weight is not integer and thus must be a
    //multiple of an even number. 

    short int pigs = 0;
    float sheep = 0; 

    //We don't know how many combinations there are possible, so we use the while loop:
    while(true){
        //termination:
        if(pigs * PIG_WEIGHT > TOTAL_WEIGHT) break;

        //If the weight without pigs is divisible by the weight of one ship, we count it as one working combination:
        sheep = (TOTAL_WEIGHT - pigs * PIG_WEIGHT)/SHEEP_WEIGHT;
        if(sheep - static_cast<int>(sheep) == 0.0){
            cout<<endl<<pigs<<" * "<<PIG_WEIGHT<<" + "<<static_cast<int>(sheep)<<" * "<<SHEEP_WEIGHT<<endl;
        }
        pigs += 2;
    }


    return 0;
}