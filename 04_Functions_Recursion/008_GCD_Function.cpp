/*
 * Problem: GCD Function
 * Description: Write int gcd(int a, int b) using Euclidean algorithm. Test with (48,18) ? 6.
 * Topic: Functions
 * Date: 2026-02-26 23:44
 */

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << gcd(48,18) << endl;
}