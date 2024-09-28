# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:21:21 2021

@author: shenpaul
"""


# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def oddEvenList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head:
            return head
        
        tmp=head
        head02=tmp02=head.next
        
        while tmp02 and tmp02.next:
           
            tmp.next = tmp.next.next
            
            tmp02.next = tmp02.next.next
            
            tmp = tmp.next
            
            tmp02 = tmp02.next
        
        tmp.next = head02 
        
        return head 
    