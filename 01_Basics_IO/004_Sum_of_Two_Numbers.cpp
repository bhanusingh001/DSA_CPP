/*
 * Problem: Sum of Two Numbers
 * Description: Read two integers a, b. Print their sum, difference, product and quotient each on a new line.
 * Topic: I/O
 * Date: 2026-02-18 00:05
 */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << a + b << "\n";
    cout << a - b << "\n";
    cout << a * b << "\n";

    if (b != 0) {
        cout << a / b << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }

    return 0;
}