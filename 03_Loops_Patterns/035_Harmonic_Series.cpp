/*
 * Problem: Harmonic Series
 * Description: Read N. Calculate 1 + 1/2 + 1/3 + ... + 1/N with 4 decimal precision.
 * Topic: For Loop
 * Date: 2026-02-25 23:51
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double sum = 0.0;

    for(int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    cout << fixed << setprecision(4) << sum;
}