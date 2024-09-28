# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:12:44 2021

@author: shenpaul
"""


class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        ans = 0
        for _ in range(31):
            ans += n&1
            ans <<= 1
            n >>= 1
        
        ans += n&1 # add the last bit 
        return ans
    
    """
        arr=[0]*32
        #to reverse binary
        for i in range(0,32):
            if n==0:
                break
            elif n==1:
                arr[i]=1
                break
            elif n%2==0:
                n/=2    # equal to 0
            elif n%2==1:
                n=(n-1)/2#reminder ex:1=3-3/2
                arr[i]=1
        #print(arr)
        
        #coversion
        Ans=0
        for i in range(0,32):
            if arr[i]==1:
                Ans+=2**(31-i) #** power
        return Ans
        
    """