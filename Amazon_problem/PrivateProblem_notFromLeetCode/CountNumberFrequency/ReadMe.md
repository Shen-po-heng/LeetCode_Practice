# Count number frquency
## Problem Statement
Problem: Given a list of integers, you need to count the frequency of each number in the list. When you process the list to create a two-dimensional vector, where each sub-vector contains the number and its corresponding frequency, then you should return the two-dimensional vector sorted in descending order by frequency. If two numbers have the same frequency, they should be sorted in ascending order by the number itself.

## Example:
* Input: {3, 3, 1, 1, 2}
* Output: [[3, 2], [1, 2], [2, 1]]
In this example, the number 3 appears twice, 1 also appears twice, and 2 appears once. The output reflects the counts in descending order of frequency, and for the same frequency (like 3 and 1), the numbers are sorted in ascending order.

## How to Compile and Run
I have a complete one with Test File for you to play.
To compile and run the code, you can use the following commands:

* Compile:g++ -o main main.cpp FrequencyCounter.cpp
* Run the main file:./main
* Compile the test file:g++ -o test test.cpp FrequencyCounter.cpp
* Run the test file:./test
This will allow you to test the functionality of your class across multiple files with proper separation and unit tests.