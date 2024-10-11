# 21. Merge Two Sorted Lists
Question description: https://leetcode.com/problems/merge-two-sorted-lists/description/?envType=study-plan-v2&envId=top-interview-150
My 1st try (11.10.2024) was not okay. I stuggled on how to the first value of the third list. Of course, we can throw the first value from list 1 or list 2 directly, but what if they are empty? That would write more lines and not clean.
I asked chatgpt, the way is super east to create a dummy point, and we just return the list except the dummy, and the problem can be solved easily.

1. Create the dummy point, what value inside it is not important.
2. then, go through both list to compare their value, until one of list reach empty.
3. Check which one still have value.

Shortly comment, I personally think this problme should be medium.
The logic is also not too hard, but how to write a clean and concise code need to be paid attention.