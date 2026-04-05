/*
 * Problem: Reverse Bits
 * Description: ? Solve ?
 * Topic: Bits
 * Date: 2026-04-05 23:26
 */

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for (int i = 0; i < 32; i++) {
            res <<= 1;
            res |= (n & 1);
            n >>= 1;
        }
        return res;
    }
};