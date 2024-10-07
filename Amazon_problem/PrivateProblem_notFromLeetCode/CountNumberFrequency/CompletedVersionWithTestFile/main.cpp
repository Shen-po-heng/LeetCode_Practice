#include "FrequencyCounter.hpp"
#include <iostream>

int main() {
    FrequencyCounter fc;

    std::vector<int> nums = {3, 3, 1, 1, 2};
    std::vector<std::vector<int>> result = fc.countAndSortFrequencies(nums);

    std::cout << "Sorted Frequencies: " << std::endl;
    for (const auto& pair : result) {
        std::cout << "[" << pair[0] << ", " << pair[1] << "]" << std::endl;
    }

    return 0;
}
