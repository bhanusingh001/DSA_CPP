/*
 * Problem: Spiral Numbers
 * Description: Read N. Print 1 to N? in spiral pattern filling an N?N matrix.
 * Topic: Patterns
 * Date: 2026-02-26 00:01
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int matrix[N][N];

    int top = 0, bottom = N - 1;
    int left = 0, right = N - 1;
    int num = 1;

    while(top <= bottom && left <= right) {

        for(int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;

        for(int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        for(int i = right; i >= left; i--)
            matrix[bottom][i] = num++;
        bottom--;

        for(int i = bottom; i >= top; i--)
            matrix[i][left] = num++;
        left++;
    }

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}