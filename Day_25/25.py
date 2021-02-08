/*
https://leetcode.com/problems/count-the-number-of-consistent-strings/
Tags: String, Easy
*/



class Solution:
    
    
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        c=0
        for i in words:
            flag=0
            for k in i:
                if allowed.find(k)==-1:
                    flag=1
                    break      
            if flag==0:
                c+=1
        
        return c
