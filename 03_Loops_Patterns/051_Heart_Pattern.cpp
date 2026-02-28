/*
 * Problem: Heart Pattern
 * Description: Read N. Print heart shape using stars (two semicircles on top + inverted triangle below).
 * Topic: Patterns
 * Date: 2026-02-28 23:59
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Top semicircles
    for(int i = N/2; i <= N; i += 2) {
        for(int j = 1; j < N - i; j += 2)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << "*";

        for(int j = 1; j <= N - i; j++)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Bottom inverted triangle
    for(int i = N; i >= 1; i--) {
        for(int j = i; j < N; j++)
            cout << " ";

        for(int j = 1; j <= (i*2)-1; j++)
            cout << "*";

        cout << endl;
    }
}