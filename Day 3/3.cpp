/*
https://leetcode.com/problems/decode-xored-array/
Tags: Dynamic Array, Easy
*/


class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int>v;
        int res=(first)^(encoded[0]);
        v.push_back(first);
        v.push_back(res);
        
        for(int i=1;i<n;i++)
        {
            res= (res)^(encoded[i]);
            v.push_back(res);
            
        }
        
        return v;
        
    }
};
