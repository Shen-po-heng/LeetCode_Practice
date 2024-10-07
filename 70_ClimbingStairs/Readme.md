# 70. Climbing Stairs
Question description: https://leetcode.com/problems/climbing-stairs/description/?envType=study-plan-v2&envId=top-interview-150
My 1st try (07.10.2024) was not okay, the result was time limit exceeded.
My idea: Mainly, I use recursive way to do it. The logic is simple.
The stairs climbing steps are only 1 and 2, so the general form will be : 

climbStairs(n)=climbStairs(n-1)+climbStairs(n-2), which mean the current steps consists of 2 situation with one or two moer step.

And, the initialzaition case is as climbStairs(1)=1,ClimbStairs(2)=2

However, the logic is correct, but it can't work for big number.
The recursive solution has exponential time complexity (O(2^n)) because it recalculates the same values multiple times

## memorization version of DP
I did 1st practice is memorization version of DP
the memoization version is a form of dynamic programming (DP). In dynamic programming, we solve complex problems by breaking them down into simpler overlapping subproblems, storing the results of those subproblems to avoid redundant computations. This is exactly what memoization does—caching the results of function calls and using them when needed, instead of recalculating.

Time Complexity:
In the memoization version, each unique value of n from 1 to n is computed exactly once, and the result is stored in the memo array. Therefore:

Each recursive call takes constant time (O(1)), but we only compute each n once.
As a result, there are n recursive calls in total (one for each n from 1 to n).
Thus, the time complexity of the memoization version is O(n).

Space Complexity:
The memoization array (vector<int> memo(n+1)) requires O(n) space to store the results.
The recursion stack depth is at most n because of the nature of the recursion.
Therefore, the space complexity is also O(n).

## Tabulation version of DP
In dynamic programming, we solve a problem by building up solutions to smaller subproblems and using those solutions to solve larger problems. The iterative approach achieves this by systematically calculating and storing results in a bottom-up manner, starting from the base cases.

Tabulation vs. Memorization:
Memorization solves the problem top-down, starting with the original problem (climbStairs(n)) and using recursion. It stores the results of subproblems (in a cache or memo) to avoid redundant calculations.
Tabulation is a bottom-up approach where you solve all subproblems first and use their results to build up the solution to the overall problem. In this case, you start from the base cases (n = 1 and n = 2) and iteratively calculate the values for larger n.
Time Complexity:
The iterative version still computes each value of n exactly once, so the time complexity remains O(n).

Space Complexity:
In the iterative approach, you only need two variables (first and second) to store the previous two results, so the space complexity is O(1), which is more efficient than the O(n) space required by memoization.