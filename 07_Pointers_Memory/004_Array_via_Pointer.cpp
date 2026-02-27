/*
 * Problem: Array via Pointer
 * Description: Traverse an array using pointer instead of index. Print each element using *(p+i) notation.
 * Topic: Pointers
 * Date: 2026-02-27 23:39
 */

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int* p = arr;

    for(int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }

    return 0;
}