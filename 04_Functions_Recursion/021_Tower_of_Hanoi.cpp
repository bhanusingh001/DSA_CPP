/*
 * Problem: Tower of Hanoi
 * Description: Solve Tower of Hanoi for N disks. Print each move. Count total moves (2^n - 1).
 * Topic: Recursion
 * Date: 2026-03-02 22:57
 */

#include <iostream>
#include <cmath> // For pow()
using namespace std;

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Step 2: Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move the n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int N;
    cout << "Enter number of disks: ";
    cin >> N;

    // Calculate total moves using 2^n - 1
    int totalMoves = pow(2, N) - 1;

    cout << "--- Steps to solve ---" << endl;
    towerOfHanoi(N, 'A', 'C', 'B'); // A = Source, C = Destination, B = Auxiliary

    cout << "----------------------" << endl;
    cout << "Total moves: " << totalMoves << endl;

    return 0;
}