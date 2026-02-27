/*
 * Problem: Pointer to Pointer
 * Description: Declare int a=5; int* p=&a; int** pp=&p;. Print a, *p, **pp. Show all give same value.
 * Topic: Pointers
 * Date: 2026-02-27 23:40
 */

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int* p = &a;
    int** pp = &p;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    cout << "**pp = " << **pp << endl;

    return 0;
}