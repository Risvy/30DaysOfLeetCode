/*
https://leetcode.com/problems/sort-an-array/
Tags: Dynamic Array, Medium 
*/


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};
