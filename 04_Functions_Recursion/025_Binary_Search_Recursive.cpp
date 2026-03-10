/*
 * Problem: Binary Search Recursive
 * Description: Implement binary search on sorted array using recursion. Return index or -1.
 * Topic: Recursion
 * Date: 2026-03-10 23:17
 */

#include <iostream>
#include <vector>
using namespace std;


int binarySearch(int arr[], int lo, int hi, int key) {
    if (lo > hi) {
        return -1; 
    }
    
    int mid = lo + (hi - lo) / 2;
    
    if (arr[mid] == key) return mid;
    
    // If key is smaller, search the left half
    if (arr[mid] > key) 
        return binarySearch(arr, lo, mid - 1, key);
        
    // If key is larger, search the right half
    return binarySearch(arr, mid + 1, hi, key);
}

int main() {
    int n, key;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n]; 

    cout << "Enter " << n << " integers in SORTED order: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    cout << "\nEnter the value to search for: ";
    cin >> key;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        cout << key << " found at index " << result << "." << endl;
    } else {
        cout << "\n" << key << " was not found in the array." << endl;
    }

    delete[] arr; // Free memory
    return 0;
}