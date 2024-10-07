# 198. House Robber
Question description: https://leetcode.com/problems/house-robber/description/?envType=study-plan-v2&envId=top-interview-150

My 1st try (07.10.2024) was not okay as expected, because they don't receive recursive way.
Or, I should say recursive way only work for small amounts of data.

## Main idea for recursive way: 
To solve it, we need to find a recursive relation that maximizes the amount of money you can rob without robbing two adjacent houses.

Recursive Relation Explanation
Let’s define a function rob(i) that gives us the maximum amount of money we can rob from house i to the last house. Here's the intuition:
If you rob house i, then you can't rob house i+1 (because they are adjacent). Thus, the total money will be the value of house i plus whatever you can rob starting from house i+2. This can be written as:

rob(i)=nums[i]+rob(i+2)

If you don’t rob house i, then you can start robbing from house i+1. This can be written as:

rob(i)=rob(i+1)

Thus, for each house i, the maximum amount of money you can rob is:

rob(i)=max(nums[i]+rob(i+2),rob(i+1))

Base Cases:
If there are no houses left to rob (i.e., i is out of bounds), return 0.
If there's only one house left, you can rob it without any problem.

## Memorization version
Just add a table to memeorize as demonstration [198_HouseRobber_DP_memo.cpp]
Time Complexity: O(N);Space Complexity: O(N)

## Tabulation version
build it from subproblem 
Time Complexity: O(N);Space Complexity: O(N)

As for the discription is already discussed a lot in Prob 70.

Besides, I just read the recommended solution, and the solution of Tabulation can be further optimized in space for O(1)
