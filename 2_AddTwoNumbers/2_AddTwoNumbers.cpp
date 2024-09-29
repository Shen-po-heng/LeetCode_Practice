
 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l_r =  new ListNode(0);
        ListNode* tmp=l_r;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int digit_1 = (l1 != nullptr) ? l1->val : 0;
            int digit_2 = (l2 != nullptr) ? l2->val : 0;
            int sum = carry + digit_1 + digit_2;
            carry = sum / 10;
            tmp->next = new ListNode(sum % 10);
            tmp = tmp->next;
            l1 = (l1 != nullptr) ? l1->next : nullptr;
            l2 = (l2 != nullptr) ? l2->next : nullptr;
        }
        tmp=l_r;
        l_r=l_r->next;
        delete tmp;  // Freeing the memory allocated for dummyHead
        return l_r;
    }
};