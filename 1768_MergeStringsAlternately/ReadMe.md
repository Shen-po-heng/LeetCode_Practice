# Merge Sorted Array
Question description: https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (30.09.2024) was okay.
My idea: is a bit similiar to prob 88 (Merge Sorted Array). I used three pointers method.

1. Declare and intialize retrun string, two point for word1 and word2
2. Store them one by one alternatively, but just considet maybe the list may be empty.

I saw their 2nd solution has a better writting style, and only use one pointer, and with built-in function. Each run in loop can put 2 number from 2 lists, looks much better.
```
        for (int i = 0; i < max(m, n); i++) {
            if (i < m) {
                result.push_back(word1[i]);
            }
            if (i < n) {
                result.push_back(word2[i]);
            }
        }
```