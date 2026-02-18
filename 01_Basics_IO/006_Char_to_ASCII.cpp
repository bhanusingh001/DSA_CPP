/*
 * Problem: Char to ASCII
 * Description: Read a single character. Print its ASCII value as an integer.
 * Topic: I/O
 * Date: 2026-02-19 01:21
 */

#include <iostream>
using namespace std;

int main() {
    char ch;

     if (cin >> ch) {
        cout << (int)ch << endl;
    }

    return 0;
}