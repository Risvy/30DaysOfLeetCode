/*
https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
Tags: Array, Easy
*/



class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int mul=1, sum=0;
        while(n>0)
        {
            int x=(n%10);
            mul*=x;
            sum+=x;
            n/=10;
        }
        return (mul-sum);
    }
};
