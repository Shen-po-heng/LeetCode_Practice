/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *tmp01=l1,*tmp02=l2,*head,*tmp=NULL;
    
    //for NULL situation
    if( l1 == NULL && l2 == NULL )
        return NULL;
    else if( l1 == NULL )
        return l2;
    else if( l2 == NULL )
        return l1;
    
    //for initial value
    if( l1->val > l2->val){
            tmp = l2;
            l2 = l2->next;
    } else {
        tmp = l1;
        l1 = l1->next;
    }
    
    head = tmp;//head for return
    
    //merge from two list
    while( l1 != NULL || l2 != NULL) 
        if(l1 == NULL){
            tmp->next = l2;
            tmp = tmp->next;
            l2 = l2->next;
        }
        else if(l2 == NULL){
            tmp->next = l1;
            tmp = tmp->next;
            l1 = l1->next;
        }
        else if( l1->val > l2->val){
            tmp->next = l2;
            tmp = tmp->next;
            l2 = l2->next;
        }else{
            tmp->next = l1;
            tmp = tmp->next;
            l1 = l1->next; 
        }
      return head;
}
