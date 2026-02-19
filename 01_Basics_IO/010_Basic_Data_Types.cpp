/*
 * Problem: Basic Data Types
 * Description: ? Solve ?
 * Topic: Data Types
 * Date: 2026-02-20
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i;
    long l;
    char ch;
    float f;
    double d;

    if (cin >> i >> l >> ch >> f >> d) {
        
        cout << i << endl;
        cout << l << endl;
        cout << ch << endl;
        
        // Output float with 3 decimal places
        cout << fixed << setprecision(3) << f << endl;
        
        // Output double with 9 decimal places
        cout << fixed << setprecision(9) << d << endl;
    }

    return 0;
}
