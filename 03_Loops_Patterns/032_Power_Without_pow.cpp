/*
 * Problem: Power Without pow()
 * Description: Read base x and exponent n. Calculate x^n using a for loop (no pow function).
 * Topic: For Loop
 * Date: 2026-02-25 23:50
 */

#include <iostream>
using namespace std;

int main() {
    long long x, n;
    cin >> x >> n;

    long long result = 1;

    for(int i = 1; i <= n; i++) {
        result *= x;
    }

    cout << result;
}