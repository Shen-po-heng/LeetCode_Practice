/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    bool Ans=true;
    struct ListNode *Left,*Right;
    int List_num=0;
    
    Left=Right=head;
    
    while(Right!=NULL){
        List_num++;
        Right=Right->next;
    }
    Right=head;
    //printf("%d ",List_num);
    int* array=(int *)malloc(sizeof(int)*(List_num/2));
    
    for(int i=0; i< List_num/2;i++){
        array[i]=Right->val;
        printf("%d", array[i]);
        if(i+1>=List_num/2&& List_num%2==1)
            Right=Right->next->next;
        else
            Right=Right->next;
    }
    //printf("%d",Right->val);
    
    for(int i=List_num/2-1; i>=0;i--){
        printf("%d %d;",array[i],Right->val);
        if(array[i]==Right->val){
            Right=Right->next;
            continue;
        }
        else{ 
            Ans=false;
            break;
        }
    }
    return Ans;
}
