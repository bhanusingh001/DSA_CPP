/*
 * Problem: Return Multiple Values
 * Description: Write a function that returns both min and max of an array using reference parameters.
 * Topic: Functions
 * Date: 2026-03-01 23:44
 */

#include <iostream>

using namespace std;

// Function to find both min and max using reference parameters
void minMax(int arr[], int n, int& mn, int& mx) {
    // Initialize both with the first element
    mn = arr[0];
    mx = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) {
            mn = arr[i]; // Update minimum
        }
        if (arr[i] > mx) {
            mx = arr[i]; // Update maximum
        }
    }
}

int main() {
    int size;

    // 1. Get the size of the array from the user
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    // Handle case where size is 0 or negative
    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    // 2. Declare the array and take inputs
    int myArr[size]; // Note: This is a Variable Length Array (VLA) supported by most modern compilers
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> myArr[i];
    }

    // Variables to store the results
    int minimum, maximum;

    // 3. Passing variables by reference
    minMax(myArr, size, minimum, maximum);

    cout << "\n--- Results ---" << endl;
    cout << "Array Minimum: " << minimum << endl;
    cout << "Array Maximum: " << maximum << endl;

    return 0;
}