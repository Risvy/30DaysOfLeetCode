/*
https://leetcode.com/problems/xor-operation-in-an-array/
Tags: Dynamic Array, Easy 
*/

class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            v[i]=start;
            start+=2;
        }
        for(int i=0;i<n;i++)
        {
            ans=(ans)^(v[i]);
        }
        return ans;
    }
};
