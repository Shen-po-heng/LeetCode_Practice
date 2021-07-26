# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:19:20 2021

@author: shenpaul
"""

#still not correct
class MedianFinder(object):
    
    def __init__(self):
        """
        initialize your data structure here.
        """
        self.arr=[]

    #Try heap
    def addNum(self, num):
        """
        :type num: int
        :rtype: None
        """
        #how to implement linklist in python
        #sorting method
        if  len(self.arr)==0:
            self.arr.append(num)
            return 
        
        for i in range(len(self.arr)):
            if  num > self.arr[i]:
                continue
            else:
                self.arr.insert(i,num)
                return
        
        self.arr.append(num)
        

    def findMedian(self):
        """
        :rtype: float
        """
        n=len(self.arr)
        #print(self.arr,n)
        return (self.arr[n//2]+self.arr[n//2-1])/2.0 if n%2==0 else self.arr[n//2]


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()