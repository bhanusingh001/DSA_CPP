/*
 * Problem: Pointer Arithmetic
 * Description: Create int arr[5]={10,20,30,40,50}; int* p=arr;. Print *(p+0), *(p+1), *(p+2). Explain pointer+1.
 * Topic: Pointers
 * Date: 2026-02-27 23:37
 */

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10,20,30,40,50};
    int* p = arr;   // same as &arr[0]

    cout << *(p+0) << endl;
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;

    return 0;
}