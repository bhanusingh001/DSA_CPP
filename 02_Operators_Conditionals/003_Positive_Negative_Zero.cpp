/*
 * Problem: Positive Negative Zero
 * Description: Read an integer. Print whether it is Positive, Negative, or Zero.
 * Topic: Conditionals
 * Date: 2026-02-21 23:52
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n > 0)
        cout << "Positive";
    else if(n < 0)
        cout << "Negative";
    else
        cout << "Zero";
}