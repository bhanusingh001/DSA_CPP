/*
 * Problem: Size of Data Types
 * Description: Print the size in bytes of int, float, double, char, bool, and long long using sizeof().
 * Topic: Data Types
 * Date: 2026-02-20 04:34
 */

#include <iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;

    return 0;
}