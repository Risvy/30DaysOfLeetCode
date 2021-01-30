/*
https://leetcode.com/problems/peak-index-in-a-mountain-array/
Tags: Binary Search, Easy
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        for(int i=1; i<arr.size()-1;i++)
        {
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
                return i;
        }
        return 0;
    }
};
