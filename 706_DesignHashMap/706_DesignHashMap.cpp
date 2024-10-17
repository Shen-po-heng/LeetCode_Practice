#include<vector>
using namespace std;

class MyHashMap {
private:
    static const int SIZE = 1000; // Size of the bucket array
    vector<pair<int, int>> hashmap[SIZE]; // Array of vectors for chaining
    
    int hashFunction(int key) {
        return key % SIZE; // Simple hash function (key modulo SIZE)
    }
    
public:
    MyHashMap() {
        // Initialization is done by default with the vector array
    }
    
    void put(int key, int value) {
        int index = hashFunction(key);
        // Check if the key already exists in the chain
        for (auto &p : hashmap[index]) {
            if (p.first == key) {
                p.second = value; // Update value if key exists
                return;
            }
        }
        // If key doesn't exist, add it
        hashmap[index].emplace_back(key, value);
    }
    
    int get(int key) {
        int index = hashFunction(key);
        // Search for the key in the chain
        for (auto &p : hashmap[index]) {
            if (p.first == key) {
                return p.second; // Return the value if found
            }
        }
        return -1; // Return -1 if key doesn't exist
    }
    
    void remove(int key) {
        int index = hashFunction(key);
        // Look for the key in the chain and remove it
        for (auto it = hashmap[index].begin(); it != hashmap[index].end(); ++it) {
            if (it->first == key) {
                hashmap[index].erase(it);
                return;
            }
        }
    }
};
