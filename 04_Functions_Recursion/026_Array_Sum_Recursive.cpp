/*
 * Problem: Array Sum Recursive
 * Description: Find sum of array elements using recursion. No loops.
 * Topic: Recursion
 * Date: 2026-03-10 23:24
 */

#include <iostream>
using namespace std;

int arrSum(int arr[], int n) {
    // Base case: if no elements are left, the sum is 0
    if (n <= 0) {
        return 0; 
    }
    // Recursive step: Last element + sum of the remaining (n-1) elements
    return arr[n - 1] + arrSum(arr, n - 1);
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Sum is 0 (Array is empty)." << endl;
        return 0;
    }

    // Allocate memory dynamically based on user input
    int* arr = new int[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = arrSum(arr, n);

    cout << "\n" << endl;
    cout << "Total Sum: " << sum << endl;
    cout << " " << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}