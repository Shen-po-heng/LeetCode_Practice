# 1232. Check If It Is a Straight Line

Question description:https://leetcode.com/problems/check-if-it-is-a-straight-line/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (12.10.2024) was not okay.
``` cpp
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        float slope = ( coordinates[0][1] - coordinates[1][1] ) / ( coordinates[0][0] - coordinates[1][0] );
        for (int i = 2; i < coordinates.size(); i++){
            float slope_otherpoint=( coordinates[0][1] - coordinates[i][1] ) / ( coordinates[0][0] - coordinates[i][0] );
            if (slope_otherpoint!=slope)
                return false;
        }
        return true;
        
    }
};
```
The issue with the code is that integer division for calculating the slope, which can lead to precision errors. Additionally, dividing by zero may occur when the points have the same x value, which can result in undefined behavior.

The new solution is changed as seen in the 1232_CheckIfItIsaStraightLine.cpp 

Instead of directly comparing slopes, avoid division altogether and use the cross multiplication method to check if the points are collinear. This method eliminates the need for floating-point calculations and handles vertical lines without causing division by zero errors.
.