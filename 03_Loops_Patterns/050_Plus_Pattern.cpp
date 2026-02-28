/*
 * Problem: Plus Pattern
 * Description: Read N (odd). Print + pattern: * at middle row and middle column.
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
            if(i == N/2 || j == N/2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}