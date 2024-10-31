#include <iostream>

using namespace std;

/* Declare functions by defining the functions:

    int max (int x, int y) {return (x > y) ? x : y; }
    int mean (int x, int y) {return (x +y) / 2;}

    void mean_max(int x, int y, int& mean_num, int& max_num)
    {
        mean_num = mean(x, y);
        max_num = max(x, y);
    }

    int main() 
    {
        int average, bigger;

        mean_max(6, 4, average, bigger);
        cout << "mean = " << average << endl << "max = " << bigger << endl;
        return 0;
    }
*/

/* Declare functions globally 
    void mean_max(int, int, int&, int&);  //main only needs to know mean_max

    int main()
    {
        int average, bigger;
        mean_max(6, 4, average, bigger); //declared but not defined
        cout << "mean = " << average << endl << "max = " << bigger << endl;
        return 0;
    }

    //mean_max needs to know max and mean. Declared GLOBALLY
    int max(int, int); 
    int mean(int, int);

    void mean_max(int x, int y, int& mean_num, int& max_num)
    {
        mean_num = mean(x, y);
        max_num = max(x, y);
    }

    int max(int x, int y) {return (x < y) ? x : y;}
    int mean(int x, int y) {return (x + y)/2;}
*/

int main()
{
    void mean_max(int, int, int&, int&); //declaring mean_max LOCALLY
    int average, bigger;

    mean_max(6,4, average, bigger);
    cout << "mean = " << average << endl << "max = " << bigger << endl;
    return 0;
}

void mean_max(int x, int y, int& mean_num, int& max_num) //definitoin of mean_max AFTER it was used in main()
{
    //declare before usage . Declared LOCALLY
    int max(int, int);
    int mean(int, int);

    mean_num = mean(x, y);
    max_num = max(x, y);
}

//Definitions AFTER usage in the file scope.
int max(int x, int y) {return (x > y) ? x : y;}
int mean(int x, int y) {return (x + y) / 2;}