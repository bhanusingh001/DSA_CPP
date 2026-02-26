/*
 * Problem: Reverse String Recursive
 * Description: Reverse a string using recursion. No loops allowed.
 * Topic: Recursion
 * Date: 2026-02-26 23:46
 */

#include <iostream>
using namespace std;

void reverseString(string s) {
    if(s.length() == 0)
        return;

    reverseString(s.substr(1));  // recurse without first char
    cout << s[0];                // print first char later
}

int main() {
    string str;
    cin >> str;
    reverseString(str);
}