#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> tmp_nums(nums.size());
        k %=nums.size();
        for(int i = 0 ; i < k ; i++){
            tmp_nums[i]=nums[nums.size()-k+i];
        }
        for(int i=0; i < nums.size()-k; i++){
            tmp_nums[k+i]=nums[i];
        }
        nums=tmp_nums;
    }
};