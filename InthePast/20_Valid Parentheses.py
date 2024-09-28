# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:20:31 2021

@author: shenpaul
"""


class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        stack=[]
        if len(s)<2:
            
            return False
        
        for i in str(s):
            #print(i,stack)
        #if read left side, just put in stack
            
            if i=='(' or i=='{' or i=='[':
                
                stack.append(i)
        #if read right side, just pop out to compare
            
            elif stack !=[]:
                
                Key=stack.pop()
                #print(Key,i,Key=='(')
                
                if Key=='(' and i==')':
                        continue
                
                elif Key=='{' and i=='}':
                        continue
                
                elif Key=='[' and i==']':
                        continue
                
                else:
                    return False
            
            else:
                return False
        
        if stack == []:
            
            return True
        
        else:
            
            return False
                