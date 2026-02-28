/*
 * Problem: Inverted Number Triangle
 * Description: Read N=5. Print: 54321\n4321\n321\n21\n1.
 * Topic: Patterns
 * Date: 2026-02-28 23:59
 */

#include <iostream>
using namespace std;

int main() {
    int N = 5;

    for(int i = N; i >= 1; i--) {
        for(int j = i; j >= 1; j--)
            cout << j;
        cout << endl;
    }
}