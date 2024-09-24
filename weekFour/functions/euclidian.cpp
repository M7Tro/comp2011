#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double euclidean_distance(double x1, double y1, double x2, double y2){
    double x_diff = x1 - x2;
    double y_diff = y1 - y2;
    return sqrt(x_diff * x_diff  + y_diff * y_diff);
}

int main () {
    double xA, yA, xB, yB, xC, yC;
    cout << endl << "Enter the coordinates of point A: "; cin >> xA >> yA;
    cout << endl << "Enter the coordinates of point B: "; cin >> xB >> yB;
    cout << endl << "Enter the coordinates of point C: "; cin >> xC >> yC;

    cout << endl << "Distance between A and B: " << setprecision(2) << euclidean_distance(xA, yA, xB, yB);
    cout << endl << "Distance between B and C: " << setprecision(2) << euclidean_distance(xB, yB, xC, yC);
    cout << endl << "Distance between A and C: " << setprecision(2) << euclidean_distance(xA, yA, xC, yC);

    return 0;
}