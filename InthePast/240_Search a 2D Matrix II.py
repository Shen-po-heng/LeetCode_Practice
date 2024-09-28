# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:13:58 2021

@author: shenpaul
"""


class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        #print(matrix,len(matrix))
        #print(matrix[0],len(matrix[0]))
        i=0
        j=len(matrix[0])-1
        #print(i,j)
        
        #check right and left
        while(i<len(matrix) and j>=0):
            #print(matrix[i][j],target)
            if(matrix[i][j]==target):
                return True
            elif(matrix[i][j]>target):
                j-=1
            else:
                i+=1
        return False