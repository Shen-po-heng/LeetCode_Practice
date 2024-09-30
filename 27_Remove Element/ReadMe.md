# Remove Element
Question description: https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150
My 1st try (30.09.2024) was okay.
My idea: is a bit similiar to prob 27 (Remove Element). I used another vector and a pointer to store the result.

1. Declare and intialize a vector list, and pointer
2. Store them one by one from nums, skip the val

Suggested solution, also use same idea, but don't have to declare another vector.
After thinking twice, it made sense. 
My corrected as following:

```
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k{0};
        for ( int i = 0; i < nums.size(); i++){
            if ( nums[i] == val)
                continue;
            nums[k++]=nums[i];        
        }
        return k;
    }
};
```