class Solution {
public:
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& preStart, int inStart, int inEnd,unordered_map<int,int>&mp) {
        if (inStart > inEnd) return nullptr;
        
        TreeNode* curr = new TreeNode(preorder[preStart]);
        int pos=mp[preorder[preStart]];
        preStart++; // Move to the next root in the preorder sequence
        curr->left = build(preorder, inorder, preStart, inStart, pos - 1,mp);
        curr->right = build(preorder, inorder, preStart, pos + 1, inEnd,mp);

        return curr;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<preorder.size();i++){
            mp[inorder[i]]=i;
        }
        int preStart = 0;
        return build(preorder, inorder, preStart, 0, preorder.size() - 1,mp);
    }
};