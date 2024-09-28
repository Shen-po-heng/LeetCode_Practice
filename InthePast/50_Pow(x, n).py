# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:22:05 2021

@author: shenpaul
"""

#not correct
class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        Ans=1
        
        if n==0:
            
            return Ans
        
        if n > 0:
            
            return x*self.myPow(x,n-1)
        
        if n < 0:
            
            return Ans/self.myPow(x,abs(n))