#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int rob_helper(vector<int>& nums, int i, vector<int>& memo ) {
        // Base cases
        if (i >= nums.size()) return 0;  // No more houses to rob
        // Memo
        if (memo[i]!=-1) return memo[i];
        memo[i]=max(nums[i] + rob_helper(nums, i + 2,memo), rob_helper(nums, i + 1,memo));
        // Recursive relation
        return memo[i];
    }

    int rob(vector<int>& nums) {
        vector<int> memo(nums.size()+1,-1);
        return rob_helper(nums, 0,memo);  // Start robbing from the 0th house
    }
};