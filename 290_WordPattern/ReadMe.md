# 290 Word Pattern
Question description: https://leetcode.com/problems/word-pattern/?envType=study-plan-v2&envId=top-interview-150
My 1st try (06.10.2024) was okay.
My idea: my idea is to build a map table, key is from pattern, and value is from s. run throuh pattern, if there is a pattern doesn't match the s then retrun false, otherwise, true.

1. declare map (chartoword) and split string of s and store its string one by one.
2. Compare the size
3. match char to word, if char appears before, then compare; if not, then store

```
bool wordPattern(string pattern, string s) {
    unordered_map<char,string> hash_chartoword;
    vector<string> list_of_s=split_sentence(s);
    if (pattern.size()!=list_of_s.size())
        return false;
    
    int count{0};
    for (auto ch:pattern){
        if (hash_chartoword.find(ch) != hash_chartoword.end()) {
            if (hash_chartoword[ch] != word)
                return false;
        } else {
            hash_chartoword[ch] = word;
        }
    }
    return true;
}
```

However, There is a problem: a case like : "abba" and "dog dog dog dog" -> Returns True (Expected False).
In this case, for the pattern "abba" and the string "dog dog dog dog", the character 'a' would map to "dog" and the character 'b' would also map to "dog", which violates the condition that each unique word must map to only one unique character.

Solution: To fix this, you should also track the reverse mapping (from words to characters) using another unordered_map, ensuring that no two different pattern characters map to the same word and no two different words map to the same character.

Corrected way is implemented as code you can check in my answer 290_Word_Pattern_hashmap.cpp.
