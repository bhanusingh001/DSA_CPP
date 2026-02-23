/*
 * Problem: INT_MAX & INT_MIN
 * Description: Print the maximum and minimum values that int and long long can hold.
 * Topic: Data Types
 * Date: 2026-02-23 23:40
 */

#include <iostream>
#include <climits>
using namespace std;

int main(){
    cout << "int max: " << INT_MAX << endl;
    cout << "int min: " << INT_MIN << endl;
    cout << "long long max: " << LLONG_MAX << endl;
    cout << "long long min: " << LLONG_MIN << endl;
}