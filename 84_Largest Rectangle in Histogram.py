# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:15:49 2021

@author: shenpaul
"""
#still not correct

class Solution(object):
    def largestRectangleArea(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """
        left=0
        right=len(heights)
        MostWater=0
        
        
        if len(heights)==1:
            return  heights[0]
        elif len(heights)==2:
            area=max(heights[left:right]) if min(heights[left:right])==0 else 2*min(heights[left:right])
            return  area
        
        while(left<right):
            print(MostWater,left,right,heights[left:right])
            print(right-left,min(heights[left:right]))
            MostWater=max(MostWater,(right-left)*min(heights[left:right]))
            if heights[left] < heights[right-1]:
                left+=1
            else :
                right-=1
                          
        return MostWater
    
    #[4,2,0,3,2,4,3,4]