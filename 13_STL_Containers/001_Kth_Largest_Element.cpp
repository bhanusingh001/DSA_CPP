/*
 * Problem: Kth Largest Element
 * Description: ? Solve ?
 * Topic: STL-Vector
 * Date: 2026-04-14
 */

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
        return nums[k - 1];
    }
};