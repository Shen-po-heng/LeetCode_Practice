/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root==NULL) 
        return NULL;
    if (q==root || p==root) 
        return root;
    
    struct TreeNode* left = lowestCommonAncestor(root->left, p, q);
    struct TreeNode* right = lowestCommonAncestor(root->right, p, q);
    
    if (left!=NULL && right!=NULL) 
        return root; //p,q on different side of root
    
    return left?left:right; // p,q on same side, either both on left, or both on right.
}
