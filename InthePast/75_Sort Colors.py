# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:13:15 2021

@author: shenpaul
"""


class Solution(object):
    #qucksort
    def partition(self,arr, low, high):
        i = (low-1)		 
        pivot = arr[high]	 
        
        for j in range(low, high):
            if arr[j] <= pivot:
                i = i+1
                arr[i], arr[j] = arr[j], arr[i]

        arr[i+1], arr[high] = arr[high], arr[i+1]
        return (i+1)


    def quickSort(self,arr, low, high):
        if len(arr) == 1:
            return arr
        if low < high:

            pi = self.partition(arr, low, high)

            self.quickSort(arr, low, pi-1)
            self.quickSort(arr, pi+1, high)
            
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        #quick sort
        self.quickSort(nums, 0, len(nums)-1)
        