#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> stack_brackets;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                stack_brackets.push_back(ch);
            } else {
                if (stack_brackets.empty() || 
                    (ch == ')' && stack_brackets.back() != '(') ||
                    (ch == '}' && stack_brackets.back() != '{') ||
                    (ch == ']' && stack_brackets.back() != '[')) {
                    return false;
                }
                stack_brackets.pop_back();
            }
        }
        return stack_brackets.empty();
    }
};