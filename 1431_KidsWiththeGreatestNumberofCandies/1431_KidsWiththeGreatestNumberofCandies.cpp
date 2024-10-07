#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> results(candies.size(), false);
        int maxCandies = *max_element(candies.begin(), candies.end()); // Find the maximum candies once

        for (int i = 0; i < candies.size(); i++) {
            results[i] = (candies[i] + extraCandies >= maxCandies); // Compare each kid's candies + extra
        }

        return results;
    }
};