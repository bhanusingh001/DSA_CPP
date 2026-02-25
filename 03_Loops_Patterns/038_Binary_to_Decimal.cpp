/*
 * Problem: Binary to Decimal
 * Description: Read a binary number (e.g., 1101). Convert and print its decimal value.
 * Topic: For Loop
 * Date: 2026-02-25 23:53
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary;
    cin >> binary;

    int decimal = 0, power = 0;

    while(binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, power);
        power++;
        binary /= 10;
    }

    cout << decimal;
}