#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> nums_map={};
        
        for(int i=0; i<nums.size(); i++){
            if(nums_map.find(nums[i]) != nums_map.end()){
                nums_map[nums[i]]++;
            }else{
                nums_map[nums[i]]=1;
            }
        }
        int element{};
        for(auto key:nums_map){
            if(key.second > nums.size()/2){
                element=key.first;
                break;
            }
        }
        return element;
    }
};