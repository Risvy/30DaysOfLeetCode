/*
https://leetcode.com/problems/split-a-string-in-balanced-strings/
Tags: String, Easy
*/


class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char>stk;
        int k=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') k++;
            else k--;
            if(k==0) c++;
        }
        return c;
        
    }
};
