/*
 * Problem: Rectangle Class
 * Description: Create class Rectangle with length, width. Methods: area(), perimeter(), isSquare().
 * Topic: OOP-Class
 * Date: 2026-02-27 23:58
 */

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    void setValues(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }

    double perimeter() {
        return 2 * (length + width);
    }

    bool isSquare() {
        return length == width;
    }
};

int main() {
    Rectangle r;
    double l, w; // Variables to store user input

    cout << "--- Rectangle Calculator ---" << endl;
    
    // Capture user input
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    // Apply the inputs to the object
    r.setValues(l, w);

    cout << "\nResults:" << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    if(r.isSquare())
        cout << "It is a square." << endl;
    else
        cout << "Not a square." << endl;

    return 0;
}