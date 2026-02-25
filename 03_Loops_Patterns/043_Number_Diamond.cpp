/*
 * Problem: Number Diamond
 * Description: Read N. Print diamond using numbers instead of stars: 1,121,12321,...and back.
 * Topic: Patterns
 * Date: 2026-02-25 23:59
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Upper half
    for(int i = 1; i <= N; i++) {
        for(int s = 1; s <= N - i; s++)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << j;

        for(int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }

    // Lower half
    for(int i = N - 1; i >= 1; i--) {
        for(int s = 1; s <= N - i; s++)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << j;

        for(int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}