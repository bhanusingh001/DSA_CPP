/*
 * Problem: Valid Parentheses Stack
 * Description: ? Solve ?
 * Topic: STL-Stack
 * Date: 2026-04-04 23:31
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