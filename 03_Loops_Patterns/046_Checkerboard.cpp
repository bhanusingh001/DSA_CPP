/*
 * Problem: Checkerboard
 * Description: Read N. Print N?N checkerboard: alternating * and spaces.
 * Topic: Patterns
 * Date: 2026-02-26 00:00
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if((i + j) % 2 == 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}