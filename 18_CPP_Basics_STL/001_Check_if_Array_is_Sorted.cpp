/*
 * Problem: Check if Array is Sorted
 * Description: ? Solve ?
 * Topic: C++ Basics & STL
 * Date: 2026-04-17
 */

class Solution {
  public:
    bool isSorted(vector<int> &arr) {
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] >= arr[i - 1]) {
                // ok
            } else {
                return false;
            }
        }
        return true;
    }
};  