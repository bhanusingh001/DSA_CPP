/*
 * Problem: isPrime Function
 * Description: Write bool isPrime(int n). Use it to print all primes from 1 to 100.
 * Topic: Functions
 * Date: 2026-02-26 23:44
 */

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    for(int i = 1; i <= 100; i++)
        if(isPrime(i))
            cout << i << " ";
}