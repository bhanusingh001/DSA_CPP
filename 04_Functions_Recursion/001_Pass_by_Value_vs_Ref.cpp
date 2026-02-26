/*
 * Problem: Pass by Value vs Ref
 * Description: Write two functions: modifyValue(int x) and modifyRef(int& x). Show difference in main.
 * Topic: Functions
 * Date: 2026-02-26 23:41
 */

#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = x + 10;
    cout << "Inside modifyValue: " << x << endl;
}

void modifyRef(int& x) {
    x = x + 10;
    cout << "Inside modifyRef: " << x << endl;
}

int main() {
    int a = 5;

    modifyValue(a);
    cout << "After modifyValue: " << a << endl;

    modifyRef(a);
    cout << "After modifyRef: " << a << endl;

    return 0;
}