/*
 * Problem: Reverse a Number
 * Description: Read a number. Print it reversed. Example: 1234 ? 4321.
 * Topic: For Loop
 * Date: 2026-02-21 23:56
 */

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cin >> n;

    int sign = (n < 0) ? -1 : 1; // store sign
    n = abs(n);                  // make positive

    while(n > 0){
        rev = rev * 10 + n % 10; // add last digit
        n /= 10;                 // remove last digit
    }

    cout << rev * sign;
}