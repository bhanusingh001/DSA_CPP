/*
 * Problem: Floyd's Triangle
 * Description: Read N. Print Floyd triangle: 1\n2 3\n4 5 6\n... Sequential numbers.
 * Topic: Patterns
 * Date: 2026-02-24 23:53
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int num = 1;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}