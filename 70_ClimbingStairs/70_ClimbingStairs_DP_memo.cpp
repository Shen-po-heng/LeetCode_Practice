#include<vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        vector<int> memo(n + 1, -1);  // Memoization array
        return helper(n, memo);
    }
    
    int helper(int n, vector<int>& memo) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        if (memo[n] != -1) return memo[n];  // Return cached result if available
        
        memo[n] = helper(n - 1, memo) + helper(n - 2, memo);  // Store the result
        return memo[n];
    }
};