#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

//Function to calculate euclidian distance. Each point is a 1D array with two coordinate doubles.
double euclideanDistance (double point1 [], double point2 []){
    double xDiff = point1[0] - point2[0];
    double yDiff = point1[1] - point2[1];
    return sqrt(xDiff * xDiff + yDiff * yDiff);
}

//Function to calculate the distance between points of a given 2D array. Must have two columns. Number of points must be specified.
//Also a 2D array of nxn size must be passed: n is the number of points. 
void calculateAllDistances (double points [][2], double dist [][3], int numPoints){
    for(int i = 0; i < numPoints; i++){
        for(int j = 0; j < numPoints; j++){
            dist[i][j] = euclideanDistance(points[i], points[j]);
        }
    }
}

//Print the 2d array: the grid is expected to be nxn
void printTwoDArray (double array [] [3], int numRows){
    for (int i = 0; i < numRows; i++){
        for(int j = 0; j < numRows; j++){
            cout << " " << setprecision(2) << array[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main () {
    double points [3][2] = {
        {2.0, 3.0},
        {1.3, 5.4},
        {5.6, 3.9}
    };
    double dist [3][3];

    calculateAllDistances(points, dist, 3);
    cout << "\nCalculated distance matrix: \n";
    printTwoDArray(dist, 3);

    return 0;
}