/*
https://leetcode.com/problems/sort-array-by-parity-ii/
Tags: Sort, Easy
*/



class Solution {
public:
    vector<int>v;
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int>v(A.size());
        for(int i=0, j=0;i<A.size(), j<A.size();i++)
        {
            if(A[i]%2==0) 
            {
                v[j]=A[i];
                j+=2;
                    
            }
        }
        for(int i=0, j=1;i<A.size() , j<A.size();i++)
        {
            if(A[i]%2==1) 
            {
                v[j]=A[i];
                j+=2;
                    
            }
        }
        
        
        return v;
    }
};
