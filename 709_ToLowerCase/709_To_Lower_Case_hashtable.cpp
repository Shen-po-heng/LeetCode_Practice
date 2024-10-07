#include<unordered_map>
#include<string>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        unordered_map<char, char> hash;
        string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string lower = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0 ; i < upper.size() ; i++) {
            hash[upper[i]]=lower[i];
        }
        for (auto &ch : s) {
            if(hash.find(ch)!=hash.end())
                ch=hash[ch];
        }
        return s;
    }
};