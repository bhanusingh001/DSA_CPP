/*
 * Problem: Left Rotate Array by K
 * Description: ? Solve ?
 * Topic: C++ Basics & STL
 * Date: 2026-04-24
 */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};