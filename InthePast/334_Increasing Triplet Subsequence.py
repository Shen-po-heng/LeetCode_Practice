# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:17:44 2021

@author: shenpaul
"""


class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        Num01 = Num02 = float("inf")
        for i in nums: 
            print(i,Num01,Num02)
            if i <= Num01:
                Num01 = i
            elif i <= Num02:
                Num02 = i
            else:
                return True;
        return False;

        # I thought this is weird, because I tried  [1,2,0,3]
        """
        for i in range(len(nums)-2):
            #print(i,nums[i],nums[i+1],nums[i+2])
            if nums[i+2]>nums[i+1] and nums[i+1]>nums[i]:
                return True
            else:
                continue
        return False
        """