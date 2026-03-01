/*
 * Problem: Armstrong Check Func
 * Description: Write bool isArmstrong(int n). Return true if n equals sum of cubes of digits.
 * Topic: Functions
 * Date: 2026-03-01 23:36
 */

bool isArmstrong(int n) {
    int sum = 0, original = n;
    while (n > 0) {
        int digit = n % 10;
        sum += (digit * digit * digit);
        n /= 10;
    }
    return sum == original;
}