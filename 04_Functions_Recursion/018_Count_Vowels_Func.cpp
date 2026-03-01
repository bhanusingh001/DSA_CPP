/*
 * Problem: Count Vowels Func
 * Description: Write int countVowels(string s). Count and return number of vowels in s.
 * Topic: Functions
 * Date: 2026-03-01 23:38
 */

int countVowels(string s) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : s) {
        if (vowels.find(c) != string::npos) count++;
    }
    return count;
}