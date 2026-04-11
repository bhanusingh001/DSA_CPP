/*
 * Problem: Reference vs Pointer
 * Description: Demonstrate differences: reference must init, can't be null, can't rebind. Pointer can do all.
 * Topic: Pointers
 * Date: 2026-04-11 23:36
 */

#include <iostream>

int main() {
    int a = 10, b = 20;

    // REFERENCES
    int& ref = a;    // 1. Must initialize immediately
    // int& ref2;    // Error!
    ref = b;         // 2. Can't rebind (this just sets a = 20)
    // &ref = &b;    // Error!
    
    // POINTERS
    int* ptr;        // 1. Can be uninitialized (though risky)
    ptr = nullptr;   // 2. Can be null
    ptr = &a;        // 3. Can rebind (points to a)
    ptr = &b;        // Now points to b

    return 0;
}