/*
 * Problem: Power of Two Bits
 * Description: ? Solve ?
 * Topic: Bits
 * Date: 2026-04-05 23:36
 */

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};