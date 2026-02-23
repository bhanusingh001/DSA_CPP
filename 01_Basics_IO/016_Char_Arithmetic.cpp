/*
 * Problem: Char Arithmetic
 * Description: Print the result of 'A' + 1 as a character. Convert 'a' to 'A' using arithmetic.
 * Topic: Data Types
 * Date: 2026-02-23 23:44
 */

#include <iostream>
using namespace std;

int main(){
    cout << char('A' + 1) << endl; // B

    char ch = 'a';
    ch = ch - 32;
    cout << ch << endl; // A
}