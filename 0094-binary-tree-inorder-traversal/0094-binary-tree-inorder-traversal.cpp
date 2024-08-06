
class Solution {
void inorderTraversal(TreeNode* root, vector<int> &ans){
    if(root == NULL) return;
    
    inorderTraversal(root->left, ans);
    ans.push_back(root->val);
    inorderTraversal(root->right, ans);
}
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversal(root, ans);
        return ans;
    }
};