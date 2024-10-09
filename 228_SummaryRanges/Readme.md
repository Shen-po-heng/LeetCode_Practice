# 228. Summary Ranges
Question description: https://leetcode.com/problems/summary-ranges/description/?envType=study-plan-v2&envId=top-interview-150
My 1st try (09.10.2024) was not really okay.
```cpp[]
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string>summary_str{};
        string range_begin{};
        string range_end{};
        int count={0};
        for (const auto &num:nums){
            if (range_begin.empty()){
                range_begin.push_back(num);
                count++;
            }else if(stoi(range_begin)+count == num){
                range_end.push_back(num);
                count++;
            }else{
                summary_str.push_back(range_begin+"->"+range_end);
                range_begin.pop_back();
                range_begin.push_back(num);
                range_end.pop_back();
            }
        }
        return summary_str;
    }
};

```
Key Issues:
Using push_back for strings: You are using push_back(num) to append integers to the strings range_begin and range_end. However, push_back expects a char, not an int. To append integers, you'll need to convert them to strings first.

Handling single-element ranges: You're not handling the case where the range consists of a single element (e.g., "7" in the example). This case needs to be addressed in your logic.

Resetting the range: After pushing a range to summary_str, you need to reset range_begin and range_end correctly, but pop_back() and push_back() won't work for this.

---
I follow chatGPT following:
Suggested Approach:
1. Start a new range when necessary.
2. If the current number continues the range, update the end.
3. When a gap is detected, close the current range and start a new one.
4. Handle the final range after the loop ends.

It works. and I thin it is easier to be understood.
