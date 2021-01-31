/*
https://leetcode.com/problems/guess-number-higher-or-lower/
Tags: Binary Search, Easy
*/







class Solution {
public:
    long long guessNumber(long long n) {
        long long l=1, r=n;
        while(l<=r)
        {
            long long mid=((l+r)/2);
            
            if(guess(mid)==-1)
                r=mid-1;
            
            else if(guess(mid)==1)
                l=mid+1;
            
            else return mid;
        }
        return 0;
        
    }
};
