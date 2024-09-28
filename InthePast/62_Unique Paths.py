# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:18:57 2021

@author: shenpaul
"""


class Solution(object):
    def factorial(self,x):
        value=1
        for i in range (1,x+1):
            value*=i
        return value
    def uniquePaths(self, m, n):
        """
        :type m: int --->down
        :type n: int  ---->right  
        :rtype: int
        """
        
        #permutation 
        return self.factorial(m+n-2)/(self.factorial(m-1)*self.factorial(n-1)) 8!/2!6!
    