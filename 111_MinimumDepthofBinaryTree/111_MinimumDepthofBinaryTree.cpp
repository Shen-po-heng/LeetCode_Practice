#include<algorithm>
using namespace std;
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
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0; // Base case: if root is null, the depth is 0
        
        // If one of the children is null, you must take the depth of the non-null child
        if (root->left == nullptr) return 1 + minDepth(root->right);
        if (root->right == nullptr) return 1 + minDepth(root->left);
        
        // Otherwise, take the minimum of the two children and add 1 for the current node
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
