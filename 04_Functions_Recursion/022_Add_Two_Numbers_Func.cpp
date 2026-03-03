/*
 * Problem: Add Two Numbers Func
 * Description: Write a function int add(int a, int b) that returns the sum. Call it from main.
 * Topic: Functions
 * Date: 2026-03-03 23:29
 */

#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1;
    int num2;
    std::cin>>num1>>num2;

    // Calling the function and storing the result
    int sum = add(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}