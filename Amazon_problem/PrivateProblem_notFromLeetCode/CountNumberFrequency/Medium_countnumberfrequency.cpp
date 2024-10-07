#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<int>> frequencySort(const vector<int>& nums) {
    unordered_map<int, int> frequencyMap;

    // Step 1: Count frequencies
    for (int num : nums) {
        frequencyMap[num]++;
    }

    // Step 2: Create a 2D vector
    vector<vector<int>> freqVec;
    for (const auto& pair : frequencyMap) {
        freqVec.push_back({pair.first, pair.second});
    }

    // Step 3: Sort the 2D vector
    sort(freqVec.begin(), freqVec.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[1] != b[1]) {
            return a[1] > b[1]; // Sort by frequency (descending)
        }
        return a[0] < b[0]; // Sort by number (ascending)
    });

    return freqVec;
}

int main() {
    vector<int> nums = {3, 3, 1, 1, 2};
    vector<vector<int>> result = frequencySort(nums);

    // Print result
    for (const auto& vec : result) {
        cout << "[" << vec[0] << ", " << vec[1] << "] ";
    }

    return 0;
}
