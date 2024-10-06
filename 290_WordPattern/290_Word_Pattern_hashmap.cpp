#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<string> split_sentence(string sen) {
        vector<string> list_of_words;
        size_t start{0};
        size_t end{0};

        while ((end = sen.find(' ', start)) != string::npos) {
            list_of_words.push_back(sen.substr(start, end - start));
            start = end + 1;
        }
        list_of_words.push_back(sen.substr(start));
        
        return list_of_words;
    }
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> hash_chartoword;
        unordered_map<string,char> hash_wordtochar;
        vector<string> list_of_s=split_sentence(s);
        if (pattern.size()!=list_of_s.size())
            return false;
        
        int count{0};
        for (auto ch:pattern){
            string word = list_of_s[count];
            if (hash_chartoword.find(ch) != hash_chartoword.end()) {
                if (hash_chartoword[ch] != word)
                    return false;
            } else {
                hash_chartoword[ch] = word;
            }
             if (hash_wordtochar.find(word) != hash_wordtochar.end()) {
                if (hash_wordtochar[word] != ch)
                    return false;
            } else {
                hash_wordtochar[word] = ch;
            }
            count++;
        }
        return true;
    }
};