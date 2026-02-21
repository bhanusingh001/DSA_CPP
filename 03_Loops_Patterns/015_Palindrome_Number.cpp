/*
 * Problem: Palindrome Number
 * Description: Read a number. Check if it reads same forwards and backwards (e.g., 121, 1331).
 * Topic: For Loop
 * Date: 2026-02-21 23:58
 */

#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, original;
    cin >> n;

    original = n;   // store original number

    n = abs(n);     // handle negative numbers safely

    while(n > 0){
        rev = rev*10 + n%10;
        n /= 10;
    }

    if(original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}