/*
 * Problem: Fibonacci Recursive
 * Description: ? Solve ?
 * Topic: Recursion
 * Date: 2026-03-26 23:46
 */

class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
    }
};