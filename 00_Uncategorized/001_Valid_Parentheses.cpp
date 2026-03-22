/*
 * Problem: Valid Parentheses
 * Link: https://leetcode.com/problems/valid-parentheses/
 * Topic: Stack & Queue
 * Date: 2026-03-22 23:59
 */

class Solution {
public:
    bool isPair(char l, char r) {
        return ((l == '(' && r == ')') || 
                (l == '{' && r == '}') || 
                (l == '[' && r == ']'));
    }

    bool isValid(string s) {
        stack<char> st;

        for (char c : s) {
            if (!st.empty() && isPair(st.top(), c)) {
                st.pop();
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};