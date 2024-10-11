#include<vector>
using namespace std;

class Solution {
public:
bool isMonotonic(vector<int>& nums) {
        bool increasing = true, decreasing = true;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                decreasing = false; // It cannot be decreasing
            }
            if (nums[i] < nums[i - 1]) {
                increasing = false; // It cannot be increasing
            }
        }

        // The array is monotonic if it is either entirely increasing or entirely decreasing
        return increasing || decreasing;
    }
};