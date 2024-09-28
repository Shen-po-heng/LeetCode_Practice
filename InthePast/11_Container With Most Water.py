# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:17:20 2021

@author: shenpaul
"""


class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left=0
        right=len(height)-1
        MostWater=0
        
        while(left<right):
            MostWater=max(MostWater,(right-left)*min(height[right],height[left]))
            if height[left] < height[right]:
                left+=1
            else :
                right-=1
                          
        return MostWater
                    
                          
        