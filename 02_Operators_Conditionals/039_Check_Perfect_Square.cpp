/*
 * Problem: Check Perfect Square
 * Description: Read a number. Check if it is a perfect square (1,4,9,16,25...).
 * Topic: Conditionals
 * Date: 2026-02-28 22:58
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 0) {
        cout << "Not a perfect square";
        return 0;
    }

    int s = sqrt(n);

    if(s * s == n)
        cout << "Perfect square";
    else
        cout << "Not a perfect square";

    return 0;
}