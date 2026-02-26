/*
 * Problem: GCD Recursive
 * Description: Write int gcd(int a,int b) recursively. Base: gcd(a,0)=a. Recursive: gcd(b,a%b).
 * Topic: Recursion
 * Date: 2026-02-26 23:47
 */

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    cout << gcd(48, 18);
}