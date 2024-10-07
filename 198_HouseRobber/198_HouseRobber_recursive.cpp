#include<vector>
using namespace std;
class Solution {
public:
    int rob_helper(vector<int>& nums, int i) {
        // Base cases
        if (i >= nums.size()) return 0;  // No more houses to rob
        
        // Recursive relation
        return max(nums[i] + rob_helper(nums, i + 2), rob_helper(nums, i + 1));
    }

    int rob(vector<int>& nums) {
        return rob_helper(nums, 0);  // Start robbing from the 0th house
    }
};