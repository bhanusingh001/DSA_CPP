/*
 * Problem: Null Pointer Check
 * Description: Declare int* p = nullptr;. Show that dereferencing nullptr crashes. Check before using.
 * Topic: Pointers
 * Date: 2026-04-11 23:28
 */

#include <iostream>

int main() {
    int* p = nullptr;

    // Safety check
    if (p != nullptr) {
        std::cout << *p << std::endl;
    } else {
        std::cout << "Pointer is null! Safety check prevented a crash." << std::endl;
    }

    // This line would crash the program:
    // std::cout << *p << std::endl; 

    return 0;
}