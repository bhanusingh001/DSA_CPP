/*
 * Problem: Dynamic Array (new/delete)
 * Description: Create array of N integers using new. Fill it, print, then delete[] to free memory.
 * Topic: Dynamic Memory
 * Date: 2026-02-27 23:42
 */

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];   // dynamic allocation

    // Fill array
    for(int i = 0; i < N; i++)
        cin >> arr[i];

    // Print array
    for(int i = 0; i < N; i++)
        cout << arr[i] << " ";

    delete[] arr;   // free memory

    return 0;
}#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];   // dynamic allocation

    // Fill array
    for(int i = 0; i < N; i++)
        cin >> arr[i];

    // Print array
    for(int i = 0; i < N; i++)
        cout << arr[i] << " ";

    delete[] arr;   // free memory

    return 0;
}