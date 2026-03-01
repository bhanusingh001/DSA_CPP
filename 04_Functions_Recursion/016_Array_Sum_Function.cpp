/*
 * Problem: Array Sum Function
 * Description: Write int arraySum(int arr[], int size) that returns sum of array elements.
 * Topic: Functions
 * Date: 2026-03-01 23:37
 */

int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += arr[i];
    return sum;
}