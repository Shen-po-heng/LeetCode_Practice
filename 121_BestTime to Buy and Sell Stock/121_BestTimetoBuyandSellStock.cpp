#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max_profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < min)
                min = prices[i];
            else if (prices[i] - min > max_profit)
                max_profit = prices[i] - min;
        }
        return max_profit;
    
    }
};