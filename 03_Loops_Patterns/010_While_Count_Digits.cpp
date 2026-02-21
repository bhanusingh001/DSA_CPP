/*
 * Problem: While: Count Digits
 * Description: Read a number. Count its digits using while loop.
 * Topic: While Loop
 * Date: 2026-02-21 23:33
 */

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    if(n == 0)
        count = 1;
    else {
        n = abs(n);      // handle negative numbers
        while(n > 0){
            n /= 10;     // removes last digit
            count++;     // counts that digit
        }
    }

    cout << "Digits = " << count;
}
  