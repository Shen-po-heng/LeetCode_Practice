# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:16:34 2021

@author: shenpaul
"""


class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n <=0: #include: negative
            return False
        
        while(n>1):
            if n%3==0:
                n/=3
            else:
                return False        
        
        return True