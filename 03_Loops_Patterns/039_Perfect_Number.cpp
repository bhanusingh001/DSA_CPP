/*
 * Problem: Perfect Number
 * Description: Read N. Check if it's perfect (equals sum of its proper divisors). E.g., 6=1+2+3.
 * Topic: For Loop
 * Date: 2026-02-25 23:53
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;

    for(int i = 1; i <= N/2; i++) {
        if(N % i == 0)
            sum += i;
    }

    if(sum == N)
        cout << "Perfect";
    else
        cout << "Not Perfect";
}