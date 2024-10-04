#include<vector>
using namespace std;
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int num_minus={0};
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0)
                return 0;
            if(nums[i]<0)
                num_minus++;
        }
        return (num_minus%2==0)?1:-1;
    }
};