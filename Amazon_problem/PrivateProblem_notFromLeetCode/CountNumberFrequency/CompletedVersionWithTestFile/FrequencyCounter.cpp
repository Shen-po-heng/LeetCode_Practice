#include "FrequencyCounter.hpp"
#include <algorithm>

std::vector<std::vector<int>> FrequencyCounter::countAndSortFrequencies(const std::vector<int>& nums) {
    std::unordered_map<int, int> frequencyMap;
    
    // Count the frequencies
    for (int num : nums) {
        frequencyMap[num]++;
    }

    // Store frequencies in a 2D vector
    std::vector<std::vector<int>> freqVec;
    for (const auto& pair : frequencyMap) {
        freqVec.push_back({pair.first, pair.second});
    }

    // Sort the 2D vector by frequency and number
    sortFrequencies(freqVec);

    return freqVec;
}

void FrequencyCounter::sortFrequencies(std::vector<std::vector<int>>& freqVec) {
    std::sort(freqVec.begin(), freqVec.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        if (a[1] != b[1]) {
            return a[1] > b[1]; // Sort by frequency (descending)
        }
        return a[0] < b[0]; // Sort by number (ascending)
    });
}
