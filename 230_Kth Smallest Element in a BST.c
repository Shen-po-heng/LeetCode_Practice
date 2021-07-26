/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int kthSmallest(struct TreeNode* root, int k){
    
    struct TreeNode* stack[10000];
    
    int count = 0, tmp = 0;

    while(count < k) {
        
        if (root != NULL) {
        
            stack[tmp++] = root;
            root = root->left;
        
        }
        
        else { //if the root is NULL, and then jump back
            
            root = stack[--tmp];
            count++;
            root = root->right;
        }
    }

    return stack[tmp]->val;
}
