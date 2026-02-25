/*
 * Problem: Print Divisors
 * Description: Read N. Print all divisors of N in ascending order.
 * Topic: For Loop
 * Date: 2026-02-25 23:54
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        if(N % i == 0)
            cout << i << " ";
    }
}