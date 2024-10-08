# 56. Merge Intervals
Question description: https://leetcode.com/problems/merge-intervals/submissions/1416391620/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency
My 1st try (09.10.2024) was not okay. I supposed the intervals are already sorted,, but it permits such as [[1,4],[0,4]], so the number is not alway in the ascending order. My way also directly modifies the intervals list while iterating through it, which can cause issues when merging intervals.

'''cpp[]
        for (int i = 1; i < intervals.size() ; i++){
            if(intervals[i-1][1] >= intervals[i][0]){
                intervals[i][0]=intervals[i-1][0];
                intervals.erase(intervals.begin()+(i-1));
                i-=1;
            }
        }
        return intervals;
'''

