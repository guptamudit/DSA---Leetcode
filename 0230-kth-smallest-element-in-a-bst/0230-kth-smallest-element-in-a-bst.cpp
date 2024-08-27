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
    priority_queue <int, vector<int>, greater<int>> pq; //min heap
    void solve(TreeNode* temp){
        if(!temp) return;
        solve(temp->left);
        pq.push(temp->val);
        solve(temp->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        int res = 0;
        solve(root);
        for(int i = 0; i < k; i ++){
            int front = pq.top();
            res = max(res, front);
            pq.pop();
        }
        
        return res;
    }
};