# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:16:56 2021

@author: shenpaul
"""


class MinStack(object):

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.minstack=[]

    def push(self, val):
        """
        :type val: int
        :rtype: None
        """
        self.minstack.append(val)

    def pop(self):
        """
        :rtype: None
        """
        top=len(self.minstack)
        self.minstack.pop(top-1)

    def top(self):
        """
        :rtype: int
        """
        top=len(self.minstack)
        return self.minstack[top-1]

    def getMin(self):
        """
        :rtype: int
        """
        return min(self.minstack)


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()