/*
 * Problem: Right Aligned Triangle
 * Description: Read N. Print right-aligned triangle. E.g. N=3: ..*, .**, ***.
 * Topic: Patterns
 * Date: 2026-02-24 23:53
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        for(int space = 1; space <= N - i; space++)
            cout << " ";

        for(int star = 1; star <= i; star++)
            cout << "*";

        cout << endl;
    }
}