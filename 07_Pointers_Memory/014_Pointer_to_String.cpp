/*
 * Problem: Pointer to String
 * Description: Use char* to point to a C-string. Print char by char using pointer increment.
 * Topic: Pointers
 * Date: 2026-04-11 23:59
 */

#include <iostream>

int main() {
    const char* str = "Pointer";
    const char* p = str;

    std::cout << "Traversing string: ";
    while (*p != '\0') {
        std::cout << *p << " "; // Print char at current address
        p++;                    // Increment address to next char
    }
    std::cout << std::endl;

    return 0;
}