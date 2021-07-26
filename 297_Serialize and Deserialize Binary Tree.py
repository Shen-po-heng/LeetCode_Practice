# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:10:48 2021

@author: shenpaul
"""


# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Codec:
    
    #recusive-way(preorder)
    def serialize(self, root):
            if not root: 
                return 'x'
            else:
                return root.val, self.serialize(root.left), self.serialize(root.right)

    def deserialize(self, data):
        if data[0] == 'x': 
            return None
        else:
            node = TreeNode(data[0])
            node.left = self.deserialize(data[1])
            node.right = self.deserialize(data[2])
            return node