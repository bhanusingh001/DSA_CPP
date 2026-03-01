/*
 * Problem: Reverse String Func
 * Description: Write string reverseStr(string s). Return the reversed string.
 * Topic: Functions
 * Date: 2026-03-01 23:40
 */

#include <string>
#include <iostream>

using namespace std;

string reverseStr(string s) {
    int n = s.length();
    
    // Two-pointer logic: i starts at the front, n-1-i at the back
    // We only go up to n/2 to avoid reversing the string twice
    for (int i = 0; i < n / 2; i++) {
        // Swap the character at the start with the character at the end
        swap(s[i], s[n - 1 - i]);
    }
    
    return s;
}

int main() {
    string myString = "Elephant";
    cout << "Original: " << myString << endl;
    cout << "Reversed: " << reverseStr(myString) << endl;
    
    return 0;
}