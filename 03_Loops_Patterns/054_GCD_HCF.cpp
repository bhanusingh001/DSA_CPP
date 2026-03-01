/*
 * Problem: GCD / HCF
 * Description: ? Solve ?
 * Topic: For Loop
 * Date: 2026-03-01 22:57
 */

class Solution {
  public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};