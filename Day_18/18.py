/*
https://leetcode.com/problems/arranging-coins/
Tags: Binary Search, Easy
*/


class Solution:
    def arrangeCoins(self, n: int) -> int:
        c=2*n
        a=1
        b=1
        x1= (-b+sqrt((b*b)-(4*a*(-c))))/(2*a)
        x2= (-b-sqrt((b*b)-(4*a*(-c))))/(2*a)
        if(x1<0):
            return  (int) (floor(x2))
        return (int) (floor(x1));
        
