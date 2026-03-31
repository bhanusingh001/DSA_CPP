/*
 * Problem: Callback Function
 * Description: Write void forEach(int arr[],int n,void(*fn)(int)). Pass print and square functions.
 * Topic: Functions
 * Date: 2026-04-01 00:00
 */

#include <iostream>

// Sample functions that match the signature (int, int) -> int
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // 1. Declare the function pointer
    // Syntax: return_type (*pointer_name)(parameter_types)
    int (*funcPtr)(int, int);

    // 2. Assign to 'add' and call
    funcPtr = add;
    std::cout << "Result of add: " << funcPtr(10, 5) << std::endl;

    // 3. Reassign to 'subtract' and call
    funcPtr = subtract;
    std::cout << "Result of subtract: " << funcPtr(10, 5) << std::endl;

    return 0;
}