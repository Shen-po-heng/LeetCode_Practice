# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:12:11 2021

@author: shenpaul
"""


class Solution(object):
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n<=2:
            return 0
        
        arr=[1]*n 
        arr[0]=arr[1]=0 #intialize
        
        for i in range(2,n):
            if arr[i]:
                for j in range(i*i,n,i):  
                    arr[j]=0
        return sum(arr)
        
        """
        Original method:
        count=0
        for i in range(2,n):
            for j in range (2,i+1):
                print(i,j)
                if i%j==0 and j!= i : #factor
                    break
                elif i%j==0 and j==i: #prime
                    count+=1
        return count
        """