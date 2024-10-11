#include<vector>
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> R_list{};
        if(root!=nullptr){
            vector<int> leftchild=inorderTraversal(root->left);
            R_list.insert(R_list.end(), leftchild.begin(), leftchild.end());
            R_list.push_back(root->val);
            vector<int> rightchild=inorderTraversal(root->right);
            R_list.insert(R_list.end(), rightchild.begin(), rightchild.end());
        } 
        return R_list;
    }
};