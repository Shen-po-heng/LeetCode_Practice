# 1_Two Sum
Question description: https://leetcode.com/problems/two-sum/?envType=study-plan-v2&envId=top-interview-150

My 1st try (04.10.2024) was okay.
My idea: very simple, use two loop to solve it and its complexity is O(n^2)

Think about other way--Hash map. The order of array is not important in the problem and save the time to search, so think about Hash map.
The idea of hash map: store the number of array as key (index of hash table by unorder map), and store the index of array as value. That is, the key-value pair is data of array-index of array.
And we reverse it when we count one by one through the list. 


