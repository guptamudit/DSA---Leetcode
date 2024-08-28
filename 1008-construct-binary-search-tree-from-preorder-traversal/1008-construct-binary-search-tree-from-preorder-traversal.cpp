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
    TreeNode* constructBST(vector<int>& preorder, int& index, int limit) {
        if (index >= preorder.size() || preorder[index] > limit) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[index]);
        index++;
        root->left = constructBST(preorder, index, root->val);
        root->right = constructBST(preorder, index, limit);

        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return constructBST(preorder, index, INT_MAX);
    }
};