/*
 * Problem: Swap Two Numbers
 * Description: Read two integers. Swap them without using a third variable and print both after swapping.
 * Topic: I/O
 * Date: 2026-02-20 03:27
 */

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a = a + b;  //sum of both numbers
    b = a - b;  //original a
    a = a - b;  //original b

    cout << a << " " << b;
}
