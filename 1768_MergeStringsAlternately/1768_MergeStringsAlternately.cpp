#include<string>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word_r{};
        int word1_index{0};
        int word2_index{0};
        for(int i = 0 ; i < ( word1.size()+word2.size() ); i++){
            if( (i%2 == 0 && word1_index <word1.size())  
                            || word2_index >= word2.size() ){
                word_r+=word1[word1_index++];
            }else{
                word_r+=word2[word2_index++];
            }
        }
        return word_r;
    }
};