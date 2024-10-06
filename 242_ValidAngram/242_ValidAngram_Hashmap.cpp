#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int> hash;
      for (auto ch:s){
        hash[ch]++;
      }
      for (auto ch:t){
        hash[ch]--;
      }
       for (auto item : hash) 
            if (item.second != 0) 
                return false;

        return true;
    }
};