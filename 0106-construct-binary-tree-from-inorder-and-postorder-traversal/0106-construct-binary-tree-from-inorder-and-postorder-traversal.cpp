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
    TreeNode* bt(vector<int>& inorder , int is , int ie ,vector<int>& postorder , int ps , int pe , map<int ,int>& mpp ){

        if(is > ie || ps > pe){
            return NULL ;
        }

        TreeNode *root = new TreeNode(postorder[pe]);

        int pos = mpp[postorder[pe]] ;
        int right = ie - pos ;

        root->left = bt(inorder , is , pos-1 , postorder , ps , pe - right - 1  , mpp) ;

        root->right = bt(inorder , pos+1 , ie , postorder , pe-right , pe-1 , mpp) ;

        return root ;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {

        map<int ,int> mpp ;

        for(int i = 0 ; i< inorder.size() ;i++){
            mpp[inorder[i]] = i  ;
        }

        TreeNode* root = bt(inorder , 0 , inorder.size()-1 , postorder , 0, postorder.size()-1 , mpp) ;

        return root ;
    }
};