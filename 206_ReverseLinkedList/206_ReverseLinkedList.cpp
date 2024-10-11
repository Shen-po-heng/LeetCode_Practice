

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* R_head{};
        if(head!=nullptr){
            R_head = head; 
            head = head->next;
            R_head->next=nullptr;
        }      

        ListNode* tmp{};
        while(head!=nullptr){
            tmp=head;
            head=head->next;
            tmp->next=R_head;
            R_head=tmp;
        }
        return R_head;
    }
};