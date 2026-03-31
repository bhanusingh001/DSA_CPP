/*
 * Problem: Namespace Demo
 * Description: Create namespace Math and namespace Physics, each with calc() function. Call both.
 * Topic: Functions
 * Date: 2026-03-31 23:34
 */

#include <iostream>

// Defining the Math namespace
namespace Math {
    void calc() {
        std::cout << "Math::calc() -> Calculating area of a circle..." << std::endl;
    }
}

// Defining the Physics namespace
namespace Physics {
    void calc() {
        std::cout << "Physics::calc() -> Calculating force (F = ma)..." << std::endl;
    }
}

int main() {
    // Calling functions using the scope resolution operator ::
    Math::calc();
    Physics::calc();

    return 0;
}