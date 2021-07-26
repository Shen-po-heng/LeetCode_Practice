# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:09:26 2021

@author: shenpaul
"""


class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        return str(math.sqrt(x)).split('.')[0]
    
    #I see a solution mentioning "binary search"