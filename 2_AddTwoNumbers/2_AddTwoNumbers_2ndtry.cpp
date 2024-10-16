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
        ListNode* dummyhead=new ListNode(-1);
        ListNode* tmp=dummyhead;
        int digit_sum={0};
        int carry={0};
        while(l1 != nullptr || l2 != nullptr){
            if(l1 == nullptr || l2 == nullptr){ //if one list  is null
                digit_sum= (l1==nullptr) ? carry+l2->val: carry+l1->val;
            }else{
                digit_sum=l1->val+l2->val+carry;
            } 
            l1 = (l1 == nullptr) ? nullptr : l1->next;
            l2 = (l2 == nullptr) ? nullptr : l2->next;           
            carry=(digit_sum>=10) ? 1 : 0 ;
            tmp->next=new ListNode(digit_sum % 10);
            tmp=tmp->next;            
        }
        tmp->next=(carry==1)?new ListNode(carry):nullptr; // check the carry for new digit
        return dummyhead->next;
    }
};