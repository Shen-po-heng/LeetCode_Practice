#include<vector>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        //find the factors of n
        vector<int> factor_list{};
        for (int i = 1 ; i <= n; i++){
            if(n % i == 0){
                factor_list.push_back(i);
            }
        }
        if (factor_list.size() < k)
            return -1;
        else 
            return factor_list.at(k-1);
    }
};