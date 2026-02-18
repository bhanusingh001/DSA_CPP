/*
 * Problem: Read Float & Print
 * Description: Read a floating-point number. Print it rounded to exactly 2 decimal places.
 * Topic: I/O
 * Date: 2026-02-19 00:08
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num;
    
    if (cin >> num) {
        cout << fixed << setprecision(2) << num << endl;
    }

    return 0;
}