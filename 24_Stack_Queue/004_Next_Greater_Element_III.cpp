/*
 * Problem: Next Greater Element III
 * Description: ? Solve ?
 * Topic: Stack & Queue
 * Date: 2026-05-07
 */

class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int m = s.size();

        int pivot = -1;

        for(int i = m - 2; i >= 0; i--) {
            if(s[i] < s[i+1]) {
                pivot = i;
                break;
            }
        }

        if(pivot == -1) return -1;

        int j = m - 1;
        while(s[j] <= s[pivot]) j--;

        swap(s[pivot], s[j]);

        reverse(s.begin() + pivot + 1, s.end());

        long long ans = stoll(s);
        return (ans > INT_MAX) ? -1 : ans;
    }
};