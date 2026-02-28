/*
 * Problem: Cross Pattern
 * Description: Read N (odd). Print X pattern: * at diagonal and anti-diagonal positions.
 * Topic: Patterns
 * Date: 2026-02-28 23:59
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(i == j || i + j == N - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}