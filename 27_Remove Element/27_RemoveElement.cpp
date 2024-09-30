#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> nums_r(nums.size(),0);
        int k{0};
        for ( int i = 0; i < nums.size(); i++){
            if ( nums[i] == val)
                continue;
            nums_r[k++]=nums[i];        
        }
        nums=nums_r;
        return k;
    }
};