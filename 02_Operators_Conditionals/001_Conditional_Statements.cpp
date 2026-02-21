/*
 * Problem: Conditional Statements
 * Description: ? Solve ?
 * Topic: Conditionals
 * Date: 2026-02-21 23:43
 */

#include <bits/stdc++.h>

using namespace std;


int main()
{
  int n;
    cin >> n;

    // vector/array to store the words for easy mapping
    // Index 0 is empty because we are dealing with 1-based numbers
    vector<string> words = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n >= 1 && n <= 9) {
        cout << words[n] << endl;
    } else {
        cout << "Greater than 9" << endl;
    }

    return 0;
}