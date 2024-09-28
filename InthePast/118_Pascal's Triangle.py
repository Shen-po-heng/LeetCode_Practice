# -*- coding: utf-8 -*-
"""
Created on Tue Jul 27 00:20:22 2021

@author: shenpaul
"""


class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        Pascal=[]
        
        for i in range (numRows):
            
            row=[1]*(i+1)
            
            Pascal.append(row)
            #print(Pascal)
            
            if i>1:
                
                for j in range(1,len(Pascal[i])-1):
                    #print(Pascal[i][j])
                    
                    Pascal[i][j]=Pascal[i-1][j-1]+Pascal[i-1][j]
        
        return Pascal