/*
 * Problem: Decimal to Binary
 * Description: Read a decimal number. Convert and print its binary representation.
 * Topic: For Loop
 * Date: 2026-02-25 23:52
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string binary = "";

    while(n > 0) {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
    }

    cout << binary;
}