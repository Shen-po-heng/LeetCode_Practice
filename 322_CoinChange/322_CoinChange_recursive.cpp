#include<vector>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
         // Base cases
        if (amount == 0) return 0;  // No coins needed for amount 0
        if (amount < 0) return -1;  // Invalid case
        
        int minCoins = INT_MAX;  // Initialize to a large value (infinity)
        
        // Try every coin denomination
        for (int coin : coins) {
            int result = coinChange(coins, amount - coin);
            if (result >= 0) {  // Valid solution found
                minCoins = min(minCoins, 1 + result);  // Update minimum coins
            }
        }
        
        return (minCoins == INT_MAX) ? -1 : minCoins;  // Return result
    }
};