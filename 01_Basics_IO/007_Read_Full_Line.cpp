/*
 * Problem: Read Full Line
 * Description: Read a full line of text (including spaces) and print it back.
 * Topic: I/O
 * Date: 2026-02-19 23:14
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string myString;

    // Use getline to read the entire line from cin into myString
    getline(cin, myString);
    cout << myString << endl;

    return 0;
}