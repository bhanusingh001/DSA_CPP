/*
 * Problem: Two Sum
 * Description: ? Solve ?
 * Topic: Arrays
 * Date: 2026-03-25 23:40
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
     unordered_map<int,int> m;
           vector<int> ans;

     for(int i=0;i<nums.size();i++){
        int rem=k-nums[i];
        if(m.find(rem)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[rem]);
        }
        else m[nums[i]]=i;
     }
  
        
        
       return ans; 
    }
    };