/*
 * Problem: Factorial Function
 * Description: Write int factorial(int n) that returns n! using a loop. Test with n=5,10.
 * Topic: Functions
 * Date: 2026-03-03 23:41
 */

#include <iostream>

int factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {

    int n;
    std::cin>>n;
    std::cout << "Factorial of "<< n << " is : "<< factorial(n) << std::endl;

    return 0;
}