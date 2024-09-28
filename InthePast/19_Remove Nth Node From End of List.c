/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *tmp=head;
    int num=0;
    int limit;
    while(tmp){
        num++;
        tmp=tmp->next;
    }
    printf("num:%d",num);
    
    if (num <= 1) 
        return NULL;
    if(num==2 && n==1){
        head->next=NULL;
        return head;
    }
    else if(num==2 && n==2){
        head=head->next;
        return head;
    }
        
    
    tmp=head;
    limit=num-n;
    
    if (limit==0){//head need to move
        head=head->next;
        tmp->next=NULL;
        return head;
    }
    
    while(limit-1>0){
        limit--;
        tmp=tmp->next;
    }
    printf(" %d",tmp->val);
    
   
    
    tmp->next=tmp->next->next;
    return head;
}
