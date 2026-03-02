/*
 * Problem: Palindrome Triangle
 * Description: Read N=4. Print: 1\n121\n12321\n1234321.
 * Topic: Patterns
 * Date: 2026-03-02 22:39
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // Loop A: Count up from 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Loop B: Count down from (i-1) to 1
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}