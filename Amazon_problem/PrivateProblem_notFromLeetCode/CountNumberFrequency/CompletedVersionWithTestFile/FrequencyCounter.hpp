#ifndef FREQUENCYCOUNTER_H
#define FREQUENCYCOUNTER_H

#include <vector>
#include <unordered_map>

class FrequencyCounter {
public:
    // Function to count the frequency and return a sorted 2D vector
    std::vector<std::vector<int>> countAndSortFrequencies(const std::vector<int>& nums);

private:
    // Helper function to sort based on frequency and number
    void sortFrequencies(std::vector<std::vector<int>>& freqVec);
};

#endif
