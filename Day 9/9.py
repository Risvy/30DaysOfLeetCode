/*
https://leetcode.com/problems/check-if-it-is-a-good-array/
Tags: Dynamic Array, Hard 
*/



class Solution:
    def isGoodArray(self, nums: List[int]) -> bool:
        if gcd(*nums)==1:
            return True
        return False
