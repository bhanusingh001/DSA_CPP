/*
 * Problem: Pyramid Stars
 * Description: Read N. Print centered pyramid of * with N rows. Use spaces for alignment.
 * Topic: Patterns
 * Date: 2026-02-24 23:51
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        for(int space = 1; space <= N - i; space++)
            cout << " ";

        for(int star = 1; star <= 2*i - 1; star++)
            cout << "*";

        cout << endl;
    }
}