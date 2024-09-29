#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(nums1.begin(), nums1.begin() + m);
        int num1_index{0};
        int num2_index{0};
        for (int p = 0; p < m + n; p++) {
            if (num2_index >= n || (num1_index < m && nums3[num1_index] < nums2[num2_index])) {
                nums1[p] = nums3[num1_index++];
            } else {
                nums1[p] = nums2[num2_index++];
            }
        }
    }
};