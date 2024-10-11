# 206. Reverse Linked List
Question description: https://leetcode.com/problems/reverse-linked-list/description/?envType=study-plan-v2&envId=programming-skills
My 1st try (10.11.2024) was  okay.
My idea: just use another point to store one by one reversely.

But it can be made more clean and short.

```C++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* R_head = nullptr;  // This will be the new head of the reversed list
        ListNode* tmp = nullptr;     // Temporary node to store the next node

        while (head != nullptr) {
            tmp = head->next;        // Store the next node
            head->next = R_head;     // Reverse the current node's next pointer
            R_head = head;           // Move R_head to the current node
            head = tmp;              // Move to the next node
        }

        return R_head;               // R_head will be the new head of the reversed list
    }
};

```