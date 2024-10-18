struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        // If both nodes are null, they are mirrors
        if (left == nullptr && right == nullptr) {
            return true;
        }
        // If one of them is null, they are not mirrors
        if (left == nullptr || right == nullptr) {
            return false;
        }
        // Check if the current nodes have the same value
        // and the left subtree of left is a mirror of the right subtree of right
        // and the right subtree of left is a mirror of the left subtree of right
        return (left->val == right->val)
               && isMirror(left->left, right->right)
               && isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) {
            return true; // An empty tree is symmetric
        }
        // Check if the left and right subtrees are mirrors
        return isMirror(root->left, root->right);
    }
};