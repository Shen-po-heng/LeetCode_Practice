# 242 Valid Angram
Question description: https://leetcode.com/problems/valid-anagram/description/?envType=study-plan-v2&envId=programming-skills
My 1st try (01.10.2024) was okay.
My idea: the intution is very clear to use sorting method and to run through them one by one

1. Put two into sort function to rearrange their order
2. Compare them one by one and return 

Still can consider hashmap and bit operation (other days...)

I also see the solution can use counter by alphabet.

My 2nd try: hashmap (06.10.2024)
The idea:store each alphabet into unorder map, and calculate them, actually, I think use map is also okay.
Just think about key-value
But the time complexity will be different. map is the use of red-blact tree data structure, which has O(nlogn), but unordermap is close to hash table O(1). 