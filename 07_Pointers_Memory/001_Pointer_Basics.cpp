/*
 * Problem: Pointer Basics
 * Description: Declare int a=42; int* p=&a;. Print a, *p (value at p), p (address), &a. Show they match.
 * Topic: Pointers
 * Date: 2026-02-27 21:39
 */

#include <iostream>
using namespace std;

int main() {
    int a = 42;
    int* p = &a;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    cout << "p (address) = " << p << endl;
    cout << "&a (address) = " << &a << endl;

    return 0;
}