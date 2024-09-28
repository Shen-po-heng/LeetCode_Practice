# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:14:45 2021

@author: shenpaul
"""


class Solution(object):
    def median(self, arr,k):
        if k % 2 ==0:
            return float((arr[k//2]+arr[k//2-1]))/2
        else:
            return arr[k//2]
        
    def medianSlidingWindow(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[float]
        """
        median_arr=[0]*(len(nums)-k+1)
        for i in range(0,len(nums)-k+1):
            
            arr=nums[ i : i+k]
            
            arr.sort()#sort-->make it slow...I think
            
            median_arr[i]=self.median(arr,k)#get median
            
            #print(arr, median_arr[i])
        return median_arr   