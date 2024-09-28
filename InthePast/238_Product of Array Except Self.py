# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:22:40 2021

@author: shenpaul
"""


class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums) # array
        res = [0]*n
        res[0]=1
        
        for i in range(1,n):
            
            res[i] = res[i-1] * nums[i-1]
        
        right = 1
        
        for i in range(n-1,-1,-1):
            
            res[i] *= right;
            
            right *= nums[i];
        
        return res
    