/*
https://leetcode.com/problems/reverse-words-in-a-string-iii/
Tags: String, Easy
*/


class Solution:
    def reverseWords(self, s: str) -> str:
        s2= s.split()
        ans=""
        for i in s2:
            ans= ans+i[::-1]+" "
              
        ans= ans[:len(ans)-1:]
        return ans
            
        
