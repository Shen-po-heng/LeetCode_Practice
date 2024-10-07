#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int coinChangeHelper(vector<int>& coins, int amount, unordered_map<int, int>& memo) {
        // Base cases
        if (amount == 0) return 0;  // no coins are needed for amount 0
        if (amount < 0) return -1;  // invalid case
        
        // If the result is already computed, return it
        if (memo.find(amount) != memo.end()) return memo[amount];
        
        int minCoins = INT_MAX;  // initialize with a large value
        
        // Try every coin denomination
        for (int coin : coins) {
            int result = coinChangeHelper(coins, amount - coin, memo);
            if (result >= 0 && result < minCoins) {
                minCoins = 1 + result;  // 1 coin used, so add to result
            }
        }
        
        // If minCoins is still INT_MAX, it means no valid solution was found
        memo[amount] = (minCoins == INT_MAX) ? -1 : minCoins;
        return memo[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        unordered_map<int, int> memo;  // memoization table
        return coinChangeHelper(coins, amount, memo);
    }
};