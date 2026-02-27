/*
 * Problem: Dynamic 2D Array
 * Description: Allocate a 2D array of size R?C using new. Fill with values, print matrix, then delete.
 * Topic: Dynamic Memory
 * Date: 2026-02-27 23:45
 */

#include <iostream>
using namespace std;

int main() {
    int R = 3, C = 4;

    int** arr = new int*[R];   // rows

    for(int i = 0; i < R; i++)
        arr[i] = new int[C];   // columns

    // Fill
    for(int i = 0; i < R; i++)
        for(int j = 0; j < C; j++)
            arr[i][j] = i + j;

    // Print
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    // Delete
    for(int i = 0; i < R; i++)
        delete[] arr[i];

    delete[] arr;
}