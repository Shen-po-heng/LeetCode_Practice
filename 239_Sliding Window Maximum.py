# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:23:01 2021

@author: shenpaul
"""
#still not correct


class Solution(object):
    def maxSlidingWindow(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        max_arr=[0]*(len(nums)-k+1)
        Max=float("inf")
        
        for i in range(0,len(nums)-k+1):
            
            for j in nums[i:i+k] :
                
                if j==Max:
                
                    break
                
                else:
                    
                    exist=False
            
            if i ==0 or ~exist:
                
                Max=max(nums[ i : i+k] )
            
            elif Max<nums[i+k-1]:
                
                Max=nums[i+k-1]  
            #print(Max,nums[ i : i+k])
            
            max_arr[i]=Max
        
        return max_arr   
        
    
    '''
    max_arr=[0]*(len(nums)-k+1)
        for i in range(0,len(nums)-k+1):     
            max_arr[i]=max(nums[ i : i+k] )
        return max_arr       
    '''