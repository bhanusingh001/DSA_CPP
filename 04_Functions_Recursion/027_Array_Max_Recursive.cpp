/*
 * Problem: Array Max Recursive
 * Description: Find maximum element in array using recursion.
 * Topic: Recursion
 * Date: 2026-03-10 23:48
 */

#include <iostream>
#include <algorithm> 
using namespace std;

int arrMax(int arr[], int n) {
    // Base case: If there's only one element, it's the maximum
    if (n == 1) {
        return arr[0]; 
    }
    
    /* Recursive step: Compare the last element with the 
       maximum of the rest of the array (n-1 elements).
    */
    return max(arr[n - 1], arrMax(arr, n - 1));
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array is empty. No maximum element." << endl;
        return 0;
    }

    // Dynamic memory allocation
    int* arr = new int[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maximum = arrMax(arr, n);

    cout << "\n" << endl;
    cout << "Maximum Element: " << maximum << endl;

    // Clean up memory
    delete[] arr;

    return 0;
}