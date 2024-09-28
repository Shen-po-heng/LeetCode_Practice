# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:08:23 2021

@author: shenpaul
"""


class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        if len(s)!=len(t):
            return False
        for i in "abcdefghijklmnopqrstuvwxyz":
            if s.count(i) == t.count(i):
                continue
            else:
                return False
        return True
    #all(s.count(x) == t.count(x) for x in 'abcdefghijklmnopqrstuvwxzy')
    #return Counter(s) == Counter(t)