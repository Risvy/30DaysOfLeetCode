/*
https://leetcode.com/problems/defanging-an-ip-address/
Tags: String, Easy
*/



class Solution:
    def defangIPaddr(self, address: str) -> str:
        return address.replace('.', '[.]')
        
