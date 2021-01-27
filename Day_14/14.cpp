/*
https://leetcode.com/problems/intersection-of-two-arrays/
Tags: Binary Search, Easy
*/



class Solution {
public:
    
    set<int>st1,st2,st3;
    map<int,int>mp;
    vector<int>v,v2,ans;

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        for(int i=0;i<nums1.size();i++)
            st1.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++)
            st2.insert(nums2[i]);


        v.assign(st1.begin(), st1.end());
        v2.assign(st2.begin(), st2.end());
        
        v.insert(v.end(), v2.begin(),v2.end());
        
        for(int i=0;i<v.size();i++)
            mp[v[i]]++;

        for(int i=0;i<nums1.size();i++)
        {
            if(mp[nums1[i]]>1) {
                st3.insert(nums1[i]);
            }
               
        }
        
        for(auto i:st3)
        {
            ans.push_back(i);
        }
        
            
    return ans;
    return {};
    }
};
