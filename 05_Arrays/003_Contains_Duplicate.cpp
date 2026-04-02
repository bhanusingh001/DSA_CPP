/*
 * Problem: Contains Duplicate
 * Description: ? Solve ?
 * Topic: Arrays
 * Date: 2026-04-02 23:49
 */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0)
                return true;
            seen.insert(num);
        }
        return false;
    }
};