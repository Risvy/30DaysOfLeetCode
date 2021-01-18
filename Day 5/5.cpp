/*
https://leetcode.com/problems/shuffle-an-array/
Tags: Dynamic Array, Medium 
*/

class Solution {
public:
    vector<int>v1,v2;
    Solution(vector<int>& nums) {
        v1=nums;
        v2=nums;
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return v1;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        
        random_shuffle(v2.begin(), v2.end());
        return v2;
        
    }
};
