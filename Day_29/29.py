
/*
https://leetcode.com/problems/hamming-distance/
Tags: bit manipulation, Easy
*/




class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        x= str (bin(x)) [2:] 
        y= str (bin(y)) [2:]
        c=0

        m= (len(x)-len(y)) if (len(x)>len(y)) else (len(y)-len(x))

        if len(y)>len(x):
            x = (m*'0') +x 
        else:
            y= (m*'0') +y

        for i in range (len(x)):
            if x[i]!=y[i]:
                c+=1
        return c

