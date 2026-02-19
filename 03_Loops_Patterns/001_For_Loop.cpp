/*
 * Problem: For Loop
 * Description: ? Solve ?
 * Topic: For Loop
 * Date: 2026-02-20 01:10
 */

#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Word mapping for numbers 1-9
    vector<string> words = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the word for numbers 1 to 9
            cout << words[i] << endl;
        } 
        else if (i > 9) {
            // Check if the number is even or odd using modulo
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}