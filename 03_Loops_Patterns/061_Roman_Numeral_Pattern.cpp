/*
 * Problem: Roman Numeral Pattern
 * Description: Read N=5. Print: I\nII\nIII\nIV\nV in triangle form.
 * Topic: Patterns
 * Date: 2026-03-02 22:41
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N = 5;
    // Array to store Roman numerals for numbers 1 to 5
    string roman[] = {"I", "II", "III", "IV", "V"};

    for (int i = 0; i < N; i++) {
        // Print the Roman numeral at the current index
        cout << roman[i] << endl;
    }

    return 0;
}