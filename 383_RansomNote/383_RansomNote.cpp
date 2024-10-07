#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> hash;
      for (auto ch:magazine){
        hash[ch]++;
      }
      for (auto ch:ransomNote){
        if(hash[ch]!=0)
            hash[ch]--;
        else
            return false;
      }
      return true;
    }
};