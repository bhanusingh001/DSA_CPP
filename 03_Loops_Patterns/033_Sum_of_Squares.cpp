/*
 * Problem: Sum of Squares
 * Description: Read N. Calculate 1? + 2? + 3? + ... + N?.
 * Topic: For Loop
 * Date: 2026-02-25 23:50
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long sum = 0;

    for(int i = 1; i <= N; i++) {
        sum += i * i;
    }

    cout << sum;
}