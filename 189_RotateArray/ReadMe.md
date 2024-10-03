# 189 Rotate Array
Question description: https://leetcode.com/problems/rotate-array/description/?envType=study-plan-v2&envId=top-interview-150

My 1st try (03.10.2024) was okay.
My idea: Use another vector to copy the thing from their position, and their changed position can be checked by k % by nums.size()
1. declare a vector with the same size with nums and calculate k
2. copy the value from their position
3. Return the vector to nums 

I found my solution is similar as solution 2 in their recommondation.

However, its writting is much clear as following:

```
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[(i + k) % n] = nums[i];
    }
```