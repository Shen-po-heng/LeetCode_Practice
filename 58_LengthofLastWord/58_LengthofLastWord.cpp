#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> split_sentence(string sen) {
        vector<string> list_of_words;
        size_t start{0};
        size_t end{0};

        while ((end = sen.find(' ', start)) != string::npos) {
            if (end > start) { // Avoid adding empty strings
                list_of_words.push_back(sen.substr(start, end - start));
            }
            start = end + 1;
        }
        if (start < sen.length()) { // Add the last word if it's not empty
            list_of_words.push_back(sen.substr(start));
        }

        return list_of_words;
    }
    int lengthOfLastWord(string s) {
        vector <string> list_of_s=split_sentence(s);
        return list_of_s[list_of_s.size()-1].size();
    }
};