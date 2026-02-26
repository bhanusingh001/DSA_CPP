/*
 * Problem: Function Overloading 1
 * Description: Overload area(): area(r) for circle, area(l,b) for rectangle, area(b,h,0.5) for triangle.
 * Topic: Functions
 * Date: 2026-02-26 23:41
 */

#include <iostream>
using namespace std;

double area(double r) {
    return 3.14159 * r * r;   // Circle
}

double area(double l, double b) {
    return l * b;             // Rectangle
}

double area(double b, double h, double half) {
    return half * b * h;      // Triangle
}

int main() {
    cout << "Circle: " << area(5) << endl;
    cout << "Rectangle: " << area(4,6) << endl;
    cout << "Triangle: " << area(4,6,0.5) << endl;
}