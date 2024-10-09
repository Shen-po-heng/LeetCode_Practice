#include<vector>
#include<numeric>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth{-INT_MAX};
        for (const auto &account:accounts){
            int sum_account = accumulate(account.begin(), account.end(), 0);
            maxWealth=(maxWealth>sum_account) ? maxWealth:sum_account;
        }
        return maxWealth;
    }
};