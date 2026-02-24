/*
 * Problem: Inverted Triangle
 * Description: Read N. Print inverted triangle: row 1 has N stars, row N has 1 star.
 * Topic: Patterns
 * Date: 2026-02-24 23:50
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = N; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}