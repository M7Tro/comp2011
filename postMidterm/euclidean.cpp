#include <iostream>
#include <math.h>

using namespace std; 

struct Point {
    double x; 
    double y;
};

void print_distance(const Point*, const Point*); //The prototype of a function

int main() {
    Point a, b, c;

    cout << "Enter the coordinages of point A: "; cin >> a.x >> a.y; 
    cout << "Enter the coordinates of point B: "; cin >> b.x >> b.y; 
    cout << "Enter the coordinages of point C: "; cin >> c.x >> c.y; 

    print_distance(&a, &b);
    print_distance(&b, &c);
    print_distance(&a, &c);
    
    return 0;
}

double euclidean_distance(const Point* p1, const Point* p2){
    double x_diff = p1 -> x  - p2 -> y, y_diff = p1 -> y - p2 -> y; 
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

void print_point(const Point* p){
    cout << '(' << (*p).x << ", " << (*p).y << ')';
}

void print_distance(const Point* p1, const Point* p2){
    cout << "Distance between "; print_point(p1); cout << " and "; print_point(p2); 
    cout << " is " << euclidean_distance(p1, p2) << endl;
}