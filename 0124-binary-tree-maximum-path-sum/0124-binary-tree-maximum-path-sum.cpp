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
    int maxPathSum(TreeNode* root) {
        int maximum = INT_MIN;
        maxpath(root, maximum);
        return maximum;
    }
    
    int maxpath(TreeNode* root, int &maximum){
        if(root == NULL) return 0;
        
        int leftsum = max(0,maxpath(root->left, maximum));
        int rightsum = max(0,maxpath(root->right, maximum));
        
        maximum = max(maximum, leftsum + rightsum + root->val);
        
        return max(leftsum, rightsum) + root->val;
    }
};