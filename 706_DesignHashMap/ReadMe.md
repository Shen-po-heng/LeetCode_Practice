# 706. Design HashMap
Question description: https://leetcode.com/problems/design-hashmap/description/?envType=study-plan-v2&envId=programming-skills

My 1st try (17.10.2024) was pretty okay.
but I think this is not the meaning for this practice, if I just called a hashmap library.
However, I also views several solutions which has a problem when they indeed use pair, vector, but they didn't implement hash function, if there is no hash function. How come to implement hash map?
Please read my 706_DesignHashMap.cpp
It implemented a simple one with Hash function.

```cpp
//first try - > cheating way....haha
class MyHashMap {
public:
    unordered_map<int, int> hashmap{};
    
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        hashmap[key]=value;
    }
    
    int get(int key) {
        if (hashmap.find(key) != hashmap.end())
            return hashmap[key];
        else
            return -1; 
    }
    
    void remove(int key) {
        if (hashmap.find(key) != hashmap.end())
            hashmap.erase(key);
    }
};

```