/*
 * Problem: While: Reverse Number
 * Description: Read a number. Reverse it using while loop.
 * Topic: While Loop
 * Date: 2026-02-21 23:42
 */

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cin >> n;

    int sign = (n < 0) ? -1 : 1; // store sign
    n = abs(n);                   // make positive

    while(n > 0){
        rev = rev * 10 + n % 10;  // add last digit
        n /= 10;                  // remove last digit
    }

    cout << "Reverse = " << rev * sign;
}