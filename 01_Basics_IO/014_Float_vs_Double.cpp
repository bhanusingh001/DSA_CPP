/*
 * Problem: Float vs Double
 * Description: Compute 1.0/3.0 and print with 15 decimal places. Compare float vs double precision.
 * Topic: Data Types
 * Date: 2026-02-23 23:42
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float f = 1.0f/3.0f;
    double d = 1.0/3.0;

    cout << fixed << setprecision(15);
    cout << "float: " << f << endl;
    cout << "double: " << d << endl;
}