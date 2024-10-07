#include "FrequencyCounter.hpp"
#include <iostream>
#include <cassert>

// Helper function to compare two 2D vectors
bool compare2DVector(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void runTests() {
    FrequencyCounter fc;

    // Test Case 1
    std::vector<int> nums1 = {3, 3, 1, 1, 2};
    std::vector<std::vector<int>> expected1 = {{1, 2}, {3, 2}, {2, 1}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums1), expected1));

    // Test Case 2
    std::vector<int> nums2 = {5, 5, 5, 7, 7, 3, 3, 3, 3};
    std::vector<std::vector<int>> expected2 = {{3, 4}, {5, 3}, {7, 2}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums2), expected2));

    // Test Case 3
    std::vector<int> nums3 = {1, 2, 3, 4, 5};
    std::vector<std::vector<int>> expected3 = {{1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums3), expected3));

    // Test Case 4
    std::vector<int> nums4 = {10, 20, 20, 10, 30, 10, 20};
    std::vector<std::vector<int>> expected4 = {{10, 3}, {20, 3}, {30, 1}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums4), expected4));

    // Test Case 5: All unique numbers
    std::vector<int> nums5 = {8, 7, 6, 5, 4};
    std::vector<std::vector<int>> expected5 = {{4, 1}, {5, 1}, {6, 1}, {7, 1}, {8, 1}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums5), expected5));

    // Test Case 6: All numbers are the same
    std::vector<int> nums6 = {2, 2, 2, 2};
    std::vector<std::vector<int>> expected6 = {{2, 4}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums6), expected6));

    // Test Case 7: Multiple frequencies
    std::vector<int> nums7 = {1, 2, 1, 3, 2, 3, 3};
    std::vector<std::vector<int>> expected7 = {{3, 3}, {1, 2}, {2, 2}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums7), expected7));

    // Test Case 8: No elements
    std::vector<int> nums8 = {};
    std::vector<std::vector<int>> expected8 = {};
    assert(compare2DVector(fc.countAndSortFrequencies(nums8), expected8));

    // Test Case 9: Negative numbers
    std::vector<int> nums9 = {-1, -1, 0, 0, 0, 1, 1};
    std::vector<std::vector<int>> expected9 = {{0, 3}, {-1, 2}, {1, 2}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums9), expected9));

    // Test Case 10: Large numbers
    std::vector<int> nums10 = {1000000, 999999, 1000000, 999998, 999999};
    std::vector<std::vector<int>> expected10 = {{999999, 2}, {1000000, 2}, {999998, 1}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums10), expected10));

    // Test Case 11: Mixed positive and negative numbers
    std::vector<int> nums11 = {-2, -1, 0, 1, 1, 2, 2, 2};
    std::vector<std::vector<int>> expected11 = {{2, 3}, {1, 2}, {-2, 1}, {-1, 1}, {0, 1}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums11), expected11));

    // Test Case 12: Alternating high and low frequencies
    std::vector<int> nums12 = {3, 1, 4, 4, 2, 2, 2, 3, 3, 3};
    std::vector<std::vector<int>> expected12 = {{3, 4}, {2, 3}, {4, 2}, {1, 1}};
    assert(compare2DVector(fc.countAndSortFrequencies(nums12), expected12));

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    runTests();
    return 0;
}
