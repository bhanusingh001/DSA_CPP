/*
 * Problem: Armstrong Number
 * Description: Read N. Check if N equals sum of cubes of its digits. E.g., 153=1?+5?+3?.
 * Topic: For Loop
 * Date: 2026-02-25 23:53
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int original = N;
    int sum = 0;

    while(N > 0) {
        int digit = N % 10;
        sum += digit * digit * digit;
        N /= 10;
    }

    if(sum == original)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
}