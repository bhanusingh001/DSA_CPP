/*
 * Problem: Hollow Pyramid
 * Description: Read N. Print pyramid outline only ? stars at edges, spaces inside.
 * Topic: Patterns
 * Date: 2026-02-24 23:52
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        for(int space = 1; space <= N - i; space++)
            cout << " ";

        for(int j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1 || i == N)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}