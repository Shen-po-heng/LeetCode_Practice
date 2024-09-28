
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
    int getValue(ListNode* l){
        int num{0};
        int count{1};
        ListNode* tmp=l;
        while(tmp!=nullptr){
            num+=tmp->val*count;
            tmp=tmp->next;
            count*=10;
        }
        return num;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //get the value from list digit
        int num1{};
        int num2{};
        num1=getValue(l1);
        num2=getValue(l2);

        //sum of two Numbers
        int num_r=num1+num2;

        //store num_r
        ListNode* l_r=new ListNode(num_r%10);
        num_r/=10;
        ListNode* tmp=l_r;
        while(num_r!=0){
            tmp->next=new ListNode(num_r%10);
            tmp=tmp->next;
            num_r/=10;
        }
        return l_r;
    }
};