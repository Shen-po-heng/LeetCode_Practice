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
        if (head == nullptr || head->next == nullptr) {
            return false; // If list is empty or has only one node
        }

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;         // Move slow pointer by one step
            fast = fast->next->next;   // Move fast pointer by two steps
            
            if (slow == fast) {
                return true; // Cycle detected
            }
        }

        return false; // No cycle detected
    }
};