class Solution {
private:
    void preorderTraversal(TreeNode* root, vector<int>& res) {
        if(root != nullptr) {
            res.push_back(root->val);
            preorderTraversal(root->left, res);
            preorderTraversal(root->right, res);
        } else {
            return;
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorderTraversal(root, res);
        return res;
    }

};