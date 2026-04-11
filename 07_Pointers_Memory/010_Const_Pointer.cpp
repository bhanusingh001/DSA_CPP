/*
 * Problem: Const Pointer
 * Description: Demonstrate: const int* p (can't change value), int* const p (can't change address), const int* const p.
 * Topic: Pointers
 * Date: 2026-04-11 23:31
 */

#include <iostream>

int main() {
    int x = 10, y = 20;

    // 1. Pointer to constant data (Data is frozen)
    const int* p1 = &x;
    // *p1 = 15; // Error! Cannot change value
    p1 = &y;     // OK! Can change address

    // 2. Constant pointer (Address is frozen)
    int* const p2 = &x;
    *p2 = 15;    // OK! Can change value
    // p2 = &y;  // Error! Cannot change address

    // 3. Constant pointer to constant data (Everything is frozen)
    const int* const p3 = &x;
    // *p3 = 15; // Error!
    // p3 = &y;  // Error!

    return 0;
}