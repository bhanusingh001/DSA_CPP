/*
 * Problem: Print 1 to N Recursive
 * Description: Print 1 to N using recursion only (no loops). Hint: print after recursive call.
 * Topic: Recursion
 * Date: 2026-02-26 23:45
 */

#include <iostream>
using namespace std;

void print1ToN(int n) {
    if(n == 0)
        return;

    print1ToN(n - 1);   // recursive call
    cout << n << " ";   // print after call
}

int main() {
    int N;
    cin >> N;
    print1ToN(N);
}