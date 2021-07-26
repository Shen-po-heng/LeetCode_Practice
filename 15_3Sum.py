# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:18:35 2021

@author: shenpaul
"""


class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        
        #sort the list at first
        nums.sort()
        arr=[]
        #print(nums)
        for i in range(len(nums)-2):
            if i>0 and nums[i]==nums[i-1]:
                continue
            left=i+1
            right=len(nums)-1
            #print(i,arr)
            while left<right :
                #print(i,nums[i],left,nums[left],right,nums[right])
                Sum = nums[i] + nums[left] + nums[right]
                #print(Sum)
                if Sum == 0:
                    arr.append([nums[i],nums[left],nums[right]])
                    while left<right and nums[left]==nums[left+1]:
                        left+=1
                    while left<right and nums[right]==nums[right-1]:
                        right-=1
                    left+=1
                    right-=1
                elif Sum > 0:
                    right-=1
                else:
                    left+=1
                
                    
        return arr