#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char l_r{};
        for (int i = 0 ; i <= t.size(); i++){
            if(s[i]!=t[i]){
                l_r=t[i];
                break;
            }  
        }
        return l_r;
    }
};