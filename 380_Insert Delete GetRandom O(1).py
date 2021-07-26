# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:14:23 2021

@author: shenpaul
"""


class RandomizedSet(object):

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.num=[]

    def insert(self, val):
        """
        Inserts a value to the set. Returns true if the set did not already contain the specified element.
        :type val: int
        :rtype: bool
        """
        #print("Insert",self.num,val)
        if val not in self.num:
            self.num.append(val)
            return True
        
        return False
        
    def remove(self, val):
        """
        Removes a value from the set. Returns true if the set contained the specified element.
        :type val: int
        :rtype: bool
        """
        #print("remove",self.num,val)
        if val in self.num:
            pos=self.num.index(val)#check position
            #print("pos:",pos)
            self.num.pop(pos) # pop our the value from the position
            return True
        return False

    def getRandom(self):
        """
        Get a random element from the set.
        :rtype: int
        """
        #print("getRandom",self.num)
        return self.num[random.randint(0, len(self.num) - 1)]


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()