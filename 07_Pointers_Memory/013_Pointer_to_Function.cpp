/*
 * Problem: Pointer to Function
 * Description: Pass function pointer to another function. Declare, assign, and call through pointer.
 * Topic: Pointers
 * Date: 2026-04-11 23:57
 */

#include <iostream>

int square(int n) { return n * n; }
int cube(int n) { return n * n * n; }

// Function that accepts a function pointer
// The syntax 'int (*recipe)(int)' is just a slot for a function
void printResult(int (*funcPtr)(int), int value) {
    std::cout << "Result: " << funcPtr(value) << std::endl;
}

int main() {
    printResult(square, 5); // Passes square function
    printResult(cube, 5);   // Passes cube function
    return 0;
}