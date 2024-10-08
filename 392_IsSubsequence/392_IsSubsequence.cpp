#include<string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr{0};
        for (const auto &ch:t){
            if(s[ptr] == ch)
                ptr++;
        }
        return ptr==s.size();
    }
};