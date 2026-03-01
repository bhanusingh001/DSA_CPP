/*
 * Problem: Array Max Function
 * Description: Write int findMax(int arr[], int size) that returns the largest element.
 * Topic: Functions
 * Date: 2026-03-01 23:37
 */

int findMax(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}