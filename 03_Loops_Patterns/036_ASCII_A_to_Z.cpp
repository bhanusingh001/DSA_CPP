/*
 * Problem: ASCII A to Z
 * Description: Print all uppercase letters A through Z with their ASCII values.
 * Topic: For Loop
 * Date: 2026-02-25 23:52
 */

#include <iostream>
using namespace std;

int main() {

    for(char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " = " << int(ch) << endl;
    }

}