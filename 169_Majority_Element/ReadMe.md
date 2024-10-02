# 169 Majority Element
Question description: https://leetcode.com/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150

My 1st try (02.10.2024) was okay.
My idea: 
1. declare map to record the key, value
2. Run through nums one by one, if the number in nums appears first time when iterator goint through, then store this in key
3. if not, then just add 1 for the value at the key
4. In the end, we just check which key has more than half value.

I found my solution is same as solution 2 in their recommondation.

However, there are several recommondation solution, I think it's good to research more.
The problem is easy but the solutions deserved to be studied more.
such as:Boyer-Moore Voting Algorithm, Divide and Conquer, Randomization,Bit Manipulation,Sorting
(of course, aside from brute method)