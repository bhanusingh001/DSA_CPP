/*
 * Problem: Print N to 1 Recursive
 * Description: Print N down to 1 using recursion only. Hint: print before recursive call.
 * Topic: Recursion
 * Date: 2026-02-26 23:46
 */

#include <iostream>
using namespace std;

void printNTo1(int n) {
    if(n == 0)
        return;

    cout << n << " ";   // print first
    printNTo1(n - 1);   // recursive call
}

int main() {
    int N;
    cin >> N;
    printNTo1(N);
}