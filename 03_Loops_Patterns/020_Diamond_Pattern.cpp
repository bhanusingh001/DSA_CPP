/*
 * Problem: Diamond Pattern
 * Description: Read N. Print diamond shape: pyramid of N rows + inverted pyramid of N-1 rows.
 * Topic: Patterns
 * Date: 2026-02-24 23:52
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper pyramid
    for(int i = 1; i <= N; i++) {
        for(int space = 1; space <= N - i; space++)
            cout << " ";

        for(int star = 1; star <= 2*i - 1; star++)
            cout << "*";

        cout << endl;
    }

    // Lower inverted pyramid
    for(int i = N-1; i >= 1; i--) {
        for(int space = 1; space <= N - i; space++)
            cout << " ";

        for(int star = 1; star <= 2*i - 1; star++)
            cout << "*";

        cout << endl;
    }
}