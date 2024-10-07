#include<string>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        for(auto &ch : s) {
            if (ch >= 65 && ch <= 90) 
                ch += 32;
        }
        return s;
    }
};