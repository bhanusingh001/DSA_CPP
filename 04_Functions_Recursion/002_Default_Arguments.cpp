/*
 * Problem: Default Arguments
 * Description: Write double power(double base, int exp=2). Default should square the number.
 * Topic: Functions
 * Date: 2026-02-26 23:41
 */

#include <iostream>
using namespace std;

double power(double base, int exp = 2) {
    double result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    return result;
}

int main() {
    cout << power(5) << endl;      // 25 (5?)
    cout << power(2, 3) << endl;   // 8
}