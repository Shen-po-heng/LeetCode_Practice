#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s=="" ||s.size()==1)
            return true;
        string tmp;
        for (int i = 0 ; i < s.size() ; i++){
            if (s[i]>=65 && s[i]<=90)
                tmp+=tolower(s[i]);
            else if ((s[i]>=97 && s[i]<=122)||(s[i]>=48 && s[i]<=57)){
                tmp+=s[i];
            }
        }
        for(int i = 0 ; i < tmp.size()/2 ; i++){ 
            if(tmp[i]!=tmp[tmp.size()-1-i])
                return false;
        }
        return true;
    }
};