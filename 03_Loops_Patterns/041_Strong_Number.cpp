/*
 * Problem: Strong Number
 * Description: Read N. Check if N equals sum of factorial of digits. E.g., 145=1!+4!+5!.
 * Topic: For Loop
 * Date: 2026-02-25 23:54
 */

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int N;
    cin >> N;

    int original = N;
    int sum = 0;

    while(N > 0) {
        int digit = N % 10;
        sum += factorial(digit);
        N /= 10;
    }

    if(sum == original)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";
}