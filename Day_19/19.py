
/*
https://leetcode.com/problems/climbing-stairs/
Tags: Dynamic Programming, Easy
*/




class Solution:
    def climbStairs(self, n: int) -> int:
        if n<=2:
            return n
        else:
            a,b=1,1
            for i in range (n):
                b,a=a+b, b
            return a
        return 0
                
