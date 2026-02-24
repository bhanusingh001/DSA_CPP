/*
 * Problem: Inverted Pyramid
 * Description: Read N. Print inverted centered pyramid (widest at top, narrow at bottom).
 * Topic: Patterns
 * Date: 2026-02-24 23:51
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = N; i >= 1; i--) {
        for(int space = 1; space <= N - i; space++)
            cout << " ";

        for(int star = 1; star <= 2*i - 1; star++)
            cout << "*";

        cout << endl;
    }
}