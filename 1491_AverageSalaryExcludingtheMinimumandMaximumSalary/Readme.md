# 1491. Average Salary Excluding the Minimum and Maximum Salary

Question description:https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (12.10.2024) was okay.
My solution is different from suggested I used built in function.

min_element:
* Purpose: Finds the smallest element in a range.
* Usage: min_element(begin, end) returns an iterator to the smallest element in the range [begin, end).
* Example: *min_element(salary.begin(), salary.end()) gives the minimum value in the salary vector.

max_element:
* Purpose: Finds the largest element in a range.
* Usage: max_element(begin, end) returns an iterator to the largest element in the range [begin, end).
* Example: *max_element(salary.begin(), salary.end()) gives the maximum value in the salary vector.

accumulate:
* Purpose: Computes the sum (or another operation) of elements in a range.
* Usage: accumulate(begin, end, initial_value) calculates the sum of elements from begin to end, starting with initial_value.
* Example: accumulate(salary.begin(), salary.end(), 0) sums all the elements in the salary vector.

static_cast:
* Purpose: Converts one data type to another (safe cast).
* Usage: static_cast<new_type>(value) converts value to new_type.
* Example: static_cast<double>(sum) ensures sum is treated as a double for floating-point division.


## compare reduce and accmulate
reduce is only available starting from C++20, so ensure you're using that standard or later.
Otherwise, this will behave similarly to accumulate.
Compare reduce and accumulate
Both functions are designed to reduce a sequence of elements into a single result, but they differ in key ways:

1. Availability:
* std::accumulate: Available since C++98.
* std::reduce: Introduced in C++20.
2. Parallelization:
* accumulate: Always executes sequentially. It starts from the leftmost element and processes each element one-by-one in order.
* reduce: Can execute in parallel in some cases (if a parallel execution policy is specified). This makes it more efficient on large datasets when parallelism is utilized.
3. Associativity:
* accumulate: Always processes the elements sequentially, meaning the order of evaluation is fixed (left to right).
* reduce: The order of evaluation is unspecified. This is important for parallel execution and may affect the result if the operation is not associative.
4. Default Operator:
* Both use the addition operator (+) by default, but you can specify other operations (like multiplication or custom functions) if needed.

When to Use:
* Use std::accumulate: If you're working in a C++ version before C++20 or when you require sequential processing.
* Use std::reduce: If you're working with large datasets and can benefit from parallelism, or if you're using C++20 and need flexibility in execution.