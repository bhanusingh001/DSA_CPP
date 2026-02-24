/*
 * Problem: Right Triangle Stars
 * Description: Read N. Print right-angled triangle: row i has i stars. E.g., N=3: *\n**\n***
 * Topic: Patterns
 * Date: 2026-02-24 23:50
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}