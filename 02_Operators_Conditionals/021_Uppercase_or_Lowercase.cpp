/*
 * Problem: Uppercase or Lowercase
 * Description: Read an alphabet character. Print whether it is uppercase or lowercase.
 * Topic: Conditionals
 * Date: 2026-02-22 23:57
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
}