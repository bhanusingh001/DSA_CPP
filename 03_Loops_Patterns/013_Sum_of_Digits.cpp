/*
 * Problem: Sum of Digits
 * Description: Read a number. Find sum of its digits. Example: 1234 ? 1+2+3+4 = 10.
 * Topic: For Loop
 * Date: 2026-02-21 23:55
 */

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    n = abs(n);   // handles negative numbers

    while(n > 0){
        sum += n % 10;   // extract last digit and add
        n /= 10;         // remove last digit
    }

    cout << "Sum = " << sum;
}