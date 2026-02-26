/*
 * Problem: Palindrome Recursive
 * Description: Check if string is palindrome using recursion. Compare first and last chars, recurse inward.
 * Topic: Recursion
 * Date: 2026-02-26 23:47
 */

#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    if(start >= end)
        return true;

    if(s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main() {
    string str;
    cin >> str;

    if(isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}