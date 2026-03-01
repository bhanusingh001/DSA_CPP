/*
 * Problem: Palindrome Check Func
 * Description: Write bool isPalindrome(int n) that checks if number is palindrome.
 * Topic: Functions
 * Date: 2026-03-01 23:36
 */

bool isPalindrome(int n) {
    if (n < 0) return false;
    long reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}