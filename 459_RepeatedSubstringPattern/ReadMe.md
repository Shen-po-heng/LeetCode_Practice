# 459 Repeated Substring Pattern
Question description: https://leetcode.com/problems/repeated-substring-pattern/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (02.10.2024) was okay.
My idea: We can't check the substring, so just use a loop to decide the length of substring to go throught the string
1. set up a loop to decide the lenght of substing, but we don't have to run through over half of string
2. Check the lengh of whole string % the lengh of substring, it has to equal to 0
3. Copy the substring until it reach the lengh of string
4. if substrings equals to string, then return true

I found my solution is same as solution 2 in their recommondation.

However, there are several recommondation solution, I think it's good to research more.
The problem is easy but the solutions deserved to be studied more.
such as:Boyer-Moore Voting Algorithm, Divide and Conquer, Randomization,Bit Manipulation,Sorting
(of course, aside from brute method)