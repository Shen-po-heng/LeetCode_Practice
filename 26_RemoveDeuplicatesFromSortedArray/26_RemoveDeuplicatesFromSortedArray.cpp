#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = ( nums.size() != 0 ) ? 1 : 0 ; //like a counter for return (demand)
        int ptr={0};
        for ( int i=1 ; i < nums.size() ; i++ ){
            if ( nums[i] != nums[ptr] ){
                nums[++ptr]=nums[i];
                k++;
            }
        }
        return k;
    }
};