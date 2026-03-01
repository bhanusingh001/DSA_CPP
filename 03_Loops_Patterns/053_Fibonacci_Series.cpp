/*
 * Problem: Fibonacci Series
 * Description: Read N. Print first N Fibonacci numbers (0 1 1 2 3 5 8 13...).
 * Topic: For Loop
 * Date: 2026-03-01 22:50
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long a = 0, b = 1;

    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    return 0;
}