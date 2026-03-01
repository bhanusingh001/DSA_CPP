/*
 * Problem: All Primes to N
 * Description: ? Solve ?
 * Topic: For Loop
 * Date: 2026-03-01 23:17
 */

class Solution {
  public:
    vector<int> sieve(int n) {
        vector<int> primes;
        vector<bool> isPrime(n + 1, true);

        if (n < 2) return primes;

        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i <= n; i++)
            if (isPrime[i])
                for (int j = i * i; j <= n; j += i)
                    isPrime[j] = false;

        for (int i = 2; i <= n; i++)
            if (isPrime[i])
                primes.push_back(i);

        return primes;
    }
};