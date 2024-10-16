#include<unordered_map>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> savednodes;
        while(head !=nullptr){
            if (savednodes.find(head) != savednodes.end())
                return true;
            savednodes.insert({head,1});
            head=head->next;
        }
        

        return false; // No cycle detected
    }
};