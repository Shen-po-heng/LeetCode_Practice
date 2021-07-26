# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:18:08 2021

@author: shenpaul
"""


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if not root:
            return []
        
        stack = [root]
        direction = 1
        Ans = []

        while stack:
            tmp = []
            nextlevel = []

            for node in stack:
                tmp.append(node.val)
                if node.left:
                    nextlevel.append(node.left)
                if node.right:
                    nextlevel.append(node.right)

            Ans.append(tmp[::direction])
            direction *=-1 #change direction
            stack= nextlevel

        return Ans