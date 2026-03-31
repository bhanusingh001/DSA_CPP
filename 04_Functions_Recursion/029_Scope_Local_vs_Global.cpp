/*
 * Problem: Scope: Local vs Global
 * Description: Declare int x=10 globally and int x=20 locally in main. Print both using ::x and x.
 * Topic: Functions
 * Date: 2026-03-31 23:28
 */

#include <iostream>

// Global variable
int x = 10;

int main() {
    // Local variable
    int x = 20;

    // Accessing local x
    std::cout << "Local x: " << x << std::endl;

    // Accessing global x using the scope resolution operator
    std::cout << "Global x: " << ::x << std::endl;

    return 0;
}