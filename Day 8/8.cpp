/*
https://leetcode.com/problems/sort-array-by-parity/
Tags: Dynamic Array, Easy 
*/





class Solution {
public:
    vector<int>v;
    vector<int> sortArrayByParity(vector<int>& A) {
        for(int i=0; i<A.size();i++)
        {
            if(A[i]%2==0) v.push_back(A[i]);
        }
        for(int i=0; i<A.size();i++)
        {
            if(A[i]%2==1) v.push_back(A[i]);
        }
        return v;
        
    }
};
