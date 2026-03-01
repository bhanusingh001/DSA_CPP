/*
 * Problem: Prime Check
 * Description: ? Solve ?
 * Topic: For Loop
 * Date: 2026-03-01 23:03
 */

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}