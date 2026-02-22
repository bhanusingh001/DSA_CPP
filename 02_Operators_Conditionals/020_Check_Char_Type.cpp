/*
 * Problem: Check Char Type
 * Description: Read a character. Print if it is an uppercase letter, lowercase letter, digit, or special character.
 * Topic: Conditionals
 * Date: 2026-02-22 23:56
 */

#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    if(ch>='A' && ch<='Z')
        cout << "Uppercase";
    else if(ch>='a' && ch<='z')
        cout << "Lowercase";
    else if(ch>='0' && ch<='9')
        cout << "Digit";
    else
        cout << "Special Character";
}