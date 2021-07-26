# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:21:45 2021

@author: shenpaul
"""


class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        if dividend==-2147483648 and divisor==-1:
            
            return 2147483647
        
        val=float(dividend)/float(divisor)
        
        return int(str(val).split(".")[0]) 