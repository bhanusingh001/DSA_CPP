/*
 * Problem: Hollow Rectangle
 * Description: Read N rows, M cols. Print rectangle of * with hollow inside (only borders).
 * Topic: Patterns
 * Date: 2026-02-24 23:52
 */

#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            if(i == 1 || i == N || j == 1 || j == M)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}