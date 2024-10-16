# 67. Add Binary
Question description: https://leetcode.com/problems/add-binary/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (16.10.2024) was not good.
```cpp
class Solution {
public:
    string addBinary(string a, string b) {
        int a_ptr=a.size()-1;
        int b_ptr=b.size()-1;
        string result( max(a.size(),b.size()) ,'0');
        int result_ptr=result.size()-1;
        char carry='0';
        while (a_ptr != 0 || b_ptr !=0){
            char x = (a_ptr!=0) ? a[a_ptr--]:0;
            char y = (b_ptr!=0) ? b[b_ptr--]:0;
            if ( x != y){// b.o:x&y=1
                result[result_ptr--] = ( carry=='0')?'1':'0';
                carry = ( carry=='0')?'0':'1';
            } 
            else{// b.o:x&y=0
                result[result_ptr--] = ( carry=='0')?'0':'1';
                carry = ( x=='0')?'0':'1';
            }
        }
        return (carry=='1')?'1'+result:result;
    }
};
```
There are a few issues in the code:
1. Boundary Condition Check: The condition while (a_ptr != 0 || b_ptr != 0) will break when the pointers reach 0, but it also needs to check when they go below zero. You should use while (a_ptr >= 0 || b_ptr >= 0) instead.

2. Accessing a[a_ptr--] and b[b_ptr--]: When the pointer is less than 0, it will result in accessing out-of-bound memory. We should handle it by setting x and y to '0' if the pointer is less than 0.

3. Carry Initialization: You are using a char for carry, but it could be simplified by using an integer to represent carry (either 0 or 1), which will be easier to work with numerically.

New solution is just as implemented in this folder 67_AddBinary.cpp
Key Changes:
1. While Condition: The loop runs as long as there are digits to process from either string or if there's a remaining carry.
2. Character to Integer Conversion: x and y are converted to integers directly by subtracting '0'.
3. Carry Handling: carry is an integer (0 or 1) and is updated after each sum.
4. Result Reversed: The result is built backwards, so it needs to be reversed at the end.