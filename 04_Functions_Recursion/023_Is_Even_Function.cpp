/*
 * Problem: Is Even Function
 * Description: Write bool isEven(int n) that returns true if n is even, false otherwise.
 * Topic: Functions
 * Date: 2026-03-03 23:31
 */

#include <iostream>

// Function returns true if n is even, false otherwise
bool isEven(int n) {
    return (n % 2 == 0);
}

int main() {
    int testValue;
    std::cin>>testValue;

    if (isEven(testValue)) {
        std::cout << testValue << " is an even number." << std::endl;
    } else {
        std::cout << testValue << " is an odd number." << std::endl;
    }

    return 0;
}