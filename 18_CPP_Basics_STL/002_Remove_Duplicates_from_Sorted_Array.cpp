/*
 * Problem: Remove Duplicates from Sorted Array
 * Description: ? Solve ?
 * Topic: C++ Basics & STL
 * Date: 2026-04-17
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 1;

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;        
    }
};