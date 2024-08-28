/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isvalidateBST(root, LONG_MIN, LONG_MAX);
    }
    
    bool isvalidateBST(TreeNode* root, long long minvalue, long long maxvalue){
        if(root == nullptr) return true;
        if(root->val >= maxvalue || root->val <= minvalue) return false;
        
        return isvalidateBST(root->left, minvalue, root->val) &&
               isvalidateBST(root->right, root->val, maxvalue);
    }
};